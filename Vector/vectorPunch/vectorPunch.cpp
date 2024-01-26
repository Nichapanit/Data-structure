#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
 //write some code here
 //don’t forget to return something
    vector<string>::iterator it_start = it - k < v.begin() ? v.begin() : it - k;
    vector<string>::iterator it_end = it + k > v.end()-1 ? v.end() - 1 : it + k;
    int n = it_end - it_start +1;
    for (int i = 0; i < n; i++){
        v.erase(it_start);
    }
    return v;
}
int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}