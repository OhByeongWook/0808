#include <iostream>

using namespace std;

int main()
{
    int value = 5;
    int& ref = value;
    cout << "&value ="  << &value << ", value = " << value << endl;
    cout << "&ref = " << &ref << ", ref = " << ref << endl << endl;
    
    int value1 = 5;
    int *ptr;
    ptr = &value1;
    cout << "&value = " << &value1 << ", value =" << value << endl;
    cout << "&ptr = " << &ptr << ", ptr =" << ptr << ", *ptr = " << *ptr << endl << endl;
}