#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int po, l1, l2, l3;
    freopen("input.txt", "r", stdin);
    while(scanf("%d %d %d %d", &po, &l1, &l2, &l3), (po || l1 || l2 || l3)) {
        int d = 40*3 + (po - l1 + 40) % 40 + (l2 - l1 + 40) % 40 + (l2 - l3 + 40) % 40;
       printf("%d\n", d*9);
    }
    return 0;
}
