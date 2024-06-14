// /*Simlpe Inheritance*/
// #include<iostream>
// using namespace std;
// class transport
// {
//     public:
//     void display()
//     {
//         cout<<"There are 3 modes of transport"<<endl;
//     }
// };
// class way_of_transport : public transport
// {};
// int main()
// {
//     transport t;
//     way_of_transport w;
//     w.display();
//     return 0;
// }
/*Multiple Inheritance*/
#include<iostream>
using namespace std;
class transport
{
    public:
    void display()
    {
        cout<<"There are 3 modes of transport"<<endl;
    }
};
class way_of_transport 
{
    public:
    void display1()
    {
        cout<<"The ways of Transport are Air, Land and Water";
    }
};
class Air : public transport , public way_of_transport
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