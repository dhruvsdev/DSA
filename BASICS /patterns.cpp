#include <iostream>
using namespace std;

int main() {
    //P-1 :
    // for(int i=0;i<5;i++) {
    //     for(int j=0;j<5;j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    //P-2 :
    // for(int i=0;i<5;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    //P-3 :
    // for(int i=0;i<5;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << j+1;
    //     }
    //     cout << "\n";
    // }
    //P-4 :
    // for(int i=0;i<5;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << i+1 << " ";
    //     }
    //     cout << "\n";
    // }
    //P-5 :
    // for(int i=5;i>0;i--) {
    //     for(int j=1;j<=i;j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    //P-6 :
    // for(int i=5;i>0;i--) {
    //     for(int j=1;j<=i;j++) {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }
    //P-7 :
    // for(int i=5;i>0;i--) {
    //     //for spaces 
    //     for(int j=0;j<i-1;j++) {
    //         cout << " ";
    //     }
    //     // pattern 1 
    //     for(int j=5;j>i-1;j--) {
    //         cout << "*";
    //     }
    //     //pattern 2 
    //     for(int j=5;j>i;j--) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    //P-8 :
    // for(int i=1;i<=5;i++) {
    //     //for spaces 
    //     for(int j=0;j<i-1;j++) {
    //         cout << " ";
    //     }
    //     // pattern 1 
    //     for(int j=5;j>i-1;j--) {
    //         cout << "*";
    //     }
    //     //pattern 2 
    //     for(int j=5;j>i;j--) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    //P-9 :
    // for(int i=5;i>0;i--) {
    //     //for spaces 
    //     for(int j=0;j<i-1;j++) {
    //         cout << " ";
    //     }
    //     // pattern 1 
    //     for(int j=5;j>i-1;j--) {
    //         cout << "*";
    //     }
    //     //pattern 2 
    //     for(int j=5;j>i;j--) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // for(int i=1;i<=5;i++) {
    //     //for spaces 
    //     for(int j=0;j<i-1;j++) {
    //         cout << " ";
    //     }
    //     // pattern 1 
    //     for(int j=5;j>i-1;j--) {
    //         cout << "*";
    //     }
    //     //pattern 2 
    //     for(int j=5;j>i;j--) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    //P-10 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<i+1;j++) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // for(int i=1;i<n;i++) {
    //     for(int j=n;j>i;j--) {
    //         cout << "*";
    //     }
    //     cout<< "\n";
    // }
    //P-11(important) :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // int start=1;
    // for(int i=1;i<=n;i++) {
    //     if(i%2 !=0) {
    //         start=1;
    //     }
    //     else {
    //         start=0;
    //     }
    //     for(int j=1;j<=i;j++) {
    //             cout << start;
    //             start=1-start;
    //         }
    //     cout << "\n";
    // }
    //P-12 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // for(int i=0;i<n;i++) {
    //     //Pattern 1 
    //     for(int j=0;j<i+1;j++) {
    //         cout << (j+1);
    //     }
    //     //spaces 1
    //     for(int j=i+1;j<n;j++) {
    //         cout << " ";
    //     }
    //     //spaces 2
    //     for(int j=n-1;j>i;j--) {
    //         cout << " ";
    //     }
    //     //pattern 2 
    //     for(int j=i+1;j>0;j--) {
    //         cout << j;
    //     }
    //     cout << "\n";
    // }
    //P-13 :
    int n;
    cout << "Enter N : ";
    cin >> n;
    int k=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << k << " ";
            k++;
        }
        cout << "\n";
    }
    //P-14 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // char ch='A';
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << char(ch+j);
    //     }
    //     cout << "\n";
    // }
    //P-15 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // char ch='A';
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n-i;j++) {
    //         cout << char(ch+j);
    //     }
    //     cout << "\n";
    // }
    //P-16 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // char ch='A';
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << "\n";
    // }
    //P-17 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // char ch='A';
    // for(int i=0;i<n;i++) {
    //     //spaces
    //     for(int j=0;j<n-i-1;j++) {
    //         cout << " ";
    //     }
    //     for(int j=0;j<=i;j++) {
    //         cout << char(ch+j);
    //     }
    //     for(int j=i;j>0;j--) {
    //         cout << char(ch+j-1);
    //     }
    //     cout << "\n";
    // }
    //P-18 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // char ch='E';
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << char(ch-i+j);
    //     }
    //     cout << "\n";
    // }
    //P-19 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // //above
    // for(int i=0;i<n;i++) {
    //     //Pattern 1
    //     for(int j=0;j<n-i;j++) {
    //         cout << "*";
    //     }
    //     //spaces
    //     for(int j=0;j<2*i;j++) {
    //         cout << " ";
    //     }
    //     //pattern 2
    //     for(int j=n-i;j>0;j--) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // //below
    // for(int i=n-1;i>=0;i--) {
    //     //Pattern 1
    //     for(int j=0;j<n-i;j++) {
    //         cout << "*";
    //     }
    //     //spaces
    //     for(int j=0;j<2*i;j++) {
    //         cout << " ";
    //     }
    //     //pattern 2
    //     for(int j=n-i;j>0;j--) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    //P-20 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // for(int i=0;i<n;i++) {
    //         //stars
    //         for(int j=0;j<=i;j++) {
    //             cout << "*";
    //         }
    //         //spaces
    //         for(int j=0;j<2*(n-i-1);j++) {
    //             cout << " ";
    //         }
    //         //stars
    //         for(int j=0;j<=i;j++) {
    //             cout << "*";
    //         }
    //         cout <<"\n";
    // }
    //     for(int i=n;i>=0;i--) {
    //         //stars
    //         for(int j=1;j<i;j++) {
    //             cout << "*";
    //         }
    //         //spaces
    //         for(int j=0;j<2*(n-i+1);j++) {
    //             cout << " ";
    //         }
    //         //stars
    //         for(int j=1;j<i;j++) {
    //             cout << "*";
    //         }
    //         cout << "\n";
    //     }
    //P-21 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // for(int i=0;i<n;i++) {
    //     if(i==0 || i==(n-1)) {
    //         for(int j=0;j<n;j++) {
    //             cout << "*";
    //         }
    //     }
    //     else {
    //         cout << "*";
    //         //spaces
    //         for(int j=0;j<n-2;j++) {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    //P-22 :
    // int n;
    // cout << "Enter N : ";
    // cin >> n;
    // for(int i=0;i<2*n-1;i++) {
    //     for(int j=0;j<2*n-1;j++) {
    //         int top=i;
    //         int bottom=(2*n-2)-i;
    //         int left=j;
    //         int right=(2*n-2)-j;
    //         cout << (n-min(min(top,bottom),min(left,right)));
    //     }
    //     cout << "\n";
    // }
    

           
}