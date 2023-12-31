#include <iostream>

using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Number;
    do
    {
        cout << Msg << " ";
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


int GetArrayElement(int ElementNumber)
{
    int CurrentElement = ReadPositiveNumber("Element [" + to_string(ElementNumber + 1) + "]: ");
    return CurrentElement;
}

void CreateArray(int ArrayOfElements[], int NumberOfElements)
{

    for (int i = 0; i < NumberOfElements; i++)
    {
        ArrayOfElements[i] = GetArrayElement(i);
    }

}

void CheckInput(int ArrayOfElements[], int NumberOfElements, int InputToCheck)
{
    int Counter = 0;

    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << ArrayOfElements[i] << endl;

        if (ArrayOfElements[i] == InputToCheck) {
            Counter++;
        }
    }

    if (Counter > 0) {
        cout << InputToCheck << " has been repeated " << Counter << " time(s). " << endl;
    } else {
        cout << InputToCheck << " Does not exist in this array " << endl;
    }
    
}

int main()
{

    int NumberOfElements = ReadPositiveNumber("How many elements do you want?");

    int ArrayOfElements[NumberOfElements] = {};

    CreateArray(ArrayOfElements, NumberOfElements);

    int InputToCheck = ReadPositiveNumber("What would you like to check?");

    CheckInput(ArrayOfElements, NumberOfElements, InputToCheck);

    return 0;
}