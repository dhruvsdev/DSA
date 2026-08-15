#include <iostream>
#include <string>
using namespace std;

int checkPalindrome(string s,int low,int high);

int main() {
    string s;
    cout << "enter string :";
    cin >> s;
    
    string temp = s;
    int n = s.size();
    int ans = checkPalindrome(s,0,n-1);

    if(ans==1) {
        cout << "Yes!";
    }
    else {
        cout << "No!";
    }
}

int checkPalindrome(string s,int low,int high) {
    if(low>=high) return 1;
    if(s[low] !=s[high])  {
        return 0;
    }
    else {
        low++;
        high--;
        checkPalindrome(s,low,high);
    }
    return 1;  
}       
