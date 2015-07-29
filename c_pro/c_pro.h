#ifndef C_PRO_H
#define C_PRO_H

#include <QMainWindow>

namespace Ui {
    class C_pro;
}

class C_pro : public QMainWindow
{
    Q_OBJECT

public:
    explicit C_pro(QWidget *parent = 0);
    ~C_pro();
    void Error(QString , int );
    void Success(QString , int );


private:
    Ui::C_pro *ui;

private slots:
    void on_removed_table_cellClicked(int row, int column);
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_actionChange_Database_triggered();
    void on_old_id_textChanged(QString );
    void on_actionExit_triggered();
    void on_actionShow_Database_triggered();
    void on_pushButton_3_clicked();
    void on_id_delete_textChanged(QString );
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_lineEdit_textChanged(QString );
};

#endif // C_PRO_H
