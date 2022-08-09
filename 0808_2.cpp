#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

class userdata
{
    public:
        int nage;
        string szname;

    void print(void)
    {
        cout << "age = " << nage << ", name =" << szname << endl;   }
};

int main()
{
    userdata user = {10, "cs"};
    user.print();

    userdata user1 = {20, "yh"};
    user1.print();

    userdata user2;
    cout << "input age = ";
    cin >> user2.nage;
    cout << "input name = ";
    cin >> user2.szname;
    user2.print();

}
