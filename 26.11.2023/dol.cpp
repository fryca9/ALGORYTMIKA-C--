#include <iostream>
#include <string>
using namespace std;

int n;
string dollars;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;

  while (n > 0) {
    dollars += "$";
    n--;
  }

  cout << dollars;

  return 0;
}