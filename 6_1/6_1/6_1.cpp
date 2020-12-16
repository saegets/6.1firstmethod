#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const  int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Sum(int* a, const int size, int& S, int& k)
{
    for (int i = 0; i < size; i++)
        if (a[i] < 0 || a[i] % 2 == 1)
        {
            S += a[i];
            k++;
            a[i] = 0;
        }
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int a[n];

    int Low = -50;
    int High = 15;

    Create(a, n, Low, High);

    cout << setw(4) << "a[] = {";

    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i] << ",";

    }
    cout << "}" << endl;
    cout << endl;

    int S = 0;
    int k = 0;

    Sum(a, n, S, k);

    cout << "Number =" << k << endl;
    cout << setw(4) << "Sum = " << S << endl;
    cout << endl;
    cout << setw(4) << "a[] = {";
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i] << ",";
    }
    cout << "}" << endl;




    return 0;

}