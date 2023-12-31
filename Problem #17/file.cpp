#include <iostream>
using namespace std;

string TakeString(string Msg)
{
    string Word;
    // do
    // {
    cout << Msg << endl;
    cin >> Word;
    // } while (Word.length() != 3);

    return Word;
}

string Encrypt(string Word, short Key)
{
    for (int i = 0; i <= Word.length() - 1; i++)
    {
        Word[i] = char((int)Word[i] + Key);
    }

    return Word;
}

string Decrypt(string Word, short Key)
{
    for (int i = 0; i <= Word.length() - 1; i++)
    {
        Word[i] = char((int)Word[i] - Key);
    }

    return Word;
}

void PrintInput(string Input)
{
    cout << Input << endl;
}

int main()
{
    string Word = TakeString("Please enter a word");
    short Key = 2;

    string EncryptedWord = Encrypt(Word, Key);
    PrintInput(EncryptedWord);
    PrintInput(Decrypt(EncryptedWord, Key));
    return 0;
}