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


void PrintReverseNumber (int Number) {
    string StringedNumber = to_string(Number);
    
    for (int i = StringedNumber.length(); i >= 0; i--) {
        cout << StringedNumber[i] << endl;
    }
}   


int main() { 
    int Number = ReadPositiveNumber("Enter a positive Number");
    PrintReverseNumber(Number);
    return 0;
}