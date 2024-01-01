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

void PrintKey (int Times) {
    for (int i = 1; i <= Times; i++)
    {
        cout << "Key [" << i << "] : " << GenerateKey() << endl;
    }
    
}

int main()
{
    srand((unsigned)time(NULL));

    int Times = ReadPositiveNumber("How many keys do you want?");
    PrintKey(Times);
    return 0;
}