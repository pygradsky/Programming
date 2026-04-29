#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> stack{1, 2, 3, 4, 5};
    
    // Push
    int n;
    cin >> n;
    
    stack.push_back(n);
    stack.push_back(67);
    
    cout << "Stack after pushing: " << endl;
    
    for (int x : stack) {
        cout << x << " ";
    }
    
    cout << endl;

    // Popping
    
    int p = stack.front();
    stack.pop_front();
    cout << "Popped element: " << p << endl;
    
    cout << "Stack after popping: " << endl;
    
    for (int x : stack) {
        cout << x << " ";
    }
    
    return 0;
}
