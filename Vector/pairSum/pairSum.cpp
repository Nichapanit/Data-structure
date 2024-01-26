#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    int a[n];
    map<int,int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++){
        int b;
        bool isFind = false;
        cin >> b;
        for (int j = 0; j < n; j++){
            auto it = mp.find(b-a[j]);
            if ((it != mp.end() && (b-a[j]) != a[j]) || (b == a[j] && mp[a[j]] > 1)){
                isFind = true;
                break;
            }
        }
        if(isFind == true){
            cout <<"YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}