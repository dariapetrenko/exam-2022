#include <iostream>

using namespace std;

unsigned long long myPow(int base, int exp);

int main()
{
    cout << "Enter x: ";
    int base;
    cin >> base;

    cout << "Enter a: ";
    int exp;
    cin >> exp;

    if (base < 1)   /*введене число не задовільняє умови задачі*/
    {
        cout << "try again "; 
        return 0;
    }

    if (exp < 1)    /*введене число не задовільняє умови задачі*/
    {
        cout << "try again ";
        return 0;
    }

    cout << base << " ^ " << exp << " = " << myPow(base, exp) << "\n";
    cout << exp << " ^ " << base << " = " << myPow(exp, base) << "\n";
    return 0;
}

unsigned long long myPow(int base, int exp)
{
    unsigned long long result{ 1 };
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;

    while (base)
    {
        if (base & 1)
            result *= exp;
        base >>= 1;
        exp *= exp;
    }
    return result;
}
