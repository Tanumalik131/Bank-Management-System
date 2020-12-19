#include<iostream>
using namespace std;
#include<conio.h>
class bank
{
    char name[20];
    int accno;
    char actype[20];
    int bal;

public:
    void opbal(void);
    void deposit(void);
    void withdraw(void);
    void display(void);
};
void bank::opbal(void)
{
    cout<<"\n enter your name:\t";
    cin>>name;
    cout<<"\n enter acc no:\t";
    cin>>accno;
    cout<<"\n enter account type:\t";
    cin>>actype;
    cout<<"\n enter opening balance:\t";
    cin>>bal;
}
void bank::deposit(void)
{
    int deposit=0;
    cout<<"enter deposit amount:\t\t";
    cin>>deposit;
    bal=deposit+bal;
    cout<<"\n deposit balance:\t"<<bal;
}
void bank::withdraw(void)
{
    int withdraw;
    cout<<"balance amount:\t\t"<<bal;
    cout<<"enter withdraw amount:\t\t";
    cin>>withdraw;
    if(bal>withdraw)
    {
        bal=bal-withdraw;
    cout<<"after withdraw balance is:\t"<<bal;
    }
    else
    {
        cout<<"\n not enough amount";
    }
}

void bank::display(void)
{
    cout<<endl<<endl;
    cout<<"DETAILS"<<endl;
    cout<<"NAME:\t"<<name<<endl;
    cout<<"ACC NO.:\t"<<accno<<endl;
    cout<<"ACC TYPE:t"<<actype<<endl;
    cout<<"BALANCE:\t"<<bal<<endl;
}
int main()
{
    bank o1;
    int choice;

        cout<<"\n\n\t\t\t BANKING SYSTEM PROJECT";
        do
        {
        cout<<"\n \tCHOICE LIST\n\n";
        cout<<"1) TO ASSIGN INITIAL VALUE \n";
        cout<<"2) TO DEPOSIT\n";
        cout<<"3) TO WITHDRAW\n";
        cout<<"4) TO DISPLAY ALL DETAILS\n";
        cout<<"5) EXIT\n";
        cout<<" ENTER CHOICE\n";
        cin>>choice;
         switch(choice)
         {
              case 1:o1.opbal();
             break;
             case 2:o1.deposit();
             break;
             case 3:o1.withdraw();
             break;
             case 4:o1.display();
             break;
             case 5: goto end;
             default: cout<<"invalid option!!!";
         }
    }while(1);
    end:
        return 0;
}
