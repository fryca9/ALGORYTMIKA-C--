#include <iostream>

using namespace std;

int x, k;

int main() {

  cin >> x >> k;
  x = x * 1000;
  k *= 1000;

  if (k + 2*k + 4*k <=x) {
    cout << k + 2 * k + 4 * k << endl;
    return 0;
  }
   if (k/2 + k + 2*k <=x) {
    cout << k / 2 + k + 2 * k << endl;
    return 0;
  }
   if (k/4 + k/2 + k <=x) {
    cout << k / 4 + k / 2 + k << endl;
    return 0;
  }

  cout << 0 << endl;
  return 0;
}
