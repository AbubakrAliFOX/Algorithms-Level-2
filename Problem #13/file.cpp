#include <iostream>
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

void PrintInvertedPattern (int InputNumber) {
    int Number = InputNumber;
    for (int i = 1; i <= Number; i++) {
        for (int j = 1; j <= i; j++ ) {
            cout << i;
        }

        cout << "\n";
    }
}

int main() { 
    int Number = ReadPositiveNumber("Enter Number: ");
    PrintInvertedPattern(Number);
    return 0;
}