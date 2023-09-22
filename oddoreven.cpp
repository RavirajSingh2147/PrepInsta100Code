// Using Brute Force
#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}
// Using Ternary Operator
#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    n % 2 == 0 ? cout << "Even" : cout << "Odd";
}

// Using Bitwise Operators
#include <iostream>
using namespace std;
int isEven(int n)
{
    return (!(n & 1));
}
int main()
{
    int n = 3;
    isEven(n) ? cout << "even" : cout << "Odd";
}