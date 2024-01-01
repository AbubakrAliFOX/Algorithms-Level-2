#include <iostream>
#include <cstdlib>

using namespace std;

float ReadNumber(string Msg)
{
    int Number;
    cout << Msg << endl;
    cin >> Number;

    return Number;
}

int floor(float Number)
{
    if (Number < 0)
    {
        return (int) --Number;
    }

    return (int)Number;
}

int main()
{

    float Number = ReadNumber("Enter Your Number");

    cout << "FLOOR is : " << floor(Number) << endl;

    return 0;
}