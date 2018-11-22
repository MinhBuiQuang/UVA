#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int T;
    freopen("input.txt", "r", stdin);
    while(scanf("%d", &T), T) {
        int n, m;
        scanf("%d %d", &n, &m);
        for(int i = 0; i < T; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            if(x - n > 0 && y - m > 0)
                printf("%s\n", "NE");
            else if(x - n > 0 && y - m < 0)
                printf("%s\n", "SE");
            else if(x - n < 0 && y - m < 0)
                printf("%s\n", "SO");
            else if(x - n < 0 && y - m > 0)
                printf("%s\n", "NO");
            else
                printf("%s\n", "divisa");
        }
    }
    return 0;
}
