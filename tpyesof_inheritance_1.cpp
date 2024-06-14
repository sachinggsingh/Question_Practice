/*Simlpe Inheritance*/
#include<iostream>
using namespace std;
class transport            //base class//
{
    public:
    void display()
    {
        cout<<"There are 3 modes of transport"<<endl;
    }
};
class way_of_transport : public transport      //deriver class from the base class//
{};
int main()
{
    transport t;
    way_of_transport w;
    w.display();
    return 0;
}
/*Multiple Inheritance*/
#include<iostream>
using namespace std;
class transport            //base class 1
{ 
    public:
    void display()
    {
        cout<<"There are 3 modes of transport"<<endl;
    }
};
class way_of_transport  //base class 2//
{
    public:
    void display1()
    {
        cout<<"The ways of Transport are Air, Land and Water";
    }
};
class Air : public transport , public way_of_transport     //derived class//
{};
int main()
{
    transport t;
    way_of_transport w;
    Air a;
    a.display();
    a.display1();
    return 0;
}
