#include <iostream>
#include <vector>
using namespace std;


void markRowi(vector<vector<int>> matrix,int i) {
    for(int j =0;j<matrix[0].size();j++) {
        if(matrix[i][j] !=0)  {
            matrix[i][j]=-1;
        }
    }
}
void markRowj(vector<vector<int>> matrix,int j) {
    for(int i =0;i<matrix.size();i++) {
        if(matrix[i][j] !=0)  {
            matrix[i][j]=-1;
        }
    }
}


void setZeroes(vector<vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    for(int i =0;i<m;i++) {
        for(int j =0;j<n;j++) {
            if(matrix[i][j]==0) {
                markRowi(matrix,i);
                markRowj(matrix,j);
            }
        }
    }
    for(int i =0;i<m;i++) {
        for(int j =0;j<n;j++) {
            if(matrix[i][j]==-1) {
                matrix[i][j]=0;
            }
        }
    }
}

int main() {
    int m ;
    int n;
    vector<vector<int>> matrix;
    cout << "Enter m  :";
    cin >> m;
    cout << "Enter n :";
    cin >> n;

    
}