/*Create a class for any shape and make a member function to return the area of the shape and show the area using the types of smart pointers*/
#include<iostream>
#include<memory>
using namespace std;
class Square
{
    int side;
    public:
    Square(int s) : side(s){};
    int Area_is(){return side*side;}
};
int main()
{
    //uique pointer is used
    unique_ptr<Square> s1(new Square(5));
    cout<<s1->Area_is()<<endl;
    
    unique_ptr<Square> s2;
    s2 = move(s1);
    cout<<s2->Area_is()<<endl;
    
    //shared pointer is used
    shared_ptr<Square> r1(new Square(3));
    cout<<r1->Area_is()<<endl;
    
    shared_ptr<Square> r2;
    r2 = r1;
    
    cout<<r1->Area_is()<<endl;
    cout<<r2->Area_is()<<endl;
    //the use_count() just tell the how many ownerships are there of it
    cout<<r1.use_count()<<endl;
    shared_ptr<Square> e1(new Square(4));
    cout<<e1->Area_is()<<endl;
    
    //using WEAK pointer
    weak_ptr<Square> e2(e1);
    cout<<e1->Area_is()<<endl;
    
    
    return 0;
}