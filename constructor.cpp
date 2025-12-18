#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    Student rahim(45, 10, 4.75);

    Student kahim(23, 10, 5.00);
   
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << kahim.roll << " " << kahim.cls << " " << kahim.gpa << endl;
    
    return 0;
}