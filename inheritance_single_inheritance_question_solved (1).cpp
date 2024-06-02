/*Make a class named Fruit with a data member to calculate
the number of fruits in a basket. Create two other class named
Apples and Mangoes to calculate the number of apples and mangoes
in the basket. Print the number of fruits of each type and the total
number of fruits in the basket.*/
#include<iostream>
using namespace std;
class Fruit
{
    protected:
    int apple;
    int mango;
    int total;
    public:
    Fruit(int a, int m) : apple(a), mango(m) 
    {
        total = a + m;
    }
    void totalF()
    {
        cout<<"Total Fruits in the Basket are: "<<total<<endl;
    }
};
class Mango : public Fruit
{
    public:
    Mango(int m) : Fruit(0,m){} //calling base class constructor
    void totalM()
    {
        cout<<"Total number of mangoes are: "<<mango<<endl;
    }
};
class Apples : public Fruit
{
    public:
    Apples(int a) : Fruit(a,0){} //calling base class constructor
    void totalA()
    {
        cout<<"Total number os apples are: "<<apple<<endl;
    }
};
int main()
{
    Fruit f1(2,8);
    Apples a1(2);
    Mango m1(8);
    
    m1.totalM();
    a1.totalA();
    f1.totalF();
    
    return 0;
}
