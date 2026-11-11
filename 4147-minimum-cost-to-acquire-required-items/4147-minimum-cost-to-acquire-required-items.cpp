class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1 = cost1, c2 = cost2, cb = costBoth, n1 = need1, n2 = need2;
        long long a = n1*c1 + n2*c2;
        long long b = max(n1, n2) * cb;
        long long c = min(n1, n2) * cb + (n1 > n2 ? (n1-n2)*c1 : (n2-n1)*c2);
        return min({a, b, c});
    }
};