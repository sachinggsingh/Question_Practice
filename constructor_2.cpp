/*Q -1 */
/*Create a class to print the area of a square and a rectangle.The class has two functions with the same name but different number of parameters.The function for printing the area of rectangle has two 
parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square.*/

#include<iostream>
using namespace std;

class Area
{
public:
    int length;
    int breadth;
    
    Area(int l, int b)
    {
        length = l;
        breadth = b;
    }
    
    int areaIs(int l, int b)
    {
        return l * b;
    }
    
    int areaIs(int l) 
    {
        return l * l;
    }
    
    void display1() 
    {
        cout << "The Area of the Square is: " << areaIs(length) << endl;
    }
    void display()
    {
        cout << "The Area of the Rectangle is: " << areaIs(length, breadth) << endl;
    }
};

int main()
{
    Area A1(8, 6);
    Area A2(5, 5);
    A2.display1();
    A1.display();
    
    return 0;
}

/*Q - 2*/
/*A boy has his money deposited $1000, $1500 and $2000 in banks-Bank A, Bank B and Bank C respectively. We have to print the money deposited by him in a particular bank.
Create a class 'Bank' with a function 'getBalance' which returns 0. Make its three subclasses named 'BankA', 'BankB' and 'BankC' with a function with the same name 'getBalance' which returns the 
amount deposited in that particular bank. Call the function 'getBalance' by the object of each of the three banks.*/
#include<iostream>
using namespace std;
class Bank{
    public:
    int getBalance()
    {
        return 0;
    }
};
class BankA : public Bank
{
    int amount;
    public:
    BankA(int a)
    {
       amount = a;
    }
    int getBalance()
    {
        return amount;
    }
};
class BankB : public Bank
{
 int amount;
 public:
 BankB(int a)
 {
     amount = a;
 }
 int getBalance()
 {
     return amount;
 }
};
class BankC : public Bank
{
    int amount;
    public:
    BankC(int a)
    {
        amount = a;
    }
    int getBalance()
    {
        return amount;
    }
};
int main()
{
    BankA a1(1000);
    BankB a2(1500);
    BankC a3(2000);
    cout<<"The Deposited amount in Bank A is: $"<<a1.getBalance()<<endl;
    cout<<"The Deposited amount in Bank B is: $"<<a2.getBalance()<<endl;
    cout<<"The Deposited amount in Bank C is: $"<<a3.getBalance()<<endl;
    
    return 0;
}
