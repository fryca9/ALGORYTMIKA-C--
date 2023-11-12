#include <iostream>

using namespace std;

int x;

int main() {

  cin >> x;

  cout << x + 5 << endl;
  cout << x - 5 << endl;
  cout << x * 5 << endl;
  cout << x / 5 << endl;

  if (x > 5) {
    cout << "Given number is larger than 5" << endl;
  }
  else
  {
    cout << "Given number is smaller or equal to 5" << endl;
  }

  return 0;
}
