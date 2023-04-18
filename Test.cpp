#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter Number of x : ";
    cin >> x;
    cout << "Enter Number of y: " << endl;
    cin >> y;

    // compare with x between y.
    if (x > y)
    {
        cout << "x is greater than y " << endl;
    }
    else
    {
        cout << "Y is greater than x " << endl;
    }

    return 0;
}
