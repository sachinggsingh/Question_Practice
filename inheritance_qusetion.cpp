/*Create a class Publication and inherit 2 class as book and tape with member functions as page_count and playing_time respectively and use appropriate thing do tell about the tape and the book
#include<iostream>
using namespace std;
class publication
{
    protected:
    float price;
    string title;
    public:
    void set_title(string s)
    {
        title = s;
    }
    void set_price(float p)
    {
        price =p;
    }
    void display()
    {
        cout<<"The book is: "<<title<<" and the price is: "<<price<<endl;
    }
};
class book : public publication
{
    protected:
    int page_count;
    public:
    book() : page_count(0){}
    book(int pc): page_count(pc) {}
    void set_page_count(int page)
    {
        page_count = page;
    }
    void display1()
    {
        publication::display();
        cout<<"the number of pages in the book is: "<<page_count<<endl;

    }
};
class tape : public publication
{
    protected:
    float playing_time;
    public:
    tape() : playing_time(0){}
    tape(float pt): playing_time(pt) {}
    void set_playing_time(float play)
    {
        playing_time = play;
    }
    void display2()
    {
        publication::display();
        cout<<"The playing time of the tape is: "<<playing_time<<endl;
    }
};
int main()
{
    publication p;
    p.set_title("Harry Potter");
    p.set_price(600);
    p.display();

    book b;
    b.set_title("Harry Potter and the Philosopher's Stone");
    b.set_price(600);
    b.set_page_count(500);
    b.display1();

    tape t; 
    t.set_title("Harry Potter Audio Tape");
    t.set_price(300);
    t.set_playing_time(3.5);
    t.display2();
    return 0;
}