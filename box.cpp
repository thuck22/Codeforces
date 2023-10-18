#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    int a,b,c;
    int f1,f2,f3,f4,f5,f6;
    cin >> x>>y>> z;
    cin >> a >> b >> c;
    cin >> f1 >> f2 >> f3 >> f4 >> f5 >> f6;
    int result = 0;
    if(x > a) result += f6;
    if(x < 0) result += f5;
    if(y > b) result += f2;
    if(y < 0) result += f1;
    if(z > c) result += f4;
    if(z < 0) result += f3;
    cout << result ;
    return 0;
}