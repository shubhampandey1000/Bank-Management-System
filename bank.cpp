#include<iostream>
#include<bits/stdc++.h>
#include <conio.h>
using namespace std;
class bank
{
char name[100], add[100], y;
int balance;
public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
        
};
void bank ::open_account(){
    cout << "Enter your Full Name :: ";
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter your Address :: ";
    cin.ignore();
    cin.getline(add, 100);
    cout << "Type of account, Savings (s) or Current (c)";
    cin >> y;
    cout << "Enter your Deposit Amount :: ";
    cin >> balance;
    cout << "Your Account has been created" <<endl;
}
void bank ::deposit_money(){
    int a;
    cout << "Enter the ammount you want to deposit :: ";
    cin >> a;
    balance += a;
    cout << "Total balance is " << balance;
}
void bank :: display_account(){
    cout << " Your Name :: \t" << name;
    cout << " Your Address :: \t" <<add;
    cout << " Type of Account :: \t " << y;
    cout << " Deposited Amount :: \t" << balance;

}
void bank :: withdraw_money(){
    float amount;
    cout << "\n Withdraw :: ";
    cout << " Enter the amount to withdraw :: ";
    cin >> amount;
    balance -= amount;
    cout << "The total amount left :: " << balance;


}

int main(){
    int ch, x;
    bank obj;
    do{
    cout << "1) Open Account " <<endl;
    cout << "2) Deposit Money" << endl;
    cout << "3) Withdraw Money" << endl;
    cout << "4) Display Account" <<endl;
    cout << "5) Exit";
    cout << "Select any option from above \n";
    cin >> ch;
    switch (ch)
    {
    case 1: 
    cout << "1) Open Account \n";
    obj.open_account();
    break;
    case 2:
    cout << "2) Deposite Money \n";
    obj.deposit_money();
    break;
    case 3:
    cout << "3) Withdraw Money \n";
    obj.withdraw_money();
    break;
    case 4:
    cout << "4) Dislay Money \n";
    obj.display_account();
    break;
    case 5:
    if(ch==5){
        exit(1);
    }
    default:
    cout << "This does not exist, Try Again \n";
        
        
    }

    cout << "\n Do you want to slect next option then press :: y \n";
    cout << "\n If you want to exit then press :: N \n";
    x=getch();
    if(x=='n' || x=='N')
    exit(0);
    }
    while(x=='y' || x=='Y');
getch();
return 0;
}