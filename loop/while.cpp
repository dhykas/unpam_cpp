#include <iostream>
using namespace std;

int main() {
    cout << "Ganjil: ";
    int i = 1;
    while (i <= 35) {
        cout << i << " ";
        i += 2; 
    }
    
    cout << "\nGenap: ";
    i = 2; 
    while (i <= 35) {
        cout << i << " ";
        i += 2; 
    }
    
    cout << endl;
    return 0;
}
