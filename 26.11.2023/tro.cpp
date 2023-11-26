#include <iostream>

using namespace std;

int a, b, c, maximum, sum;

int main() {
  cin >> a >> b >> c;
  maximum = max(max(a, b), c);
  sum = a + b + c;

  if (2*maximum - sum < 0) {
    cout << "TAK" << endl;
  } else {
    cout << "NIE" << endl;
  }

  return 0;
}