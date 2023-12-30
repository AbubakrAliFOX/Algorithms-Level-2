#include <iostream>
using namespace std;

int ReadPositiveNumber() {
    int Number;
    do
    {
        cout << "Enter a positive number: " << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

bool CheckPrime(int Number)
{
    for (int i = Number - 1; i > 1; i--)
    {
        if (Number % i == 0 || Number == 2)
            return false;
    }

    return true;
}

void printPrimeNumbersTo(int Number) {
    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == true) {
            cout << i << endl;
        }
    }
    
}

int main() { 
    int Number = ReadPositiveNumber();
    printPrimeNumbersTo(Number);

    return 0;
}