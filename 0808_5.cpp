#include <iostream>
#include <string.h>

using namespace std;

class person
{
    string name;
    int age;

    public:
        person()
        {
            name = "hong"
            age = 15;
        }
        person(string n, int nage)
        {
            name = n;
            age = nage;
        }
        person(string n)
        {
            name = n;
            age = 20;
        }

        string getname()
        {
            return name;
        }
        string getage()
        {
            return age;
        }
};

int main()
{
    person ps;
    person pa("cat", 22);
    person pt("dog");
    
    cout << "name = " << ps.getname() << ", age = " << ps.getage() << endl;
    cout << "name = " << pa.getname() << ", age = " << pa.getage() << endl;
    cout << "name = " << pt.getname() << ", age = " << pt.getage() << endl;

}
