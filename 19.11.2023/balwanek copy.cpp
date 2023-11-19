#include <iostream>

using namespace std;

int x, k;

int main() {
  cin >> x >> k;
  x *= 1000;
  k = k * 1000;

  // k is the smallest ball
  int value = 4 * k + 2 * k + k;
  if (value <= x) {
    cout << value << endl;
    return 0;
  }

  // k is the middle ball
  value /= 2;
  if (value <= x) {
    cout << value << endl;
    return 0;
  }
  
  // k is the biggest ball
  value /= 2;
  if (value <= x) {
    cout << value << endl;
    return 0;
  }

  cout << 0 << endl;
  return 0;
}
