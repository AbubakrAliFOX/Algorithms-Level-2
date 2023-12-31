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
    char CurrentLetter;
    string Result = "";
    for (int i = 0; i <= Word.length() - 1; i++)
    {
        CurrentLetter = Word[i];
        int ASCII = (int)CurrentLetter;
        ASCII += Key;
        Result += char(ASCII);
    }

    return Result;
}

string Decrypt(string Word, short Key)
{
    char CurrentLetter;
    string Result = "";
    for (int i = 0; i <= Word.length() - 1; i++)
    {
        CurrentLetter = Word[i];
        int ASCII = (int)CurrentLetter;
        ASCII -= Key;
        Result += char(ASCII);
    }

    return Result;
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