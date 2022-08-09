#include <iostream>

using namespace std;

class two_hap
{
    int num1 = 0, num2 = 0;
    double num3 = 0.0, num4 = 0.0, sum = 0.0;

    public:
        two_hap(int a, int b)
        {
            num1 = a;
            num2 = b;
        }

         two_hap(int a, double b)
        {
            num1 = a;
            num3 = b;
        }
         two_hap(double a, double b)
        {
            num1 = a;
            num4 = b;
        }


        double result()
        {
            sum = num1 + num2 + num3 + num4;
            return sum;
        }
};

int main()
{
    two_hap ex1(3,5);
    cout << " 3 + 5 = " << ex1.result() << endl;

    two_hap ex2(3,1.4);
    cout << " 3 + 1.4 = " << ex2.result() << endl;

    two_hap ex3(1.5,1.6);
    cout << " 1.5 + 1.6 = " << ex3.result() << endl;
}