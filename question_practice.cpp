/*Enter name of the students and their marks for 6 subjects accordingly and calculate the percentage of them also sort them who is having higher percentage*/
#include<iostream>
#include<cstring>
using namespace std;
class student
{
public:
    int rn;
    float pr;
    int marks[6];
    char name[20], gr[20];
    
    student()
    {
        rn = 0;
        pr = 0;
        for(int i = 0; i < 6; i++)
            marks[i] = 0;
        name[0] = '\0';
        gr[0] = '\0';
    }
    void get_data()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Roll number: ";
        cin >> rn;
        for(int i = 0; i < 6; i++)
        {
            cout << "Marks " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void percentage()
    {
        pr = 0; // reset pr to 0 before calculation
        for(int i = 0; i < 6; i++)
        {
            pr += marks[i];
        }
        pr = pr / 6;
    }
    void grade()
    {
        if(pr <= 100 && pr >= 80)
        {
            strcpy(gr, "distinction");
        }
        else if(pr <= 79 && pr >= 50)
        {
            strcpy(gr, "first class");
        }
        else if (pr <= 49 && pr >= 33)
        {
            strcpy(gr, "second class");
        }
        else 
        {
            strcpy(gr, "fail");
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rn << endl;
        for(int i = 0; i < 6; i++)
        {
            cout << "Marks " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Percentage: " << pr << endl;
        cout << "Grade: " << gr << endl;
    }
    ~student() {}
};

void sort_students(student s[], int n) //  bubble sort algorithm
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(s[j].pr < s[j + 1].pr)
            {
                student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int num_students = 2;
    student s1[num_students];
    
    for(int i = 0; i < num_students; i++)
    {
        s1[i].get_data();
    }

    for(int i = 0; i < num_students; i++)
    {
        s1[i].percentage();
    }

    for(int i = 0; i < num_students; i++)
    {
        s1[i].grade();
    }

    sort_students(s1, num_students);

    for(int i = 0; i < num_students; i++)
    {
        s1[i].display();
    }

    return 0;
}
