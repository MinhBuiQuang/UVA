#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while(T--) {
        int n, m; scanf("%d %d", &n, &m);
        printf("%d\n", (n/3)*(m/3));
    }
    return 0;
}
