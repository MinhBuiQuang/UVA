#include <iostream>

using namespace std;
int main() {
    int T, caseNum = 1;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &T);
    while(T--) {
        int a[3], j;
        scanf("%d", &a[0]);
        for(int i = 1; i < 3; i++) {
            scanf("%d", &a[i]);
            j = i - 1;
            int k = a[i];
            while(j >= 0 && a[j] > k) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = k;
        }
        printf("Case %d: %d\n", caseNum++, a[1]);
    }
    return 0;
}
