#include <iostream>
using namespace std;

int main(){
    int r,c,q ;
    int r1,c1,r2,c2;
    //row and column
    cin >> r >> c ;
    //question
    cin >> q;
    int data[r][c];
    //metrix
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
           cin >> data[i][j];
        }
    }
    //question
    for (int i = 0; i < q; i++){
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 or c1 > c2){
            cout << "INVALID" << endl;
        }else if (r1 > r or c1 > c){
            cout << "OUTSIDE" << endl;
        }else{
            r1 = r1 -1;
            c1 = c1 - 1;
            r2 = r2 > r ? r-1 : r2-1;
            c2 = c2 > c ? c-1 : c2-1;
            int maxx = data[r1][c1];
            for (int i = r1; i <= r2; i++){
                for (int j = c1; j <= c2; j++){
                    maxx = max(maxx, data[i][j]);
                }
            }
            cout << maxx << endl;
        }    
    }
    return 0;
}