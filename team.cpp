#include <iostream>
using namespace std;
int main() {
    int n,p1,p2,p3;
    cin >> n;
    int solve = 0;
    for(int i = 0; i < n; i++) {
        cin >> p1 >> p2 >> p3;
        if((p1 + p2 + p3) >=2) solve++;
    }
    cout << solve ;
    return 0;
}