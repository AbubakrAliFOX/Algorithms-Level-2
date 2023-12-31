#include <iostream>
using namespace std;

string TakePassWord(string Msg)
{
    string Password;
    do
    {
        cout << Msg << endl;
        cin >> Password;
    } while (Password.length() != 3);

    return Password;
}


void PrintPassword(int Counter, string Password) {
    cout << "Password is: " << Password << ", after " << Counter << " trials." << endl;
}


bool LettersCombo(string Password)
{
    string Combinations;
    int Counter = 0;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                Combinations = char(i);
                Combinations+= char(j);
                Combinations+= char(k);
                Counter++;
                if (Combinations == Password) {
                    PrintPassword(Counter, Password);
                    return true;
                }
            }
        }
    }
}

int main()
{
    string Password = TakePassWord("Please Enter three letter password");
    LettersCombo(Password);
    return 0;
}