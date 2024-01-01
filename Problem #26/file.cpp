#include <iostream>
#include <cstdlib>

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

int RandomNumber (int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

string GenerateKey () {
    string RandomKey = "";

    for (int i = 1; i < 20; i++) {
        if (i % 5 == 0) {
            RandomKey += "-";
        } else {
            RandomKey += char(RandomNumber(65, 90));
        }
    }

    return RandomKey;
}

void CreateKeyArr (string Arr[100], int ArrayLength) {
    
    for (int i = 1; i <= ArrayLength; i++)
    {
        Arr[i] = GenerateKey();
    }
    
}

void PrintStringArray (string Arr[100], int ArrayLength) {
    
    for (int i = 1; i <= ArrayLength; i++)
    {
        cout << "Array [" << i << "] : " << Arr[i] << endl;
    }
    
}


int main()
{
    srand((unsigned)time(NULL));

    string Arr[100];
    int ArrayLength = ReadPositiveNumber("How many keys do you want?");
    CreateKeyArr(Arr, ArrayLength);
    PrintStringArray(Arr, ArrayLength);
    return 0;
}