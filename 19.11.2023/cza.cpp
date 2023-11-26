#include <iostream>

using namespace std;

int t,g,m,s;

int main() {
  cin >> t;
  g = t / 3600;
  t = t - g * 3600;

  m = t / 60;
  t = t - m * 60;

  s = t;

  cout << g << 'g' << m << 'm' << s << 's';

  return 0;
}