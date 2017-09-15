#include <iostream>
#include <cmath>

using namespace std;

int main() {
  for (int i = -3; i <= 3; i++) {
    for (int j = 1; j <= 4 - abs(i); j++) {
    cout << "#";
  }
  cout << "\n";
  }
  
  return 0;
}
