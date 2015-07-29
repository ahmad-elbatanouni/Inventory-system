#include "c_pro.h"
#include "ui_c_pro.h"
#include <fstream>
#include <iostream>
#include <QtGui>

using namespace std;

C_pro::C_pro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::C_pro)
{
    ui->setupUi(this);
}

C_pro::~C_pro()
{
    delete ui;
}


void C_pro::Error(QString message, int time) {
    QPalette palette;
    palette.setColor(QPalette::WindowText, Qt::red);
    statusBar()->setPalette(palette);
    ui->statusBar->showMessage(message, time);
}






class info
{
public :
    QString idQ, nameQ, amountQ, priceQ, typeQ, shelfQ;
    string exists, id, name, amount, price, type, shelf;
    string fileds[7];
    QTableWidgetItem *table_item;
    QString from_String;
    static int row_selected;
    static QPalette palette;
};

void C_pro::Success(QString message, int time) {
    QPalette palette;
    palette.setColor(QPalette::WindowText, Qt::blue);
    statusBar()->setPalette(palette);
    ui->statusBar->showMessage(message, time);
}

class file_path {
public:
    static char *filePath;
};
char *file_path::filePath = "G:\dbx.txt";

class FileOperation {
    private:
        char *file_path;
        string data;
        int start_point;
    public:
        void setFilePath(char *file_path) {this->file_path = file_path;}
        void setData(string data) {this->data = data;}
        string getData() {return this->data;}
        bool write(string data) {
            setData(data);
            ofstream write(file_path, ios::app);
            if(write.is_open()) {
                write << getData();
            } else {
                return false;
            }
            write.close();
            return true;
        }

        int get_position(string id_sent){
            ifstream read(file_path, ios::in|ios::binary);
            info data1;
            start_point = 0;
            while(!read.eof()) {
                start_point = read.tellg();
                getline(read, data1.exists, '|');
                getline(read, data1.id, '|');
                getline(read, data1.name, '|');
                getline(read, data1.amount, '|');
                getline(read, data1.price, '|');
                getline(read, data1.type, '|');
                getline(read, data1.shelf, '\n');
                if(data1.id == id_sent) {
                    break;
                }
            }
            read.close();
            return start_point;
        }

        bool exists(string id_sent){
            ifstream read(file_path, ios::in);
            info data1;
            while(!read.eof()) {
                getline(read, data1.exists, '|');
                getline(read, data1.id, '|');
                getline(read, data1.name, '|');
                getline(read, data1.amount, '|');
                getline(read, data1.price, '|');
                getline(read, data1.type, '|');
                getline(read, data1.shelf, '\n');
                if(data1.id == id_sent) {
                    read.close();
                    return true;
                }
            }
            read.close();
            return false;
        }

        void addToExisting(string id, string amount){
            info data;
            ifstream read(file_path, ios::in);
            ofstream write("temp.txt", ios::out);
            int amount_sent = atoi(amount.c_str());
            while(!read.eof()) {
                getline(read, data.exists, '|');
                getline(read, data.id, '|');
                getline(read, data.name, '|');
                getline(read, data.amount, '|');
                getline(read, data.price, '|');
                getline(read, data.type, '|');
                getline(read, data.shelf, '\n');
                if(id == data.id && !read.eof() && data.exists != "*") {
                    amount_sent += atoi(data.amount.c_str());
                    write << " |" << data.id << "|" << data.name << "|" << amount_sent << "|" << data.price << "|" << data.type << "|" << data.shelf << "\n";
                }
                else if(!read.eof())
                    write << data.exists << "|" << data.id << "|" << data.name << "|" << data.amount << "|" << data.price << "|" << data.type << "|" << data.shelf << "\n";
            }
            read.close();
            write.close();
            remove(file_path::filePath);
            rename("temp.txt", file_path::filePath);
        }
};

void C_pro::on_lineEdit_textChanged(QString x)
{
    int row_number = 0;
    static int n_r = 0;
    if(x == "") {
        while(n_r >= 0) {
            ui->output->removeRow(n_r);
            n_r--;
        }
        n_r = 0;
    }
    else {
        info data;
        ifstream read(file_path::filePath);
        string searchKey;
        searchKey = x.toStdString();
        while(!read.eof()) {
            getline(read, data.fileds[0], '|');
            getline(read, data.fileds[1], '|');
            getline(read, data.fileds[2], '|');
            getline(read, data.fileds[3], '|');
            getline(read, data.fileds[4], '|');
            getline(read, data.fileds[5], '|');
            getline(read, data.fileds[6], '\n');
            if(ui->search_name->isChecked()) {
                if(data.fileds[2].find(searchKey) != string::npos && !read.eof() && data.fileds[0] != "*") {
                    ui->output->setRowCount(row_number + 1);
                    for(int i = 1; i <= 6; i++) {
                        data.from_String = QString::fromStdString(data.fileds[i]);
                        data.table_item = new QTableWidgetItem( data.from_String );
                        ui->output->setItem(row_number, (i - 1), data.table_item);
                    }
                    row_number++;
                    n_r++;
                }
            } else if(ui->search_id->isChecked()) {
                if(data.fileds[1].find(searchKey) != string::npos && !read.eof() && data.fileds[0] != "*") {
                    ui->output->setRowCount(row_number + 1);
                    for(int i = 1; i <= 6; i++) {
                        data.from_String = QString::fromStdString(data.fileds[i]);
                        data.table_item = new QTableWidgetItem( data.from_String );
                        ui->output->setItem(row_number, (i - 1), data.table_item);
                    }
                    row_number++;
                    n_r++;
                }
            } else if(ui->search_type->isChecked()) {
                if(data.fileds[5].find(searchKey) != string::npos && !read.eof() && data.fileds[0] != "*") {
                    ui->output->setRowCount(row_number + 1);
                    for(int i = 1; i <= 6; i++) {
                        data.from_String = QString::fromStdString(data.fileds[i]);
                        data.table_item = new QTableWidgetItem( data.from_String );
                        ui->output->setItem(row_number, (i - 1), data.table_item);
                    }
                    row_number++;
                    n_r++;
                }
            }
        }
    }
}

void C_pro::on_pushButton_clicked()
{
    info data;
    if( ui->id->text().isEmpty() ||  ui->name->text().isEmpty() ||  ui->amount->text().isEmpty() ||  ui->price->text().isEmpty() ||  ui->type->text().isEmpty() ||  ui->shelf->text().isEmpty()) {
        Error("All Fields Are Required.", 3000);
        return;
    }

    data.id = ui->id->text().toStdString();
    data.name = ui->name->text().toStdString();
    data.amount = ui->amount->text().toStdString();
    data.price = ui->price->text().toStdString();
    data.type = ui->type->text().toStdString();
    data.shelf = ui->shelf->text().toStdString();
    ofstream write(file_path::filePath, ios::app);
    FileOperation file;
    file.setFilePath(file_path::filePath);
    if(write.is_open()) {
        if(!file.exists(data.id))
            write << " |" << data.id << "|" << data.name << "|" << data.amount << "|" << data.price << "|" << data.type << "|" << data.shelf << "\n";
        else {
            write.close();
            file.addToExisting(data.id, data.amount);
            QMessageBox::information(this, "Error", "ID allready exists.\nAmount was successfully added.");
        }
        Success("Successfully Added.", 3000);
        ui->id->clear();
        ui->name->clear();
        ui->amount->clear();
        ui->price->clear();
        ui->type->clear();
        ui->shelf->clear();
    }
    else {
        Error("Couldn't Open File.", 3000);
    }

}

void C_pro::on_pushButton_2_clicked()
{
    if(ui->delete_results->text() == "") {
        Error("No ID Selected", 3000);
    } else {
        FileOperation FO;
        FO.setFilePath(file_path::filePath);
        int pos = FO.get_position(ui->id_delete->text().toStdString());
        ofstream read(file_path::filePath, ios::out|ios::in|ios::binary);
        read.seekp(pos, ios::beg);
        read << "*";
        read.close();
        Success("Removed Successfully.", 3000);
        ui->id_delete->clear();
        ui->delete_results->clear();
    }

}

void C_pro::on_id_delete_textChanged(QString x)
{
    ui->delete_results->clear();
    info data;
    fstream read(file_path::filePath, ios::binary | ios::in | ios::out);
    string searchKey;
    searchKey = x.toStdString();
    while(!read.eof()) {
        getline(read, data.fileds[0], '|');
        getline(read, data.fileds[1], '|');
        getline(read, data.fileds[2], '|');
        getline(read, data.fileds[3], '|');
        getline(read, data.fileds[4], '|');
        getline(read, data.fileds[5], '|');
        getline(read, data.fileds[6], '\n');
        if(data.fileds[1] == searchKey && data.exists != "*") {
            data.idQ = QString::fromStdString(data.fileds[1]);
            data.nameQ = QString::fromStdString(data.fileds[2]);
            data.amountQ = QString::fromStdString(data.fileds[3]);
            ui->delete_results->setText(data.idQ + "=> Name: " + data.nameQ + ", Amount: " + data.amountQ);
        }
    }
    if(x == "")
        ui->delete_results->clear();
}

void C_pro::on_pushButton_3_clicked()
{
    int row_number = 0;
    info data;
    ifstream read(file_path::filePath);
    while(!read.eof()) {
        getline(read, data.fileds[0], '|');
        getline(read, data.fileds[1], '|');
        getline(read, data.fileds[2], '|');
        getline(read, data.fileds[3], '|');
        getline(read, data.fileds[4], '|');
        getline(read, data.fileds[5], '|');
        getline(read, data.fileds[6], '\n');
        if(!read.eof() && data.fileds[0] != "*") {
            ui->output->setRowCount(row_number + 1);
            for(int i = 1; i <= 6; i++) {
                data.from_String = QString::fromStdString(data.fileds[i]);
                data.table_item = new QTableWidgetItem( data.from_String );
                ui->output->setItem(row_number, (i - 1), data.table_item);
            }
            row_number++;
        }
    }
}

void C_pro::on_actionShow_Database_triggered()
{
    system(file_path::filePath);
}

void C_pro::on_actionExit_triggered()
{
    exit(0);
}

void C_pro::on_old_id_textChanged(QString )
{
    info data;
    ifstream read(file_path::filePath);
    bool found = false;
    while(!read.eof()) {
        getline(read, data.fileds[0], '|');
        getline(read, data.fileds[1], '|');
        getline(read, data.fileds[2], '|');
        getline(read, data.fileds[3], '|');
        getline(read, data.fileds[4], '|');
        getline(read, data.fileds[5], '|');
        getline(read, data.fileds[6], '\n');
        if(!read.eof() && data.fileds[0] != "*" && data.fileds[1] == ui->old_id->text().toStdString()) {
            ui->new_id->setText(QString::fromStdString(data.fileds[1]));
            ui->new_name->setText(QString::fromStdString(data.fileds[2]));
            ui->new_amount->setText(QString::fromStdString(data.fileds[3]));
            ui->new_price->setText(QString::fromStdString(data.fileds[4]));
            ui->new_type->setText(QString::fromStdString(data.fileds[5]));
            ui->new_shelf->setText(QString::fromStdString(data.fileds[6]));
            found = true;
            break;
        }
    }
    read.close();
    if(!found) {
        Error("No such ID.", 1000);
    }
}

void C_pro::on_actionChange_Database_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr("Choose A Database"), QDir::currentPath(), tr("Text files (*.txt)"), 0, QFileDialog::DontUseNativeDialog);
    file_name.replace("/", "\\");
    string FP = file_name.toStdString();
    char *fPath = new char[FP.length() + 1];
    strcpy(fPath, FP.c_str());
    file_path::filePath = fPath;//"G:\db.txt";
    Success("Database changed to : [" + file_name + "] successfully", 3000);
}

void C_pro::on_pushButton_4_clicked()
{
    info data;
    string old_id = ui->old_id->text().toStdString();
    data.id = ui->new_id->text().toStdString();
    data.name = ui->new_name->text().toStdString();
    data.amount = ui->new_amount->text().toStdString();
    data.price = ui->new_price->text().toStdString();
    data.type = ui->new_type->text().toStdString();
    data.shelf = ui->new_shelf->text().toStdString();
    if(data.id == "" || data.name == "" || data.price == "" || data.amount == "" || data.type == "" || data.shelf == "") {
        Error("All Fields Are Required.", 3000);
    }
    ifstream read(file_path::filePath, ios::in);
    ofstream write("temp.txt", ios::out);
    while(!read.eof()) {
        getline(read, data.fileds[0], '|');
        getline(read, data.fileds[1], '|');
        getline(read, data.fileds[2], '|');
        getline(read, data.fileds[3], '|');
        getline(read, data.fileds[4], '|');
        getline(read, data.fileds[5], '|');
        getline(read, data.fileds[6], '\n');
        if(old_id == data.fileds[1] && data.fileds[0] != "*" && !read.eof()) {
            write << " |" << data.id << "|" << data.name << "|" << data.amount << "|" << data.price << "|" << data.type << "|" << data.shelf << "\n";
        }
        else if(!read.eof()) {
            write << data.fileds[0] << "|" << data.fileds[1] << "|" << data.fileds[2] << "|" << data.fileds[3] << "|" << data.fileds[4] << "|" << data.fileds[5] << "|" << data.fileds[6] << "\n";
        }
    }
    read.close();
    write.close();
    remove(file_path::filePath);
    rename("temp.txt", file_path::filePath);
    Success("Edited Successfully.", 3000);
    ui->new_id->clear();
    ui->new_name->clear();
    ui->new_amount->clear();
    ui->new_price->clear();
    ui->new_type->clear();
    ui->new_shelf->clear();
}

void C_pro::on_pushButton_5_clicked()
{
    int row_number = 0;
    info data;
    ifstream read(file_path::filePath);
    while(!read.eof()) {
        getline(read, data.fileds[0], '|');
        getline(read, data.fileds[1], '|');
        getline(read, data.fileds[2], '|');
        getline(read, data.fileds[3], '|');
        getline(read, data.fileds[4], '|');
        getline(read, data.fileds[5], '|');
        getline(read, data.fileds[6], '\n');
        if(!read.eof() && data.fileds[0] == "*") {
            ui->removed_table->setRowCount(row_number + 1);
            for(int i = 1; i <= 6; i++) {
                data.from_String = QString::fromStdString(data.fileds[i]);
                data.table_item = new QTableWidgetItem( data.from_String );
                ui->removed_table->setItem(row_number, (i - 1), data.table_item);
            }
            row_number++;
        }
    }
}



void C_pro::on_pushButton_6_clicked()
{
    if(info::row_selected != -1) {
        string id = ui->removed_table->item(info::row_selected, 0)->text().toStdString();
        info data;
        fstream read(file_path::filePath, ios::in|ios::out|ios::binary);
        int position = 0;
        while(!read.eof()) {
            position = read.tellg();
            getline(read, data.fileds[0], '|');
            getline(read, data.fileds[1], '|');
            getline(read, data.fileds[2], '|');
            getline(read, data.fileds[3], '|');
            getline(read, data.fileds[4], '|');
            getline(read, data.fileds[5], '|');
            getline(read, data.fileds[6], '\n');
            if(!read.eof() && data.fileds[1] == id) {
                break;
            }
        }
        read.seekp(position, ios::beg);
        read << " ";
        read.close();
        ui->removed_table->removeRow(info::row_selected);
        Success("Restored Successfully.", 1000);
    } else {
        Error("No row selected.", 3000);
    }
    info::row_selected = -1;
}

int info::row_selected = -1;

void C_pro::on_removed_table_cellClicked(int row, int column)
{
    info::row_selected = row;
}
