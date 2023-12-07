#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  string str, m1[n], m3[n], c[2];
  int m2[n], m4[n];
  for (int i = 0; i < n; ++i) {
    m4[i] = 0;
  }
  for (int i = 0; i < n; ++i) {
    cin >> str;
    int k = str.length();
    if (k > 10) {
      c[1] = str[0];
      c[2] = str[k - 1];
      m1[i] = c[1];
      m2[i] = k - 2;
      m3[i] = c[2];
    } else {
      m4[i] = 1;
      m1[i] = str;
    }
  }
  for (int i = 0; i < n; ++i) {
    if (m4[i] != 1) {
      cout << m1[i] << m2[i] << m3[i] << endl;
    } else {
      cout << m1[i] << endl;
    }
  }
  return 0;
}
