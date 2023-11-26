#include <iostream>

using namespace std;

int k, w, m, req, num;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> k >> w >> m;

  req = w - k;
  num = req / m;

  if (req % m != 0) {
    num++;
  }

  cout << num << '\n';

  return 0;
}