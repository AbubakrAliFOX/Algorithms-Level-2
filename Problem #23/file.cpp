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

void CreateArray(int Arr[100], int ArrayLength)
{

    for (int i = 0; i < ArrayLength; i++)
    {
        Arr[i] = RandomNumber(1, 300);
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



void SumTwoArrays(int Arr[100], int Arr2[100], int ArrSum[100], int ArrayLength) {
    
    for (int i = 0; i < ArrayLength; i++)
    {
        ArrSum[i] = Arr[i] + Arr2[i];
    }
    
    
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], Arr2[100], ArrSum[100];
    int ArrayLength = ReadPositiveNumber("Enter array length?");

    CreateArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);

    CreateArray(Arr2, ArrayLength);
    PrintArray(Arr2, ArrayLength);

    SumTwoArrays(Arr, Arr2, ArrSum, ArrayLength);
    PrintArray(ArrSum, ArrayLength);





    return 0;
}