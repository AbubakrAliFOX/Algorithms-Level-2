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

void PrintArray(int Arr[100], int Element)
{
    for (int i = 0; i < Element; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

void CreateArrayElement (int Arr[100], int LengthCounter, int Element) {
    Arr[LengthCounter] = Element;
}

void CreateSemiDynamicArray (int Arr[100], int &LengthCounter) {
    bool Continue;
    do
    {
        int Element = ReadPositiveNumber("Enter Array Element");
        CreateArrayElement(Arr, LengthCounter, Element);
        LengthCounter++;

        cout << "Would you like to proceed? (0 = No, 1 = Yes)" << endl;
        cin >> Continue;        
    } while (Continue == true);
    
}

void CopyArray (int Arr[100], int Arr2[100], int ArrayLength) {

    for (int i = 0; i < ArrayLength; i++) {
        CreateArrayElement(Arr2, i, Arr[i]);
    }   
}




int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], Arr2[100];

    int ArrayLength = ReadPositiveNumber("Enter array length?");
    CreateRandomArray(Arr, ArrayLength);

    CopyArray(Arr, Arr2, ArrayLength);

    PrintArray(Arr, ArrayLength);
    PrintArray(Arr2, ArrayLength);

    return 0;
}