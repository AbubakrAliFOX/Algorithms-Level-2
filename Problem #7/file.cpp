#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Number;
    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int ReverseNumber (int Number) {
    int Remainder = 0;
    string Reversed;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Reversed += to_string(Remainder);
    }

    return stoi(Reversed);

}

void PrintReverseNumber (int RevNum) {
    cout << RevNum << endl;

}   


int main() { 
    int Number = ReadPositiveNumber("Enter a positive Number");
    PrintReverseNumber(ReverseNumber(Number));
    return 0;
}