#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int roll;
    int marks;

    Student(string nm, int roll, int marks)
    {
        this->nm = nm;
        this->roll = roll;
        this->marks = marks;
    }
};

class Cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.roll > b.roll;
        return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, Cmp> pq;

    while (n--)
    {
        string nm;
        int rollNo, scr;
        cin >> nm >> rollNo >> scr;
        pq.push(Student(nm, rollNo, scr));
    }

    int queries;
    cin >> queries;

    while (queries--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            string nm;
            int rollNo, scr;
            cin >> nm >> rollNo >> scr;
            pq.push(Student(nm, rollNo, scr));
        }
        else if (type == 2)
        {
            if (!pq.empty())
                pq.pop();
        }

        if (!pq.empty())
            cout << pq.top().nm << " " << pq.top().roll << " " << pq.top().marks << "\n";
        else
            cout << "Empty\n";
    }

    return 0;
}