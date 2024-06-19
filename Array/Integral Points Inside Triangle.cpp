class Solution {
  public:
    long long int gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long int triangleArea(long long int p[], long long int q[], long long int r[]) {
    return abs(p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1]));
}

long long int boundaryPoints(long long int p[], long long int q[], long long int r[]) {
    return gcd(abs(p[0] - q[0]), abs(p[1] - q[1])) + 
           gcd(abs(q[0] - r[0]), abs(q[1] - r[1])) + 
           gcd(abs(r[0] - p[0]), abs(r[1] - p[1]));
}

long long int InternalCount(long long int p[], long long int q[], long long int r[]) {
    return (triangleArea(p, q, r) - boundaryPoints(p, q, r) + 2) / 2;
}
};
