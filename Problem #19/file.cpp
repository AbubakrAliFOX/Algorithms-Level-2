#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber (int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int main()
{
    srand((unsigned)time(NULL));

    cout << RandomNumber(5, 20) << endl;
    cout << RandomNumber(5, 20) << endl;
    cout << RandomNumber(5, 20) << endl;
    return 0;
}