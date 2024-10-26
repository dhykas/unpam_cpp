#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "masukan nilai ke-1 : ";
    cin >> a;
    cout << "masukan nilai ke-2 : ";
    cin >> b;
    cout << "masukan nilai ke-3 : ";
    cin >> c;
    if (a > b && a > c)
    {
        
        cout << "\nNilai terbesar Adalah : " << a;
    }
    else if (b > a && b > c)
    {
        cout << "\nNilai terbesar Adalah : " << b;
    }
    else
    {
        cout << "\nNilai terbesar Adalah : " << c;
    }
}
