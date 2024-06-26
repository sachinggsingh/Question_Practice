/*Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale*/
#include<iostream>
using namespace std;
class Mammal
{
   public:
   void displayM()
   {
       cout<<"I belong to the Mammal category: "<<endl;
   }
};
class MarineAnimal
{
    public:
    void displayMA()
    {
       cout<<"I belong to the Marine Animal category: "<<endl;
    }
};
class Bluewhale : public Mammal , public MarineAnimal
{
    public:
 void displayB()
 {
     cout<<"I belong to both the Category Mammal as well as MarineAnimal: "<<endl;
 }
};
int main()
{
    Mammal m1;
    MarineAnimal a1;
    Bluewhale b1;
    m1.displayM();
    a1.displayMA();
    b1.displayM();
    b1.displayMA();
    b1.displayB();
    
    return 0;
}
