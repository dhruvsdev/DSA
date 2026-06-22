#include <iostream>
#include <math.h>
#include <vector>
using namespace std;


//Q-1 - count digits

//Remarks - Forgot for edge case 0 
int countDigit(int n) {
    //M-1
    // if(n==0) {return 1;}
    // int count=0;
    // while(n>0) {
    //     n=n/10;
    //     count++;
    // }
    // return count;
    
    //M-2
    int count = (int)(log10(n) + 1);
    return count;

    //TC - O(log10(n)) - why ? depends on the number of times n gets divided by 10

    //Its more of a concept - When a program depends on the times a no. gets divided by a no. , TC will be of type o(logx(n)) where x is the divisor . 
}

//Q-2 - reverse a num

//Remarks - Didnt know how to write for 10's place
int reverseNum(int n) {
    long rev=0;
    while(n>0) {
        int digit=n%10;
        n=n/10;
        rev = rev*10 + digit ; //mutliplying by 10 and then adding the digit is required to form the number . 
    }
    return rev;

}
//Q-3 - check if palindrome 

//Remarks - did myself as it was similar to reversing but I saw and fixed my logical error of not duplicating the number so I got false for every testcase

bool isPalindrome(int n) {
    long rev=0;
    int num=n;
    while(n>0) {
        int digit=n%10;
        n=n/10;
        rev=rev*10 + digit;
    }
    if(num==rev) {
        return true;
    }
    return false;
}
//Q-4 - gcd 

//Remarks - Wrote brute force approach by myself
 

int gcd(int n1,int n2) {
    // MY APPROACH - brute force - TC - O(min(n1,n2))
    // int gcd=0;
    // for(int i=1;i<=min(n1,n2);i++) {
    //     if(n1%i==0 && n2%i==0) {
    //         // gcd=max(gcd,i); ( no need )
    //         gcd=i; 
    //     }
    // }
    // return gcd;
    //ANOTHER APPROACH - Think what if loop in reverse , starting from min(n1,n2) and breaking when our condn is satisfied , this will still give TC - O(min(n1,n2)) ( worst case )
    // for(int i=min(n1,n2);i>=1;i--) {
    //     if(n1%i==0 && n2%i==0) {
    //         // gcd=max(gcd,i); ( no need )
    //         cout << i;
    //         break; 
    //     }
    // }
    //OPTIMAL APPROACH - Euclidean algorithm 
    while(n1 >0 && n2>0) {
        if(n1 > n2) n1= n1%n2 ;
        else n2=n2%n1;
    }
    if(n1==0) return n2;
    return n1;
}






// Q-5 - check for Armstrong 

//Remarks - using log for count is better than loop.
bool isArmstrong(int n) {
        // int num=n;
        int sum=0;
        // int count =0;
        // while(n>0) {
        //     n=n/10;
        //     count++;    
        // }
        int count = (int)(log10(n)+1);
        //Better use log as taught in q-1
        // n=num;
        while(n>0) {
            int d=n%10;
            n=n/10;
            sum+=pow(d,count);
        }
        if(sum==n) {
            return true;
        }
        return false;
}
//TC - o(log10(n))

//Q-6 - Print all divisors 


vector<int> divisors(int n) {
    vector<int> vec;
    // My approach - Brute force - T.C - O(n)

    // for(int i=1;i<=n;i++) {
    //     if(n%i==0) {
    //         vec.push_back(i);
    //     }
    // }
    // return vec;

    //Optimal approach - Simple math : factors repeat after sqrt(n) so no need to run the loop after it . 
    //TC - O(sqrt(n))

    for(int i=1;i<sqrt(n);i++) {
        if(n%i==0) {
            vec.push_back(i);
            if(n/i != i) {
                vec.push_back(n/i);
            }
        }
    }
    sort(vec.begin(),vec.end());
    return vec;

}


//Q-7 - Check for prime 


bool isPrime(int n) {
    //My approach - Brute force  - TC - O(N)
    //    for(int i=2;i<=n/2);i++) {
    //         if(n%i==0) {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    //Optimal approach which I thought of by seeing TC and divisors approach - In both the questions we are using the same condition 

    //TC - O(sqrt(n) )
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}



int main() {
    // cout << countDigit(1234) << endl;
    // cout << reverseNum(123) << endl;
    // cout << isPalindrome(121) <<endl;
    cout << gcd(5,20) << endl;
    //cout << isArmstrong(1634) << endl;
    // vector <int> v=divisors(6);
    // for(int x : v) {
    //     cout << x << " ";
    // }
    //cout << isPrime(17) << endl;

}
