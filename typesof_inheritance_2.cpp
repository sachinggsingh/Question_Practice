/*MultiLevel Inheritance  ----in this type a derived class is created from another derived class*/
#include<iostream>
using namespace std;
class transport           // parent //
{
    public:
    void display()
    {
    cout<<"There are 3 mode of Transport"<<endl;
    }
};
class way_of_transport : public transport        //child//
{
    public:
    void display1()
    {
    cout<<"The ways of transport are Air, Water and Land"<<endl;
    }
};
class Air : public way_of_transport     //grand - child//
{
  public:
  void display2()
  {
      cout<<"Airoplanes are used to transport throung the Air"<<endl;
  }
};
int main()
{
    transport t;
    way_of_transport w;
    Air a;
    a.display();
    a.display1();
    a.display2();
    return 0;
}
/*Hierarchical Inheritance ---  more than one derived class is created from a single base class*/  
#include<iostream>
using namespace std;
class transport           //base class//
{
    public:
    void display()
    {
    cout<<"There are 3 mode of Transport"<<endl;
    }
};
class way_of_transport : public transport  //derived class//
{};
class Air : public transport        //derived class//
{};
int main()
{
    transport t;
    way_of_transport w;
    Air a;
    a.display();
    w.display();
    return 0;
}
/*Hybrid (Virtual) Inheritnace -----it is a combination of the more than one type of inheritance it is called hybrid inheritance here it is combination of hierarical and multiple inheritance*/
#include<iostream>
using namespace std;
class transport                   
{
    public:
    void display()
    {
        cout<<"There are 3 mode of Transport"<<endl;
    }
};
class way_of_transport
{
    public:
    void display1()
    {
        cout<<"The ways of transport are Air, Water and Land"<<endl;
    }
};
class Air : public transport
{
    public:
    void display2()
    {
        cout<<"Airoplanes are used to transport throung the Air"<<endl;
    }
};
class Price : public transport, public way_of_transport
{
    public:
    void display3()
    {
        cout<<"The Airoplanes are more expensive than the vehicles on land"<<endl;
    }
};
int main()
{
    transport t;
    way_of_transport w;
    Air a;
    Price p;
    a.display();
    p.display();
    p.display1();
    p.display3();
    return 0;
}


