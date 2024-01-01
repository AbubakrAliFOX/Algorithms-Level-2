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

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void CreateRandomArray(int Arr[100], int ArrayLength)
{

    for (int i = 0; i < ArrayLength; i++)
    {
        Arr[i] = RandomNumber(1, 300);
    }
}

void CreateArray(int Arr[100], int ArrayLength)
{

    for (int i = 0; i < ArrayLength; i++)
    {
        Arr[i] = i + 1;
    }
}

void PrintArray(int Arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int SearchWithinArray(int Arr[100], int ArrayLength, int SearchItem)
{

    for (int i = 0; i < ArrayLength; i++)
    {
        if (Arr[i] == SearchItem)
        {
            return i;
        }
    }

    return -1;
}

bool IsNumberInArray(int Arr[100], int ArrayLength, int SearchItem){
    return SearchWithinArray(Arr, ArrayLength, SearchItem) != -1;
}

void PrintSearchResul(int index, int SearchItem)
{
    cout << "The Number you are searching is: " << SearchItem << endl;
    if (index == -1)
    {
        cout << "Not Found :( " << endl;
    }
    else
    {

        cout << "It is in index number " << index << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArrayLength = ReadPositiveNumber("Enter array length?");

    CreateRandomArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);

    int SearchItem = ReadPositiveNumber("What number would you like to search for?");
    PrintSearchResul(SearchWithinArray(Arr, ArrayLength, SearchItem), SearchItem);
    return 0;
}