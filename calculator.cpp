#include "calculator.h"
bool calculator::continue_=0;
calculator::calculator():QMainWindow()
{
    test_calculate=0;
    test_spot=0;
    button_0=new QPushButton("0");
    button_1=new QPushButton("1");
    button_2=new QPushButton("2");
    button_3=new QPushButton("3");
    button_4=new QPushButton("4");
    button_5=new QPushButton("5");
    button_6=new QPushButton("6");
    button_7=new QPushButton("7");
    button_8=new QPushButton("8");
    button_9=new QPushButton("9");
    button_spot=new QPushButton(".");
    button_add=new QPushButton("+");
    button_minus=new QPushButton("-");
    button_multiply=new QPushButton("×");
    button_divide=new QPushButton("÷");
    button_CE=new QPushButton("CE");
    button_arrow=new QPushButton("←");
    button_delete=new QPushButton("c");
    button_equal=new QPushButton("=");
    button_left=new QPushButton("(");
    button_right=new QPushButton(")");
    button_change=new QPushButton("±");
    text=new QLineEdit;
    result=new QLineEdit;
    input=" ";
    QWidget *see_=new QWidget;
    this->setCentralWidget(see_);
    calculator::text->setText(calculator::input);
    calculator::result->setText(calculator::output);
    QGridLayout *arrange=new QGridLayout(this);
    text->setFixedHeight(50);
    result->setFixedHeight(50);
    arrange->addWidget(text,0,0,1,3);
    arrange->addWidget(result,0,3,1,2);
    arrange->setRowStretch(0,100);
    arrange->addWidget(button_delete,1,0);
    arrange->addWidget(button_arrow,1,1);
    arrange->addWidget(button_CE,1,2);
    arrange->addWidget(button_left,1,3);
    arrange->addWidget(button_right,1,4);
    arrange->addWidget(button_7,2,0);
    arrange->addWidget(button_8,2,1);
    arrange->addWidget(button_9,2,2);
    arrange->addWidget(button_divide,2,3);
    arrange->addWidget(button_left,2,4);
    arrange->addWidget(button_4,3,0);
    arrange->addWidget(button_5,3,1);
    arrange->addWidget(button_6,3,2);
    arrange->addWidget(button_multiply,3,3);
    arrange->addWidget(button_1,4,0);
    arrange->addWidget(button_2,4,1);
    arrange->addWidget(button_3,4,2);
    arrange->addWidget(button_minus,4,3);
    arrange->addWidget(button_equal,4,4,2,1);
    arrange->addWidget(button_0,5,0);
    arrange->addWidget(button_change,5,1);
    arrange->addWidget(button_spot,5,2);
    arrange->addWidget(button_add,5,3);
    see_->setLayout(arrange);
    connect(button_0,SIGNAL(clicked(bool)),this,SLOT(output_0()));
    connect(button_1,SIGNAL(clicked(bool)),this,SLOT(output_1()));
    connect(button_2,SIGNAL(clicked(bool)),this,SLOT(output_2()));
    connect(button_3,SIGNAL(clicked(bool)),this,SLOT(output_3()));
    connect(button_4,SIGNAL(clicked(bool)),this,SLOT(output_4()));
    connect(button_5,SIGNAL(clicked(bool)),this,SLOT(output_5()));
    connect(button_6,SIGNAL(clicked(bool)),this,SLOT(output_6()));
    connect(button_7,SIGNAL(clicked(bool)),this,SLOT(output_7()));
    connect(button_8,SIGNAL(clicked(bool)),this,SLOT(output_8()));
    connect(button_9,SIGNAL(clicked(bool)),this,SLOT(output_9()));
    connect(button_spot,SIGNAL(clicked(bool)),this,SLOT(output_spot()));
    connect(button_add,SIGNAL(clicked(bool)),this,SLOT(output_add()));
    connect(button_minus,SIGNAL(clicked(bool)),this,SLOT(output_minus()));
    connect(button_multiply,SIGNAL(clicked(bool)),this,SLOT(output_multiply()));
    connect(button_divide,SIGNAL(clicked(bool)),this,SLOT(output_divide()));
    connect(button_left,SIGNAL(clicked(bool)),this,SLOT(output_left()));
    connect(button_right,SIGNAL(clicked(bool)),this,SLOT(output_right()));
    connect(button_equal,SIGNAL(clicked(bool)),this,SLOT(equal_clicked()));
    connect(button_CE,SIGNAL(clicked(bool)),this,SLOT(CE_clicked()));
    connect(button_delete,SIGNAL(clicked(bool)),this,SLOT(c_clicked()));
    connect(button_arrow,SIGNAL(clicked(bool)),this,SLOT(arrow_clicked()));
    connect(button_change,SIGNAL(clicked(bool)),this,SLOT(change_clicked()));
}
calculator::~calculator()
{
    delete button_0;
    delete button_1;
    delete button_2;
    delete button_3;
    delete button_4;
    delete button_5;
    delete button_6;
    delete button_7;
    delete button_8;
    delete button_9;
    delete button_spot;
    delete button_add;
    delete button_minus;
    delete button_multiply;
    delete button_divide;
    delete button_equal;
    delete button_left;
    delete button_right;
    delete button_CE;
    delete button_delete;
    delete text;
}
void calculator::change_clicked()
{
    static bool symbol=0;
    if(symbol==0)
    {
        input+='-';
        symbol=1;
    }
    else
    {
        input+='+';
        symbol=0;
    }
    text->setText(input);
}

void calculator::output_0()
{
    input+='0';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_1()
{
    input+='1';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_2()
{
    input+='2';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_3()
{
    input+='3';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_4()
{
    input+='4';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_5()
{
    input+='5';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_6()
{
    input+='6';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_7()
{
    input+='7';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_8()
{
    input+='8';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_9()
{
    input+='9';
    continue_=0;
    this->test_calculate=1;
    text->setText(input);
}
void calculator::output_left()
{
    input+='(';
    continue_=0;
    text->setText(input);
}
void calculator::output_right()
{
    input+=')';
    continue_=0;
    text->setText(input);
}
void calculator::arrow_clicked()
{
    continue_=0;
    input=input.left(input.length()-1);
    text->setText(input);
}
void calculator::CE_clicked()
{
    continue_=0;
    test_spot=0;
    input+='=';
    QByteArray temp=input.toLatin1();
    char * target=temp.data();
    int i;
    for(i=0;target[i]!='=';i++){}
    for(int j=i;target[j]!='+'&&target[j]!='-'&&target[j]!='*'&&target[j]!='/';j--)
    {
        input=input.left(input.length()-1);
    }
    text->setText(input);
}
void calculator::output_spot()
{
    continue_=0;
    if(test_spot==0)
    {
        input+='.';
        this->test_spot=1;
    }
    else
    {
        input=" wrong 3! ";
    }
    text->setText(input);
}
void calculator::output_add()
{
    continue_=0;
    if(test_calculate==0)
    {
        input=" wrong 4! ";
    }
    else
    {
        input+='+';
        test_calculate=0;
        test_spot=0;
    }
    text->setText(input);
}
void calculator::output_minus()
{
    continue_=0;
    if(test_calculate==0)
    {
        input="wrong 5! ";
    }
    else
    {
        input+='-';
        test_calculate=0;
        test_spot=0;
    }
    text->setText(input);
}
void calculator::output_multiply()
{
    continue_=0;
    if(test_calculate==0)
    {
        input="wrong 6! ";
    }
    else
    {
        input+='*';
        test_calculate=0;
        test_spot=0;
    }
    text->setText(input);
}
void calculator::output_divide()
{
    continue_=0;
    if(test_calculate==0)
    {
        input="wrong 7! ";
    }
    else
    {
        input+='/';
        test_calculate=0;
        test_spot=0;
    }
    text->setText(input);
}
void calculator::c_clicked()
{
    continue_=0;
    test_spot=0;
    input=" ";
    output=" ";
    text->setText(input);
    result->setText(output);
}

void calculator::equal_clicked()
{

    if(continue_==0)
    {
        input+='=';
        output=calculate(input);
        text->setText(input);
        result->setText(output);
        continue_=1;
    }
    else
    {
        QByteArray temp=input.toLatin1();
        char * arrange=temp.data();
        int i;
        for(i=0;arrange[i]!='+'&&arrange[i]!='-'&&arrange[i]!='*'&&arrange[i]!='/';i++)
        {}
        QString next=output;
        for(int j=i;arrange[j]!='=';j++)
        {
            next+=arrange[j];
        }
        next+='=';
        output=calculate(next);
        result->setText(output);
    }
}
QString calculator::calculate(QString input)
{
    QByteArray te=input.toLatin1();
    char * head=te.data();
    for(int i=0;head[i]!='=';i++)
    {
        if(head[i]=='(')
        {
            bool has_bracket=1;
            char * find_left=head+i;
            char * find_right;
            find_right=find_left;
            while(*find_right!='=')
            {
                if(*find_right==')')
                {
                    has_bracket=0;
                    QString temp;
                    find_left++;
                   while(find_left!=find_right)
                   {
                       temp+=*find_left;
                       find_left++;
                   }
                   QString new_target;
                   for(int j=0;head[j]!=head[i];j++)
                   {
                       new_target+=head[j];
                   }
                   temp+='=';
                   new_target+=calculate(temp);
                   find_right++;
                   while(*find_right!='=')
                   {
                       new_target+=*find_right;
                       find_right++;
                   }
                   new_target+='=';
                   return calculate(new_target);
                }
                find_right++;
            }
        }
    }
    for(int i=0;head[i]!='=';i++)
    {
        if(head[i]=='*')
        {
            char *left;
            left=head+i;
            char *right=left;
            left--;
            bool last=0;
            while(*left!='+'&&*left!='-'&&*left!='*'&&*left!='/'&&*left!=head[0])
            {
                left--;
            }
            char *get=left;
            if(left!=head)
            {
                get++;
                last=1;
            }

            char num1[20];
            for(int j=0;*get!=head[i];j++)
            {
                num1[j]=*get;
                get++;
            }
            char num2 [20];
            right++;
            for(int j=0;*right!='+'&&*right!='-'&&*right!='*'&&*right!='/'&&*right!='=';j++)
            {
                num2[j]=*right;
                right++;
            }
            if(last==0)
            {
                if(*right=='=')
                {
                return QString::number(atof(num1)*atof(num2),'f',6);
                }
                else
                {
                     QString tail;
                     while(*right!='=')
                    {
                        tail+=*right;
                        right++;
                    }
                     tail+='=';
                     QString str=QString::number(atof(num1)*atof(num2),'f',6);
                     str+=tail;
                     return calculate(str);
                }
            }
            else
            {
                QString ahead;
                char *arrange=left;
                while(*arrange!=head[0])
               {
                   arrange--;
               }
                while(arrange!=left)
                {
                    ahead+=*arrange;
                    arrange++;
                }
                ahead+=*left;
                ahead+=QString::number(atof(num1)*atof(num2),'f',6);
                ahead+='=';
                return calculate(ahead);
            }
        }
        if(head[i]=='/')
        {
            char *left;
            left=head+i;
            char *right=left;
            left--;
            bool last=0;
            while(*left!='+'&&*left!='-'&&*left!='*'&&*left!='/'&&*left!=head[0])
            {
                left--;
            }
            char *get=left;
            if(left!=head)
            {
                get++;
                last=1;
            }
            char num1[20];
            for(int j=0;*get!=head[i];j++)
            {
                num1[j]=*get;
                get++;
            }
            char num2 [20];
            right++;
            for(int j=0;*right!='+'&&*right!='-'&&*right!='*'&&*right!='/'&&*right!='=';j++)
            {
                num2[j]=*right;
                right++;
            }
            if(atof(num2)==0)
            {
                return "wrong! 9";
            }
            if(last==0)
            {
                if(*right=='=')
                {
                    return QString::number(atof(num1)/atof(num2),'f',6);
                }
                else
                {
                     QString tail;
                     while(*right!='=')
                    {
                        tail+=*right;
                        right++;
                    }
                    tail+='=';
                    QString str=QString::number(atof(num1)/atof(num2),'f',6);
                     str+=tail;
                    return calculate(str);
                }
            }
            else
            {
                QString ahead;
                char *arrange=left;
                while(*arrange!=head[0])
               {
                   arrange--;
               }
                while(arrange!=left)
                {
                    ahead+=*arrange;
                    arrange++;
                }
                ahead+=*left;
                ahead+=QString::number(atof(num1)/atof(num2),'f',6);
                ahead+='=';
                return calculate(ahead);
            }
        }
    }
    for(int i=0;head[i]!='=';i++)
    {
        if(head[i]=='+')
        {
            char *left;
            left=head+i;
            char *right=left;
            while(*left!=head[0])
            {
                left--;
            }
            char num1[20];
            for(int j=0;*left!=head[i];j++)
            {
                num1[j]=*left;
                left++;
            }
            char num2 [20];
            right++;
            for(int j=0;*right!='+'&&*right!='-'&&*right!='=';j++)
            {
                num2[j]=*right;
                right++;
            }
            if(*right=='=')
            {
                return QString::number(atof(num1)+atof(num2),'f',6);
            }
            else
            {
                 QString tail;
                 while(*right!='=')
                {
                    tail+=*right;
                    right++;
                }
                 tail+='=';
                 QString str=QString::number(atof(num1)+atof(num2),'f',6);
                 str+=tail;
                return calculate(str);
            }
        }
        if(head[i]=='-'&&head[i-1]!='+'&&head[i-1]!='-'&&head[i-1]!='*'&&head[i-1]!='/'&&i!=0)
        {
            char *left=head+i;
            char *right=left;
            while(*left!=head[0])
            {
                left--;
            }
            char num1[20];
            for(int j=0;*left!=head[i];j++)
            {
                num1[j]=*left;
                left++;
            }
            char num2 [20];
            right++;
            for(int j=0;*right!='+'&&*right!='-'&&*right!='=';j++)
            {
                num2[j]=*right;
                right++;
            }
            if(*right=='=')
            {
                return QString::number(atof(num1)-atof(num2),'f',6);
            }
            else
            {
                 QString tail;
                 while(*right!='=')
                {
                    tail+=*right;
                    right++;
                }
                 tail+='=';
                 QString str=QString::number(atof(num1)-atof(num2),'f',6);
                 str+=tail;
                return calculate(str);
            }
        }

    }
}

