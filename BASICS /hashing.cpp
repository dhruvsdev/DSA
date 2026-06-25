#include <iostream>
#include <map>
using namespace std;

// number hashing 
void hashArr(int arr[],int hash[12],int n) {
    for(int i=0;i<n;i++) {
        hash[arr[i]]++;
    }
}
//character hashing - m1
void charHash(string s ,int hash[255]) {
    for(int i=0;i<s.size();i++) {
        hash[s[i]]++;
    }
}
//character hashing - m2
void hashChar(string s ,int hash[25]) {
    for(int i=0;i<s.size();i++) {
        hash[s[i]-'a']++;
    }
}

void hashArrMap(map<int,int> &mpp ,int arr[],int n) {
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }
} 
vector<vector<int>> countFrequencies(vector<int>& nums) {
    vector<vector<int>> v;
    int hash[10]={0};
    for(int i=0;i<nums.size();i++) {
        hash[nums[i]%10]++;
    }
    for(int i =0;i<10;i++) {
        if(hash[i] !=0) {
            vector<int> vec;
            vec.emplace_back(i);
            vec.emplace_back(hash[i]);
            v.emplace_back(vec);
        }
       
    }
    return v;
}
int mostFrequentElement(vector<int>& nums) {
        int hash[10]={0};
        for(int i=0;i<nums.size();i++) {
            hash[nums[i]%10]++;
        }
        int count=0;
        int val=0;
        for(int i=0;i<9;i++) {
            if(count < hash[i]) {
                count=hash[i];
                val=i;
            }
        }
        return val;
    }
int main() {
    // int n ;
    // cout << "Enter n : ";
    // cin >> n;
    // int arr[n];
    // for(int i=0;i<n;i++) {
    //     cin >> arr[i];
    // }

    //At max numbers till 12 can be present in arr 

    // int hash[13]={0};
    // hashArr(arr,hash,n);
    // int q;
    // cout << "Enter n(values) to check : ";
    // cin >> q;
    // for(int i =0;i<q;i++) {
    //     int x;
    //     cin >> x;
    //     cout << x << " : " << hash[x] << " , ";
    // }

    // string s;
    // cout << "Enter string : ";
    // cin >> s;

    //character hashing

    // int hash[255]={0};
    // charHash(s,hash);
    // int q;
    // cout << "Enter n(chars) to check : ";
    // cin >> q;
    // for(int i =0;i<q;i++) {
    //     char ch;
    //     cin >> ch;
    //     cout << ch << " : " << hash[ch] << " , ";
    // }

    //for lowercase/uppercase only string we can make hash array of size 26 and use ASCII value to assign values

    // int hash[25]={0};
    // string s;
    // cout << "Enter string : ";
    // cin >> s;
    // hashChar(s,hash);
    // int q;
    // cout << "Enter n(chars) to check : ";
    // cin >> q;
    // for(int i =0;i<q;i++) {
    //     char ch;
    //     cin >> ch;
    //     cout << ch << " : " << hash[ch-'a'] << " , "; // ASCII > a=97 z=122
    // }

    //Hashmap 

    // int n ;
    // cout << "Enter n : ";
    // cin >> n;
    // int arr[n];
    // for(int i=0;i<n;i++) {
    //     cin >> arr[i];
    // }
    // map <int,int> mpp;
    // hashArrMap(mpp,arr,n);
    // int q;
    // cout << "Enter n(values) to check : ";
    // cin >> q;
    // for(int i=0;i<q;i++) {
    //     int x;
    //     cin >> x;
    //     cout << mpp[x] << " ";   
    // }
    vector<int> nums;
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=0;i<n;i++) {
        int x ;
        cin >> x;
        nums.emplace_back(x);
    }
    cout << mostFrequentElement(nums);

    // vector<vector<int>> V;
    // V = countFrequencies(nums);
    // for (int i = 0; i < V.size(); i++) {
    //     for (int j = 0; j < V[i].size(); j++) {
    //         if(V[i][j] !=0)
    //             cout << V[i][j]<< " ";
    //     }
    //     cout << endl;
    // }


    
    



}