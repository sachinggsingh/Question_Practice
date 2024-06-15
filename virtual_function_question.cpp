#include<iostream>
using namespace std;
class shapes
{
    protected:
    float side;
    public:
    shapes(float s)
    {
        side = s;
    }
    virtual float display() = 0;
};
class rectangle : public shapes
{
    protected:
    float length;
    public:
    rectangle(float s,float l) : shapes(s)
    {
        length = l;
    }
    float display()
    {
        return side*length;
    }
};
class triangle : public shapes
{
    protected:
    float height;
    public:
    triangle(float s,float h) : shapes(s)
    {
        height = h;
    }
    float display()
    {
        return 0.5*side*height;
    }
};
int main()
{
    rectangle r(5, 2);
    triangle t(5, 2);
    cout <<"The Area of the rectangle is: "<< r.display() << endl;
    cout <<"The Area of the Triangle is: " <<t.display() << endl;
    return 0;
}
