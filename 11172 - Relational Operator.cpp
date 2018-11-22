#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while(T--) {
        int n, m; scanf("%d %d", &n, &m);
        if(n < m) cout << "<" << endl;
        else if(n > m) cout << ">" << endl;
        else cout << "=" << endl;
    }
    return 0;
}
