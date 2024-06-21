/*Q - 1*/
/*Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown", 
otherwise the name should be equal to the String value passed while creating the object of the Student class.*/
#include<iostream>
using namespace std;
class Student
{
    string name;
    public:
    Student(string n)
    {
        name = n;
    }
    Student()
    {
        name = "Unknown";
    }
    void print()
    {
        cout<<"The name is: "<<name<<endl;
    }
};
int main()
{
    Student s1("Narendra Modi");
    Student s2;
    s1.print();
    s2.print();
    return 0;
    
}

/*Q - 2*/
/*Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it.
Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50.
Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.*/
#include<iostream>
using namespace std;
class AddAmount
{
    int amount = 50;
    int add;
    public:
    AddAmount()
    {
        amount = 50;
    }
    AddAmount(int a)
    {
        add = a;
        amount = amount + add;
    }
    void display()
    {
        cout<<"The total Amout is: "<<amount <<endl;
    }
};
int main()
{
    AddAmount a1;
    AddAmount a2(50);
    a1.display();
    a2.display();
    return 0;
    
}
