#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float ReadNumber(string Msg)
{
    int Number;
    cout << Msg << endl;
    cin >> Number;

    return Number;
}

int myFloor(float Number)
{
    if (Number < 0)
    {
        return (int) --Number;
    }

    return (int)Number;
}


int myCeil(float Number)
{
    if (Number < 0)
    {
        return (int) Number;
    }

    return (int) ++Number;
}

float mySqrt(float Number)
{
    return pow(Number, 0.5);
}

int main()
{

    float Number = ReadNumber("Enter Your Number");

    cout << "MYFLOOR is : " << myFloor(Number) << endl;
    cout << "MYCEIL is : " << myCeil(Number) << endl;
    cout << "MYSQRT is : " << mySqrt(Number) << endl;

    return 0;
}