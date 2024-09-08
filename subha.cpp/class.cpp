#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
};

int main()
{
    Employee sub;
    sub.name = "subha";
    sub.salary = 100;
    cout << "the name of " << sub.name << " his salary " << sub.salary << endl;

    Employee s;
    s.name = "sub";
    s.salary = 100;
    cout << "the name of " << s.name << " his salary " << s.salary << endl;
    Employee su;
    su.name = "subh";
    su.salary = 100;
    cout << "the name of " << su.name << " his salary " << su.salary << endl;
}
