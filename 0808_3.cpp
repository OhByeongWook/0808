#include <iostream>

using namespace std;

class hap_two
{
    public:
        int num1, num2, sum;

        int result(int a, int b)
        {
            num1 = a;
            num2 = b;
            
            sum = num1 + num2;
            return sum;
        }

        void print()
        {
            cout << num1 << " + " << num2 << " = " << sum << endl;

        }
};

int main()
{
    hap_two ex1;
    ex1.result(3,4);
    ex1.print();

    hap_two ex2;
    ex2.result(5,5);
    ex2.print();

    hap_two ex3;
    cout << "input num1";
    cin >> ex3.num1;
    cout << "input num2";
    cin >> ex3.num2;
    ex3.print();
}