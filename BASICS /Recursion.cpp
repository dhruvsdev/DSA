#include <iostream>
#include <vector>
using namespace std;

/***************** RECURSION ******************/


//Q-1 - Understand recursion 
void f(int count) {
    if(count==4) return;
    else {
        cout << 1 << " ";
        count++;
        f(count);
    }
    
}
//Q-2 Print name n times

//Remarks - you need to pass count and N both , defining count inside function would always lead to segmentation fault 

void printName(int count,int N,string name) {
    if(count==N) return;
    else {
        cout << name << " ";
        count++;
        printName(count,N,name);
    }
}

//Q-3 - print 1 to N
void print1toN(int count , int N) {
    if(count>N) return;
    else {
        cout << count << " ";
        // count++;
        print1toN(count+1, N);
    }

}
//Q-4 - print N to 1 

//Remarks - No need of count here , think first using pen and paper , dont rush to optimal soln without trying to optimise your code 
void printNto1(int N) {
    if(N<1) return;
    else {
        cout << (N) << " ";
        printNto1(N-1);
    }
}

//Q-5 - sum till N 

//Remarks - I returned sum everytime and ignored the value returned by the recursive calls , so in this way the sum a function calculated locally was returned and at the end the first function returned its sum value which was equal to N itself . 
//The fix /Concept - Return the recursive calls and not the value , but in base condition return the value . 
// int sum1toN(int N,int sum) {
//     if(N<1) return sum ;
//     else {
//         sum+=N;
//        return sum1toN(N-1,sum);
//     }
// }
int sum1toN(int N) {
    if(N<1) return 0;
    else {
        return N + sum1toN(N-1);
    }
}

//Remarks - Avoid using a separate parameter for the value being calc. instead return in this way 

//Q-6 - Factorial 
int fact(int N) {
    if(N==0) return 1;
    else {
        return N * fact(N-1);
    }

}
//Q-7 Reverse an array

//Remarks - Your brute approach works but has higher space complexity and also requires a new container . Its better to use swap function and you knew that array are always passed by reference .

//My approach 
// vector<int> revArray(int arr[],vector<int> vec,int len) {
//     if(len==0) return vec;
//     else {
//         vec.push_back(arr[len-1]);
//         return revArray(arr,vec,len-1);
//     }
// }

//Better approach 
// void revArray(int arr[], int i , int j) {
//     // Logic - using two pointer until start pointer exceeds 
//     if(i>=j) return ;
//     else {
//         swap(arr[i],arr[j]);
//         revArray(arr,i+1,j-1);
//     }    
// }   
//Optimal approach

void revArray(int arr[], int i ,int N) {
    // Logic - using single pointer , if we see we i=0 ,j=N-1 at the start in Two pointer , we inc i and dec j so we can say that we are subtracting i from j 
   // so j = N-i-1 . You can visualise it on paper . 
   // So what will be the base condn ? if(i > =N/2 ) return;
    if(i>=N/2) return ;
    else {
        swap(arr[i],arr[N-i-1]);
        revArray(arr,i+1,N);
    }    
}   
bool checkPdrome(string name,int n,int i) {
    if(i>=n/2) return true;
    else {
        if(name[i] !=name[n-i-1]) {
            return false;
        }
        else {
            return checkPdrome(name,n,i+1);
        }
    }
}
int fib(int n) {
    if(n<=1) return n;
    else {
        int l =fib(n-1);
        int sl = fib(n-2);
    }
}
int main() {
    int count=1;
    // f(count);
    // int N;
    // cout << "Enter N :";
    // cin >> N;
    // cin.ignore();
    // string name;
    // cout << "Enter name : ";
    // getline(cin,name);
    // printName(count,N,name);
    // print1toN(count ,N);
    // printNto1(N);
    int sum=0;
    // cout << sum1toN(N);
    // int fac=1;
    // cout << fact(N,fac);
    // vector<int> vec;
    // int arr[]={1,2,3,4,5};
    // int len = sizeof(arr)/sizeof(arr[0]);
    // vec = revArray(arr,vec,len);
    // for(auto it : vec) {
    //     cout << (it) << " ";
    // }
    // int arr[N];
    int i=0;
    // int j=N-1;
    // for(int i=0;i<N;i++) cin >> arr[i];
    // revArray(arr,i,N);
    // for(int i=0;i<N;i++) cout << arr[i] << " ";
    string name;
    cout << "Enter name : ";
    cin >> name;
    int n = name.size();
    cout << checkPdrome(name,n,i);
    
    return 0;
} 