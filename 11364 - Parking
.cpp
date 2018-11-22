#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while(T--) {
        int min = 9999, max = 0, n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            int s; scanf("%d", &s);
            if(s < min)
                min = s;
            if(s > max)
                max = s;
        }
        cout << (max - min) * 2 << endl;
    }
    return 0;
}
