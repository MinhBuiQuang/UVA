#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while(T--) {
        int n; scanf("%d", &n);
        n = (n * 567 / 9 + 7492) * 235 / 47 - 498;
        printf("%d\n", abs(n%100) / 10);
    }
    return 0;
}
