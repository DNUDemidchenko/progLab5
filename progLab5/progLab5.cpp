#include <iostream>
#include <math.h>

using namespace std;

int count(int k)
{
    int i = 0;
    do
    {
        i++;
        k /= 10;
    } while (k != 0);
    return i;
}

int main()
{
    int n;
    cout << "Part a\nInput natural number n:\n";
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (double)count(i) / (i * i);
    cout << "Result: " << sum << endl;
    
    cout << "Part b\nInput natural number n:\n";
    cin >> n;
    double x;
    cout << "Input real number x:\n";
    cin >> x;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(10, count(i)) / i * pow(1 - x, i);
    }
    cout << "Result: " << sum << endl;
}
