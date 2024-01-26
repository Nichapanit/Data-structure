#include <iostream>
#include <string>
using namespace std;

int main(){
    int h,m,s;
    cin >> h >> m ;
    cin >> s;
    int h1 = s/60;
    int m1 = s%60;
    if ((m + m1) >= 60){
        h1 += 1;
    }
    h = (h + h1) % 24;
    m = (m + m1) % 60;
    string h2 = h >=0 and h <10 ? "0"+to_string(h) : to_string(h);
    string m2 = m >=0 and m <10 ? "0"+to_string(m) : to_string(m);
    cout << h2 << " " << m2 << endl;
    return 0;
}