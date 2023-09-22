// Using Brute Force
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    if (n > 0)
    {
        cout << n << " is Positive" << endl;
    }
    else if (n < 0)
    {
        cout << n << " is Negative";
    }
    else
    {
        cout << n << " is Zero" << endl;
    }
}

//  Using Nested if-else Statements
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    if (n >= 0)
    {
        if (n == 0)
        {
            cout << n << " is Zero";
        }
        else
        {
            cout << n << " is Positive" << endl;
        }
    }
    else
    {
        cout << n << " is Negative";
    }
}

// Using Ternary Operator
#include <iostream>
using namespace std;

int main()
{
    int n = -90;
    if (n == 0)
    {
        cout <<n<< " is Zero";
    }
    else
    {
        (n > 0) ? cout << n << " is Positive" : cout << n << " is Nagative";
    }
    return 0;
}