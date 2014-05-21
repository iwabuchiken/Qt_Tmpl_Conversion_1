#include "converter.h"
#include "ui_converter.h"

#include <QMessageBox>

converter::converter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::converter)
{
    ui->setupUi(this);
}

converter::~converter()
{
    delete ui;
}

void converter::on_BT_Choose_1_clicked()
{

}

void converter::on_BT_Choose_2_clicked()
{

}

void converter::on_BT_Quit_clicked()
{
    quitApp();
}

void converter::on_BT_App_clicked()
{

}

void converter::on_BT_Exec_clicked()
{

}

void converter::quitApp()
{
    QString title = "Converter";

    QString msg;

    msg += "\nDo you really want to quit?\n";

    QMessageBox messageBox;
    messageBox.setWindowTitle(title);
//    messageBox.setWindowTitle(tr("Converter"));

    messageBox.setText(msg);

    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();

}


void converter::on_actionQuit_triggered()
{
    quitApp();
}
