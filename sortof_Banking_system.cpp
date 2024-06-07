/*create Two class Account and Authorization 
Account class for telling how huch is the balabce how much is the intrest for how long and what will be the final amount after that tenure
Authorization class for the Bank employee to see the details only but not the total balance in it*/


#include<iostream>
#include<string>
#include<cmath> 

using namespace std;

class Account
{
    protected:
    float intrest;
    string name;
    float balance;
    int year;

    
    float calc_amount(float intrest , float balance, int year)
    {
        return balance * pow(1 + intrest / 100, year) - balance;
    }

    public:

    float total_amount()
    {
        return balance + calc_amount(intrest, balance, year);
    }

  
    void set_data(int y, float b, float i, string n)
    {
        year = y;
        balance = b;
        intrest = i;
        name = n;
    }

    void show_data()
    {
        cout << "Name of the Account holder is: " << name << endl;
        cout << "Balance in the Account holder's account is: " << balance << endl;
        cout << "Number of years they have deposited money: " << year << endl;
        cout << "The Interest rate is: " << intrest << "%" << endl;
    }
};

class Authorization : public Account
{
  public:
 
    void set_data(int y, float b, float i, string n)
    {
        Account::set_data(y, b, i, n);
    }

    void get_data()
    {
        show_data();
    }
};

int main()
{
    Account a[3];
    Authorization au[3];
    
    // After decomminting if out and comminting thr Authorization objects will be able to see the final amount too here.
    
    // a[0].set_data(4, 1080, 5.5, "ABC");
    // a[1].set_data(7, 1500, 3.5, "DEF");
    // a[2].set_data(5, 5000, 4.8, "GHI");
    
    // for(int i = 0; i < 3; i++) {
    //     a[i].show_data();
    //     cout << "The total amount at final is " << a[i].total_amount() << endl;
    // }

    // Setting data for authorization objects
    au[0].set_data(4, 1080, 5.5, "ABC");
    au[1].set_data(7, 1500, 3.5, "DEF");
    au[2].set_data(5, 5000, 4.8, "GHI");
    
     for(int i = 0; i < 3; i++) 
     {
        au[i].get_data();
    }

    return 0;
}