int dp[MAXW];
int solve()
{
    memset(dp, 0, sizeof(dp));
    for(int i =1; i <= N; i++) {
        for(int j = W; j >= 0; j--) {
            dp[j] = (w[i] > j) ? dp[j]: max(dp[j], dp[j-w[i]] + v[i]);
        }
    }
    return dp[W];
}
