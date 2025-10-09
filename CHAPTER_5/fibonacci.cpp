#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1;  
    
    cout << "¿Cuántos términos de Fibonacci quieres?: ";
    cin >> n;
    
    cout << "Serie de Fibonacci:" << endl;
    
    
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    
    cout << endl;
    return 0;
}