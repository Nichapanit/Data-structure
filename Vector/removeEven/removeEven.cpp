#include <iostream>
#include <vector>

using namespace std;

void remove_even(vector<int> &v,int a,int b) {
    //write your code only in this function
    a = a%2 == 0 ? a : a+1;
    b = b%2 == 0 ? b : b-1;
    int l = (b-a)/2 +1;
    for (int i = a; i < (a+l); i++){
        v.erase(v.begin()+i);
    }
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    remove_even(v,a,b);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
