#include <iostream>

using namespace std;

class Bank
{
private:
    string aname;
    string atype;
    long long int acno;
    long long int no;

public:
    float balance;

    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void Bank::open_account()
{
    char a;
    cout << "Enter Full Name" << endl;
    cin.ignore();
    getline(cin, aname);
    cout << "Enter Mobile Number" << endl;
    cin >> no;
    cout << "For Savings Enter \"1\"\nFor Current Enter \"2\"" << endl;
    cin >> a;
    int x = a;
    if (x == 83)
        atype = "Savings";
    else
        atype = "Current";

    acno = no;
    balance = 0;
    system("cls");
    cout << "Account Created Successfully" << endl;
}

void Bank ::deposit_money()
{
    int bal;
    cout << "Enter amount to deposit" << endl;
    cin >> bal;
    balance += bal;
    cout << "Amount Deposited !\nAvailable Balance is : " << balance << endl;
}

void Bank::display_account()
{
    cout << "Name : " << aname << endl
         << "Account Number : " << acno << endl
         << "Account Type : " << atype << endl
         << "Phone Number :" << no << endl
         << "Avaialable Balance : " << balance << endl;
}

void Bank ::withdraw_money()
{
    float w;
    cout << "Enter amount to withdraw" << endl;
    cin >> w;
    if (w <= balance)
    {
        balance -= w;
        system("cls");
        cout << "Amount Withdrawal Successful" << endl
             << "Available Balance is : " << balance << endl;
    }
    else
    {
        cout << "Insufficient Balance" << endl;
    }
}

int main()
{

    int w;
    Bank customer;
    do
    {

        int choice;

        cout << "\n1) Open account" << endl;
        cout << "2) Deposit account" << endl;
        cout << "3) Withdraw money" << endl;
        cout << "4) Display Account" << endl;
        cout << "5) Exit" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter Response" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            customer.open_account();
            break;

        case 2:
            customer.deposit_money();
            break;

        case 3:
            customer.withdraw_money();
            break;

        case 4:
            customer.display_account();
            break;

        case 5:
            w = 0;
            exit(0);

        default:
            cout << "Invalid Response" << endl;
            break;
        }
    } while (w != 0);

    return 0;
}