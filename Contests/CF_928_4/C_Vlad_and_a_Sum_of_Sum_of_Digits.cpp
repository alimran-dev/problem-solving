#include <bits/stdc++.h>
using namespace std;
long long int sumOfDigits(int n) {
    long long int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

vector<long long int> precomputeSumOfDigits(int limit) {
    vector<long long int> dp(limit + 1, 0);
    for (int i = 1; i <= limit; ++i) {
        dp[i] = dp[i / 10] + i % 10;
    }
    return dp;
}

int main() {
    int t;
    cin >> t;
    
    // Precompute sum of digits up to a sufficiently large limit
    int limit = 1000000; // Adjust the limit based on the input constraints
    vector<long long int> dp = precomputeSumOfDigits(limit);

    while (t--) {
        int n;
        cin >> n;
        long long int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += dp[i];
        }
        cout << sum << endl;
    }
    return 0;
}
