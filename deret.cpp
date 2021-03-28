#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a;
  for (b = 1; b <= a; ++b) {
    cout << b << " ";
  }
  cout << endl;
  for (b = 1; b <= a; ++b) {
    cout << b * 2 << " ";
  }
  cout << endl;
  for (b = 1; b <= a; ++b) {
    cout << b * 3 << " ";
  }
  cout << endl;
  for (b = 1; b <= a; ++b) {
    cout << b * 4 << " ";
  }
}
