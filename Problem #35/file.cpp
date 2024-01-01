#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber(string Msg)
{
    int Number;
    cout << Msg << endl;
    cin >> Number;

    return Number;
}

int abs (int Number) {
    if (Number < 0) {
        return Number * -1;
    }

    return Number;
}

int main()
{

    int Number = ReadNumber("Enter Your Number");

    cout << "ABS is : " << abs(Number) << endl;

    return 0;
}