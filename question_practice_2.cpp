// /create a class with name Date and have data member as date month year and day_in_month use constructor and destructor properly also make member function to get data display data and to set wich month have how many days//
#include<iostream>
using namespace std;
class Date
{
    int date,month,year,day_in_month;
    public:
    Date()
    {
        (date,month,year,day_in_month) = 0;
    }
    void get_data(Date d[])
    {
        cout<<"Date: ";
        cin>>date;
        cout<<"Month: ";
        cin>>month;
        cout<<"Year: ";
        cin>>year;
        if(date<=31 && (month==1 || month==3 || month== 5 || month==7 || month==8 || month==10 ||  month==12) && year>=100 && year<=3000)
        {}
        else if (date<=30 && (month==4 || month==6 ||month== 11)&& year>=1000 && year<=3000)
        {}
        else if (date<=29 && month== 2 && year>=1000 &&year<=3000 && year%4==0)
        {}
        else 
        {
            cout<<"That's not Possible"<<endl;
        }
    }
    void next_date_is(Date d[])
    {
        for(int i = 0;i<31;i++)
        {
            switch (d[i].month)
            {
                case 2: 
                if(d[i].year%4==0)
                {
                    d[i].day_in_month = 29;
                }
                else
                {
                    d[i].day_in_month = 28;
                }
                break;
                case 4: case 6: case 9: case 11:
                d[i].day_in_month =30;
                break;
                default:
                d[i].day_in_month = 31;
                break;
            }
            d[i].date++;
            if(d[i].date> d[i].day_in_month)
            {
                d[i].date =1;
                d[i].month++;
                if (d[i].month >12)
                {
                    d[i].month = 1;
                    d[i].year++;
                }
            }
        }
    }
    void display_data(Date d[])
    {
        cout<<date<<"/"<<month<<"/"<<year<<endl;
        cout<<"---------------"<<endl;
    }
    ~Date(){};
};
int main()
{
    Date d[31];
    d[0].get_data(d);
    d[0].display_data(d);
    for(int i =1;i<31;i++)
    {
        d[0].next_date_is(d);
        d[0].display_data(d);
    }
    return 0;
}
