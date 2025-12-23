#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
       // if (i == 3) continue;  // Skips iteration when i = 3
        if (i == 3) break;   //loop will end before 3
        cout << i << " ";
    }
    return 0;
}