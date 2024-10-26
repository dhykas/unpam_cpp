#include <iostream>
using namespace std;

int main() {
    cout << "Ganjil: ";
    
    for (int i = 1; i <= 35; i += 2) { 
        cout << i << " ";
    }
    
    cout << "\nGenap: ";

    int i = 2; 
    while (i <= 35) {
        cout << i << " ";
        i += 2; 
    }
    
    cout << endl;
    return 0;
}
