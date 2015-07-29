/********************************************************************************
** Form generated from reading UI file 'c_pro.ui'
**
** Created: Wed May 22 11:29:55 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_PRO_H
#define UI_C_PRO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_C_pro
{
public:
    QAction *actionShow_Database;
    QAction *actionExit;
    QAction *actionChange_Database;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *output;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QRadioButton *search_id;
    QRadioButton *search_name;
    QRadioButton *search_type;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QPushButton *pushButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *id;
    QLineEdit *name;
    QLineEdit *amount;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *price;
    QLineEdit *type;
    QLineEdit *shelf;
    QLabel *label_10;
    QWidget *tab_3;
    QPushButton *pushButton_4;
    QLabel *label_19;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *old_id;
    QLineEdit *new_id;
    QLineEdit *new_name;
    QLineEdit *new_amount;
    QLineEdit *new_price;
    QLineEdit *new_type;
    QLineEdit *new_shelf;
    QWidget *tab_4;
    QLabel *delete_results;
    QPushButton *pushButton_2;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *id_delete;
    QLabel *label_11;
    QWidget *tab_5;
    QTableWidget *removed_table;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QMenu *menuMain_menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *C_pro)
    {
        if (C_pro->objectName().isEmpty())
            C_pro->setObjectName(QString::fromUtf8("C_pro"));
        C_pro->resize(668, 409);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/inventory.png"), QSize(), QIcon::Normal, QIcon::Off);
        C_pro->setWindowIcon(icon);
        C_pro->setTabShape(QTabWidget::Rounded);
        actionShow_Database = new QAction(C_pro);
        actionShow_Database->setObjectName(QString::fromUtf8("actionShow_Database"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/show_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_Database->setIcon(icon1);
        actionExit = new QAction(C_pro);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionChange_Database = new QAction(C_pro);
        actionChange_Database->setObjectName(QString::fromUtf8("actionChange_Database"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/change_db.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChange_Database->setIcon(icon3);
        centralWidget = new QWidget(C_pro);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 651, 321));
        tabWidget->setFocusPolicy(Qt::WheelFocus);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 621, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        output = new QTableWidget(layoutWidget);
        if (output->columnCount() < 6)
            output->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        output->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        output->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        output->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        output->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        output->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        output->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        output->setObjectName(QString::fromUtf8("output"));
        output->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        output->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(output);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 260, 251, 19));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        search_id = new QRadioButton(layoutWidget1);
        search_id->setObjectName(QString::fromUtf8("search_id"));

        horizontalLayout_5->addWidget(search_id);

        search_name = new QRadioButton(layoutWidget1);
        search_name->setObjectName(QString::fromUtf8("search_name"));
        search_name->setChecked(true);

        horizontalLayout_5->addWidget(search_name);

        search_type = new QRadioButton(layoutWidget1);
        search_type->setObjectName(QString::fromUtf8("search_type"));

        horizontalLayout_5->addWidget(search_type);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 260, 131, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 200, 75, 23));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/add_tab2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 271, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        id = new QLineEdit(layoutWidget2);
        id->setObjectName(QString::fromUtf8("id"));

        verticalLayout_3->addWidget(id);

        name = new QLineEdit(layoutWidget2);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_3->addWidget(name);

        amount = new QLineEdit(layoutWidget2);
        amount->setObjectName(QString::fromUtf8("amount"));

        verticalLayout_3->addWidget(amount);


        horizontalLayout_2->addLayout(verticalLayout_3);

        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 110, 271, 76));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        price = new QLineEdit(layoutWidget3);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout_5->addWidget(price);

        type = new QLineEdit(layoutWidget3);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout_5->addWidget(type);

        shelf = new QLineEdit(layoutWidget3);
        shelf->setObjectName(QString::fromUtf8("shelf"));

        verticalLayout_5->addWidget(shelf);


        horizontalLayout_4->addLayout(verticalLayout_5);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(290, 20, 341, 261));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setLineWidth(4);
        label_10->setTextFormat(Qt::PlainText);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/1367421450_add-to-database.png")));
        label_10->setScaledContents(false);
        label_10->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 220, 81, 23));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/proceed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(350, 20, 251, 241));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/edit.png")));
        layoutWidget4 = new QWidget(tab_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(5, 20, 321, 180));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_6->addWidget(label_14);

        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_6->addWidget(label_15);

        label_16 = new QLabel(layoutWidget4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_6->addWidget(label_16);

        label_17 = new QLabel(layoutWidget4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(layoutWidget4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_6->addWidget(label_18);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        old_id = new QLineEdit(layoutWidget4);
        old_id->setObjectName(QString::fromUtf8("old_id"));

        verticalLayout_7->addWidget(old_id);

        new_id = new QLineEdit(layoutWidget4);
        new_id->setObjectName(QString::fromUtf8("new_id"));

        verticalLayout_7->addWidget(new_id);

        new_name = new QLineEdit(layoutWidget4);
        new_name->setObjectName(QString::fromUtf8("new_name"));

        verticalLayout_7->addWidget(new_name);

        new_amount = new QLineEdit(layoutWidget4);
        new_amount->setObjectName(QString::fromUtf8("new_amount"));

        verticalLayout_7->addWidget(new_amount);

        new_price = new QLineEdit(layoutWidget4);
        new_price->setObjectName(QString::fromUtf8("new_price"));

        verticalLayout_7->addWidget(new_price);

        new_type = new QLineEdit(layoutWidget4);
        new_type->setObjectName(QString::fromUtf8("new_type"));

        verticalLayout_7->addWidget(new_type);

        new_shelf = new QLineEdit(layoutWidget4);
        new_shelf->setObjectName(QString::fromUtf8("new_shelf"));

        verticalLayout_7->addWidget(new_shelf);


        horizontalLayout_6->addLayout(verticalLayout_7);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        delete_results = new QLabel(tab_4);
        delete_results->setObjectName(QString::fromUtf8("delete_results"));
        delete_results->setGeometry(QRect(10, 50, 281, 61));
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 130, 71, 31));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/1367419602_DeleteRed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        layoutWidget5 = new QWidget(tab_4);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 20, 281, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        id_delete = new QLineEdit(layoutWidget5);
        id_delete->setObjectName(QString::fromUtf8("id_delete"));

        horizontalLayout_3->addWidget(id_delete);

        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(330, 10, 251, 261));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/E:/Java Projects/Java_RTC_Example(MVC)/src/Icon/delete.png")));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        removed_table = new QTableWidget(tab_5);
        if (removed_table->columnCount() < 6)
            removed_table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        removed_table->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        removed_table->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        removed_table->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        removed_table->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        removed_table->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        removed_table->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        removed_table->setObjectName(QString::fromUtf8("removed_table"));
        removed_table->setGeometry(QRect(10, 40, 621, 192));
        removed_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        removed_table->setAlternatingRowColors(true);
        removed_table->setSelectionMode(QAbstractItemView::SingleSelection);
        removed_table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        removed_table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 10, 141, 23));
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 10, 141, 23));
        tabWidget->addTab(tab_5, QString());
        C_pro->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(C_pro);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 668, 21));
        menuMain_menu = new QMenu(menuBar);
        menuMain_menu->setObjectName(QString::fromUtf8("menuMain_menu"));
        C_pro->setMenuBar(menuBar);
        mainToolBar = new QToolBar(C_pro);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        C_pro->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(C_pro);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        C_pro->setStatusBar(statusBar);

        menuBar->addAction(menuMain_menu->menuAction());
        menuMain_menu->addAction(actionShow_Database);
        menuMain_menu->addAction(actionChange_Database);
        menuMain_menu->addSeparator();
        menuMain_menu->addAction(actionExit);
        mainToolBar->addAction(actionShow_Database);
        mainToolBar->addAction(actionChange_Database);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(C_pro);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(C_pro);
    } // setupUi

    void retranslateUi(QMainWindow *C_pro)
    {
        C_pro->setWindowTitle(QApplication::translate("C_pro", "Inventory", 0, QApplication::UnicodeUTF8));
        actionShow_Database->setText(QApplication::translate("C_pro", "Show Database", 0, QApplication::UnicodeUTF8));
        actionShow_Database->setShortcut(QApplication::translate("C_pro", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("C_pro", "Exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("C_pro", "Esc", 0, QApplication::UnicodeUTF8));
        actionChange_Database->setText(QApplication::translate("C_pro", "Change Database", 0, QApplication::UnicodeUTF8));
        actionChange_Database->setShortcut(QApplication::translate("C_pro", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("C_pro", "Search Key", 0, QApplication::UnicodeUTF8));
        lineEdit->setPlaceholderText(QString());
        QTableWidgetItem *___qtablewidgetitem = output->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("C_pro", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = output->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("C_pro", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = output->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("C_pro", "Amount", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = output->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("C_pro", "Price", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = output->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("C_pro", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = output->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("C_pro", "#Shelf", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("C_pro", "Search By :", 0, QApplication::UnicodeUTF8));
        search_id->setText(QApplication::translate("C_pro", "id", 0, QApplication::UnicodeUTF8));
        search_name->setText(QApplication::translate("C_pro", "name", 0, QApplication::UnicodeUTF8));
        search_type->setText(QApplication::translate("C_pro", "type", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("C_pro", "Retrieve All Records", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("C_pro", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("C_pro", "Search Inventory", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("C_pro", "Add", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("C_pro", "Return", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("C_pro", "ID", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("C_pro", "Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("C_pro", "Amount", 0, QApplication::UnicodeUTF8));
        id->setPlaceholderText(QApplication::translate("C_pro", "563-456-256", 0, QApplication::UnicodeUTF8));
        name->setPlaceholderText(QApplication::translate("C_pro", "Introduction to pattern design.", 0, QApplication::UnicodeUTF8));
        amount->setPlaceholderText(QApplication::translate("C_pro", "23", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("C_pro", "Price", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("C_pro", "Type", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("C_pro", "Shelf", 0, QApplication::UnicodeUTF8));
        price->setPlaceholderText(QApplication::translate("C_pro", "$123", 0, QApplication::UnicodeUTF8));
        type->setPlaceholderText(QApplication::translate("C_pro", "Computer Science", 0, QApplication::UnicodeUTF8));
        shelf->setPlaceholderText(QApplication::translate("C_pro", "31", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("C_pro", "Add to Inventory", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("C_pro", "Proceed", 0, QApplication::UnicodeUTF8));
        pushButton_4->setShortcut(QApplication::translate("C_pro", "Return", 0, QApplication::UnicodeUTF8));
        label_19->setText(QString());
        label_12->setText(QApplication::translate("C_pro", "Old ID", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("C_pro", "New ID", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("C_pro", "New Name", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("C_pro", "New Amount", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("C_pro", "New Price", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("C_pro", "New Type", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("C_pro", "New #Shelf", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("C_pro", "Edit", 0, QApplication::UnicodeUTF8));
        delete_results->setText(QString());
        pushButton_2->setText(QApplication::translate("C_pro", "Remove", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("C_pro", "Return", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("C_pro", "ID", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("C_pro", "Remove", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = removed_table->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("C_pro", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = removed_table->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("C_pro", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = removed_table->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("C_pro", "Amount", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = removed_table->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("C_pro", "Price", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = removed_table->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("C_pro", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = removed_table->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("C_pro", "#Shelf", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("C_pro", "Show Removed Records", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("C_pro", "Restore Selected Row", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("C_pro", "Removed Records", 0, QApplication::UnicodeUTF8));
        menuMain_menu->setTitle(QApplication::translate("C_pro", "Main menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class C_pro: public Ui_C_pro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_PRO_H
