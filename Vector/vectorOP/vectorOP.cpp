#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int q;
    cin >> q;
    for(int i =0; i < q; i++){
        string o;
        cin >> o;
        if (o.front() == 'p'){
            int n;
            cin >> n;
            v.push_back(n);  
        }else if(o.front() == 's'){
            sort(v.begin(),v.end());
            if(o.at(1) == 'd'){
                reverse(v.begin(),v.end());
            }
        }else if(o.front() == 'r'){
            reverse(v.begin(),v.end());
        }else if(o.front() == 'd'){
            int p;
            cin >> p;
            v.erase(v.begin()+p);
        }
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " " ;
    }
}