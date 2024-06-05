/*Create a class named as Account it will be having 3 data men=mbers as account id, name and balance.
Define member function to assign value and display the values of them and also make a serach function 
to find that the entered id exist or not*/

#include<iostream>
#include<cstring>
using namespace std;
class Account
{
    float balance;
    string name;
    int account_id;
    public:
    void set_data(int id,float bal,string n)
    {
        account_id = id;
        balance = bal;
        name = n;
    }
    void display()
    {
        cout<<"The Account id is: "<<account_id<<endl;
        cout<<"Account holder name is: "<<name<<endl;
        cout<<"The balance is: "<<balance<<endl;
    }
    int search_id(int id)
    {
        if(account_id ==id)
        {
            return 1;
        }
        else 
        return 0;
    }
};
int main()
{
    Account *acc[5];
    for(int i=0;i<5;i++)
    {
        acc[i] = new Account;
        int id;
        float bal;
        string n;
        cout<<"Enter the accout holer name: "<<endl;
        cin>>n;
        cout<<"Enter account id: "<<endl;
        cin>>id;
        cout<<"Enter their Balance: "<<endl;
        cin>>bal;
        acc[i]->set_data(id,bal,n);
    }
    int search_id;
    cout<<"Enter the ID which you want to serach: "<<endl;
    cin>>search_id;
      //using the find_if() algorithm and also can be done using the loops
   auto it = find_if(acc, acc + 5, [&](const unique_ptr<Account>& account)
    {       
       return account->search_id(search_id) == 1;
    });
   
   if (it != acc + 5) 
   {
       cout << "Account found!!" << endl;
       it->get()->display();
    } else
    {
       cout << "Account not found!!" << endl;
    }
    cout<<"Account not found!!"<<endl;
     for (int i = 0; i < 5; i++) 
    {
        delete acc[i];
    }
    
    return 0;
}