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

void ReverseArray(int Arr[100], int ArrayLength)
{
    int ShallowArr[100];
    for (int i = 0; i < ArrayLength; i++)
    {
        ShallowArr[i] = Arr[i];
    }

    for (int i = 0; i < ArrayLength; i++)
    {
        Arr[i] = ShallowArr[ArrayLength - 1 - i];
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

void Swap (int &A, int &B) {
    int Temp ;
    Temp = A;
    A = B;
    B = Temp;
    
}

void SwapArray(int Arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        Swap(Arr[RandomNumber(0, ArrayLength -1)],Arr[RandomNumber(0, ArrayLength -1)]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArrayLength = ReadPositiveNumber("Enter array length?");

    CreateArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);

    ReverseArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);




    return 0;
}