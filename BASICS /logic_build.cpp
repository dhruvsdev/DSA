#include <iostream>
#include <cctype>
#include <math.h>
using namespace std;


int  sumOfDigits(int n,int sum) {
    if(n==0) return sum;
    else {
        sum += (n % 10);
        return sumOfDigits(n/10,sum);
    }

}

int main()
{
    // Q-1 :
    //  char ch;
    //  cin >> ch;

    // if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
    //     cout << ch << " is a vowel.\n";
    // }
    // else {
    //     cout << ch << " is a consonant.\n";
    // }
    // Q-2 :
    // int a,b,c;
    // cin >> a >> b >> c;
    // if((a+b > c) && (c+b > a) && (a+c > b)) {
    //     cout << "The given sides form a triangle.\n";
    // }
    // else {
    //     cout << "The given sides do NOT form a triangle.\n";
    // }
    // Q-3 :
    // int a,b,c;
    // cin >> a >> b >> c;
    // if((a+b > c) && (c+b > a) && (a+c > b)) {
    //     cout << "The given sides form a triangle";
    //     if(a==b && b==c && a==c) {
    //         cout << " and it is an equilateral triangle.\n";
    //     }
    //     else if (a==b || b==c || a==c) {
    //         cout << " and it is an isosceles triangle.\n";
    //     }
    //     else {
    //         cout << " and it is a scalene triangle.\n";
    //     }
    // }
    // else {
    //     cout << "The given sides do NOT form a triangle.\n";
    // }
    // Q-4 :
    // char ch;
    // cin >> ch;
    // if(ch >'a' && ch <'m') {
    //     cout << ch << " lies between a and m\n";
    // }
    // else if(ch >'n' && ch <'z') {
    //     cout << ch << " lies between n and z\n";
    // }
    // Q-5 :
    // int num;
    // cout << "Enter 3 digit number : " ;
    // cin  >> num;
    // if(num > 99 && num < 1000) {
    //     int d1=num%10;
    //     num=num/10;
    //     int d2=num%10;
    //     int d3=num;
    //     if(d1!=d2 && d2!=d3 && d1!=d3) {
    //         cout << "All digits are distinct.\n";
    //     }
    //     else {
    //         cout << "All digits are NOT distinct.\n";
    //     }
    // }
    // else {
    //     cout << "Please enter a 3-digit number .";
    // }
    // Q-6 :
    // int num;
    // cout << "Enter a  number : ";
    // cin >> num;
    // if((num%3==0) && (num%5==0)) {
    //     cout << "FizzBuzz\n";
    // }
    // else if(num%3==0) {
    //     cout << "Fizz\n";
    // }
    // else if(num%5==0) {
    //     cout << "Buzz\n";
    // }
    // Q-7(Important concept) :
    // string pass;
    // cout << "Enter password : ";
    // cin >> pass;

    // bool hasdigit=false;
    // for(char ch :pass) {
    //     if(isdigit(ch)) {
    //         hasdigit=true;
    //         break;
    //     }
    // }
    // if((pass.length() >=8) && hasdigit) {
    //     cout << "Valid password";
    // }
    // else {
    //     cout << "Inavalid password\n";
    // }
    // Q-8 :
    // int num;
    // cout << "Enter number : ";
    // cin >> num;
    // int sum=0,prod=1;
    // if(num >=1 && num <10000) {
    //     while(num>0) {
    //         int n=num%10;
    //         num=num/10;
    //         sum+=n;
    //         prod*=n;
    //     }
    //     if(sum > prod) {
    //         cout << "YES , sum > prod\n";
    //     }
    //     else {
    //         cout << "NO , sum NOT greater than product";
    //     }
    // }
    // else {
    //     cout << "Enter a number between 0 and 10000\n";
    // }
    // Q-9 :
    // int a,b,c;
    // cout << "Enter a , b ,c :";
    // cin >> a >> b >> c;
    // if(a*a ==(b*b+c*c) || b*b ==(c*c+a*a) || c*c ==(b*b+a*a)) {
    //     cout << "YES , a pythagorean triplet\n";
    // }
    // else {
    //     cout << "NO\n";
    // }
    //Q-10 :
    // int a,d,n;
    // cout << "Enter no. of terms : ";
    // cin >>n;
    // cout << "Enter first term and difference :";
    // cin >> a >> d;
    // for(int i=1;i<=n;i++) {
    //     cout << (a+(i-1)*d) << endl;;
    // }
    //Q-11 :
    // int a,r,n;
    // cout << "Enter first term ,common ratio and no. of terms : ";
    // cin >> a >> r >>n;
    // for(int i=1;i<=n;i++) {
    //     cout << a * pow(r,i-1) << endl;
    // }

    //Q-12 :
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // int a =0;
    // int b =1;
    // int sum =1;
    // int curr =0;
    // for(int i =0;i<n-2;i++) {
    //     curr = (a+b);
    //     a = b;
    //     b = curr;
    //     cout << curr << " ";
    //     sum+=curr;
    // }
    // cout <<endl;
    // cout << sum;
    //Q-13 :
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // int curr=1;
    // for(int i =0;i<n;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << curr << " ";
    //         curr+=1;

    //     }
    //     cout << endl;
    // }
    
    //Q-14 : // nice one 
    // for(int i =1;i<501;i++) {
    //     int temp = i;
    //     int rev =0;
    //     while(temp>0) {
    //         int digit = temp % 10;
    //         temp = temp/10;
    //         rev = rev*10 + digit;
    //     }
    //     if(rev==i) {
    //         cout << rev << " ";
    //     }
        
    // }
    //Q-15 :
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // int minv =INT_MAX;
    // int maxv = INT_MIN;
    // if(n==0) {
    //     minv = n;
    //     maxv = n;
    // }
    // while(n>0) {
    //     int digit = n % 10;
    //     n = n / 10;
    //     minv = min(minv,digit);
    //     maxv= max(maxv,digit);
    // }
    // cout << "Min digit : " << minv << endl;
    // cout << "Max digit : " << maxv << endl;

    //Q-16 :
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // int sume =0;
    // int sumo =0;
    // while(n>0) {
    //     int digit = n % 10;
    //     n = n / 10;
    //     if(digit%2 ==0) sume+=digit;
    //     else sumo +=digit;

    // }
    // cout << "sum of even digits : "<< sume << endl;
    // cout << "sum of odd digits : " << sumo << endl;
    int n;
    cout << "Enter n : ";
    cin >> n;
    int sum = 0;
    cout << sumOfDigits(n,sum);





}