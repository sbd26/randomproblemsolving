#include <bits/stdc++.h>

using namespace std;

int check(string s, string w) {
  for (char c : s) {
    if (w.find(c) != string::npos) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string numbers = "0123456789";
  string lower_case = "abcdefghijklmnopqrstuvwxyz";
  string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string special_characters = "!@#$%^&*()-+";
  int ans = 0;
  ans += check(s, numbers);
  ans += check(s, lower_case);
  ans += check(s, upper_case);
  ans += check(s, special_characters);
  ans = max(ans, 6 - n);
  printf("%d\n", ans);
  return 0;
}
