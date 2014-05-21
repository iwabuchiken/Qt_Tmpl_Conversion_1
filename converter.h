#ifndef CONVERTER_H
#define CONVERTER_H

#include <QMainWindow>

namespace Ui {
class converter;
}

class converter : public QMainWindow
{
    Q_OBJECT

public:
    explicit converter(QWidget *parent = 0);
    ~converter();

private slots:
    void on_BT_Choose_1_clicked();

    void on_BT_Choose_2_clicked();

    void on_BT_Quit_clicked();

    void on_BT_App_clicked();

    void on_BT_Exec_clicked();

    void on_actionQuit_triggered();

private:
    Ui::converter *ui;

    void quitApp(void);
};

#endif // CONVERTER_H
