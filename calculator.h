#include<QPushButton>
#include<QVBoxLayout>
#include<QLineEdit>
#include<QGridLayout>
#include<QMainWindow>
#include<QWidget>
#include<string>
#include<cstring>
#include<QString>
#include<stdlib.h>
class calculator:public QMainWindow
{
    Q_OBJECT
public:
    calculator();
    ~calculator();
    bool test_spot;
    bool test_calculate;
    static bool continue_;
    QPushButton *button_0;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_spot;
    QPushButton *button_add;
    QPushButton *button_minus;
    QPushButton *button_multiply;
    QPushButton *button_divide;
    QPushButton *button_CE;
    QPushButton *button_delete;
    QPushButton *button_equal;
    QPushButton *button_left;
    QPushButton *button_right;
    QPushButton *button_arrow;
    QPushButton *button_change;
    QLineEdit *text;
    QString input;
    QLineEdit *result;
    QString output;
private slots:
    void output_0();
    void output_1();
    void output_2();
    void output_3();
    void output_4();
    void output_5();
    void output_6();
    void output_7();
    void output_8();
    void output_9();
    void output_spot();
    void output_add();
    void output_minus();
    void output_multiply();
    void output_divide();
    void output_left();
    void output_right();
    void equal_clicked();
    void CE_clicked();
    void arrow_clicked();
    void c_clicked();
    void change_clicked();
    QString calculate(QString input);
};
