#include <iostream>
#include <vector>
using namespace std;


int printPascalElement(int n , int r ) {
    int res=1;

    for(int i =0;i<r;i++) {
        res = res *(n-i);
        res/=(i+1);
    }
    return res;
}
vector<int> printPascalRow(int n) {

    //Brute approach  , TC - O(n*r) , SC - O(n)
    vector<int> row;
    for(int r = 1 ;r<=n;r++) {
        int x = printPascalElement(n-1,r-1);
        row.push_back(x);
    }
    return row;
}
int main() {
    int row;
    cout << "Enter row  : ";
    cin >> row;
    // int col;
    // cout << "Enter column : ";
    // cin >> col;

    // cout << "Element : " << printPascalElement(row-1,col-1) << endl;

    vector<int> ans=printPascalRow(row);
    for(auto it : ans) {
        cout << it << " ";
    }
}