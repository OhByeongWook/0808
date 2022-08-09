#include <iostream>

using namespace std;

class ctest
{
    public:
    int m_ndata;
        ctest()
    {
        cout << "ctest constructor" << endl;
        m_ndata = 10;
    }

    void printdata()
    {
        cout << m_ndata << endl;
    }
};

void ctest :: printdata()
{
    cout << m_ndata << endl;
}
int main()
{
    ctest t;
    t.printdata();
}