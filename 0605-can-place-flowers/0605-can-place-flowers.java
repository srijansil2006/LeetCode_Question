class Solution {
    public boolean canPlaceFlowers(int[] bed, int n) {
        int l = bed.length;
        if (l == 1) {
            if (bed[0] == 0) return n <= 1;
            else return n == 0;
        }
        if (l == 2) {
            if (bed[0] == 0 && bed[1] == 0) return n <= 1;
            else return n == 0;
        }
        if (bed[0] == 0 && bed[1] == 0) {
            bed[0] = 1;
            n--;
        }
        if (n == 0) return true;
        if (bed[l - 1] == 0 && bed[l - 2] == 0) {
            bed[l - 1] = 1;
            n--;
        }
        if (n == 0) return true;
        int st = bed[0] == 1 ? 0 : 1;
        int ed = bed[l-1] == 1 ? l - 1 : l - 2;
        int cnt = 0;
        for (int i = st + 1; i <= ed; i++) {
            if (n <= 0) return true;
            if (bed[i] == 0) cnt++;
            else {
                n -= (cnt + 1) / 2 - 1;
                cnt = 0;
            }
        }
        return n <= 0;
    }
}