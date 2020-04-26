int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}
int lcm(int[] a, int n) {
  int res = 1, i;
  for (i = 0; i < n; i++) {
    res = res*a[i]/gcd(res, a[i]);
  }
  return res;
}
