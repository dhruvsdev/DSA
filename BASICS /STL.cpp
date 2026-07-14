#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2) {
    if(p1.second < p2.second ) return true;
    if(p1.second > p2.second ) return false;
    if(p1.first > p2.first ) return true;
    return false;
}

int main() {
    //PAIRS

    //pair syntax

    // pair<int,int> p={1,3};
    // cout << p.first << " " << p.second << endl;

    //nested pair

    // pair<int,pair<int,int>> k ={1,{3,4}};
    // cout << k.first << " " << k.second.first << " " << k.second.second << endl;

    //array of pair
    // pair<int,int> arr[] ={{1,2},{2,3},{4,5}};
    // cout << arr[1].first << endl;

    //VECTORS

    //vector syntax

    // vector<int> v;

    //vector push value fn

    // v.push_back(1);
    // v.emplace_back(2);

    //vector of pairs
     
    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,2);

    //pre defined vector 

    // vector <int> vect(5,100);

    //pre defined empty vector

    // vector <int> v(5);
    // v.push_back(1);

    //copy vector into a vector 

    // vector <int> v1(5,10);
    // vector <int> v2(v1);

    //Accessing vectors using iterators 
    // vector<int> v;
    // v.emplace_back(1);
    // v.emplace_back(2);
    // v.emplace_back(3);
    // v.emplace_back(4);
    // v.emplace_back(5);

    //accessing from start

    // vector<int>::iterator it =v.begin();
    // cout << *(it) << " ";
    // it++;
    // cout << *(it) << " ";

    //accessing from end 

    // vector<int>::iterator it=v.end();
    // it--;
    // cout << *(it) << endl;

    //acessing from reverse end (everything is reverse)

    // vector<int>::reverse_iterator it =v.rend(); //right before 1
    // it--;//reducing means moving ahead
    // cout << *(it) << endl;

    //acessing from reverse begin (everything is reverse)

    // vector<int>::reverse_iterator it =v.rbegin(); // begin is now 5 and end is 1
    // it;
    // cout << *(it);
    // it++; //increasing it means moving towards 1
    // cout << *(it) << endl; 

    //Accessing vector normally
    // cout << v[0] << " " << v[1] << endl;

    //Other fn
    // cout << v.back();

    //Printing vectors

    //Method - 1

    // for(vector<int>::iterator it =v.begin();it !=v.end();it++) {
    //     cout << *(it) << " ";
    // }
    // cout <<endl;

    //Method-2 (instead of full iterator syntax write auto )

    // for(auto it =v.begin();it !=v.end();it++) {
    //     cout << *(it) << " ";
    // }
    // cout <<endl;

    //Method-3 (a variation of for loop but here auto means the value )

    // for(auto it:v) {
    //      cout << (it) << " ";
    // }

    //More functions in vector

    //erase()

    // v.erase(v.begin());
    // for(auto it:v) {
    //      cout << (it) << " ";
    // }
    // cout <<endl;

    //erasing in a range

    // v.erase(v.begin()+1,v.begin()+3); // [Start,end)
    // for(auto it:v) {
    //      cout << (it) << " ";
    // }

    //insert()
    
    //inserting a single element

    // v.insert(v.begin(),0); //Inserts 0 at the start 

    //inserting a value multiple times

    // v.insert(v.begin()+3,2,5); // v.insert(position,no.of values,value)
    // for(auto it:v) {
    //      cout << (it) << " ";
    // }

    //inserting a vector inside another 

    // vector<int> vec={6,7};
    // v.insert(v.begin()+5,vec.begin(),vec.end());
    //  for(auto it:v) {
    //      cout << (it) << " ";
    // }

    //size()

    // cout << v.size() << endl;

    //pop_back()

    // v.pop_back();
    //  for(auto it:v) {
    //      cout << (it) << " ";
    // }

    //swap()

    // vector<int> v1={6,7,8,9,10};
    // v.swap(v1);
    //  for(auto it:v) {
    //      cout << (it) << " ";
    // }
    // cout << endl;
    // for(auto it:v1) {
    //      cout << (it) << " ";
    // }

    //clear()

    // v.clear();
    // for(auto it:v) {
    //      cout << (it) << " ";
    // }

    //empty()

    // cout << v.empty() << endl;
    // v.clear();
    // cout << v.empty() << endl; // 1 means empty , 0 means NOT empty 

    //LIST

    //list syntax

    // list<int> ls;
    // ls.push_back(1);

    // for(auto it : ls) {
    //     cout << it << " ";
    // }
    // cout << endl;
    // //front push capability
    // ls.push_front(0);
    // for(auto it : ls) {
    //     cout << it << " ";
    // }
    
    //rest all functions are same as in vector

    //DEQUE

    //exactly similar to vector and list including their capabilities.

    //deque syntax

    // deque<int> dq;
    // dq.push_back(1);
    // dq.push_back(2);
    // for(auto it : dq) {
    //     cout << it << " ";
    // }
    // cout <<endl;
    // dq.pop_front();
    // for(auto it : dq) {
    //     cout << it << " ";
    // }
    // cout << dq.back() << endl;
    // cout << dq.front() << endl;

    //STACK 

    //follows LIFO (last in first out)

    //stack syntax
    // stack<int> st;

    //stack functions

    //push()

    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);

    //top()

    //returns the top value at present.

    // cout << st.top() << endl;

    //pop()

    //removes the element at top at present.

    // st.pop();
    // cout << st.top();

    //more fns
    // cout << st.size() << endl;
    // cout << st.empty()<< endl;

    // stack<int> st1;
    // st1.push(1);
    // st1.push(2);
    // st1.push(3);
    // stack<int> st2;
    // st2.push(4);
    // st2.push(5);
    // st2.push(6);
    // st1.swap(st2);
    // cout << st1.top() << endl;
    // cout << st2.top() << endl;

    //QUEUE

    //Follows FIFO (first in first out)

    //Queue syntax

    // queue<int> q;

    //functions

    //push()
    // q.push(1);
    // q.push(2);
    // q.push(3);

    //back() -> returns the last/back value

    // cout << q.back() << endl;

    //front() -> returns the first/front value

    // cout << q.front() << endl;

    //pop() -> pops out the front element at present

    // q.pop();
    // cout << q.front() << endl;

    //rest fns same as stack

    //PRIPORITY_QUEUE 

    //INT - largest element at first
    //CHAR - largest character at first
    //STRING - lexicographically largest(greater in alphabetical order) at first 

    //syntax
    // priority_queue<int> pq;

    //functions

    //push()

    // pq.push(2);
    // pq.push(4);
    // pq.push(3);
    // pq.push(10); //{10,4,3,2}. //This is called MAX HEAP.

    //top()

    // cout <<pq.top() << endl;

    //pop()

    // pq.pop();
    // cout <<pq.top() << endl;

    //Rest are size(),swap(),empty() ->very simple;

    //if you want pq which stores min. element at top

    // priority_queue<int ,vector<int> ,greater<int>> pq;
    // pq.push(2);
    // pq.push(4);
    // pq.push(3);
    // pq.push(10);

    // cout << pq.top() <<endl;

    //This is called MIN HEAP.
    //It is a NON-LINEAR data structure as a tree is maintained inside it .


    //SET

    //set syntax

    //A set is "Sorted" and "Accepts unique values". 

    // set<int> st;

    //functions

    //insert() and emplace() 

    // st.insert(4);
    // st.emplace(2);
    // st.insert(1);
    // st.insert(5); // {1,2,4,5}

    //accessing values

    // for(auto it : st) {
    //     cout << it <<  " ";
    // }

    //iterators
    
    // auto it =st.find(4); 
    
    //Points to the memory address of 4

    // auto it =st.find(3); 
    
    //Since 3 isn't in our set , iterator points to st.end() i.e. right after last value .

    //erase()

    // st.erase(5); 
    
    //Takes logarithmic time 

    // auto it =st.find(2);
    // st.erase(it);

    //iterator takes constant time

    //erase in range

    // auto it1=st.find(1);
    // auto it2=st.find(4);
    // st.erase(it1,it2);

    //count()

    // int cnt =st.count(4);
    // cout << cnt;

    //if element is present -  returns 1 
    //if NOT - returns 0;

    //MULTISET

    //sorted but NOT unique . 

    //multiset syntax

    // multiset<int> ms;

    //functions

    //insert()

    // ms.insert(1);
    // ms.insert(1);
    // ms.insert(1); //{1,1,1}

    //erase()

    // ms.erase(1); 
    //removes all 1 

    //ms.erase(ms.find(1)); 
    //remove first occurence of 1 

    //UNORDERED_SET

    //Unsorted but unique

    //syntax

    // unordered_set<int> us;

    //All functions same EXCEPT lower_bound() and upper_bound().

    //TC - O(1)

    //Worst case - O(N) 
    

    //MAP

    //Stores key and value pairs in sorted way.
    //Key is unique but value can be same .

    //syntax

    // map<int,int> mpp;  //{key:int,value;int}

    // map<pair<int,int>,int> mpp; //{key:pair,value:int}
    // map<int,pair<int,int>> mpp;  //{key:int,value:pair}

    //functions

    //storing values

    // for {int,int} pair

    // mpp[1] = 2;  //{1,2}

    // mpp.emplace(3,1); // {{1,2},{3,1}}

    // mpp.insert({2,4}); // {{1,2},{2,4},{3,1}}

    //for {pair,int} pair

    // mpp[{2,3}] =10; 
    
    //find()

    // auto it = mpp.find(3);
    // cout << (*it).second << endl;

    //find() returns end() if the key is not present 

    // auto it = mpp.find(5);

    //upper_bound() & lowerbound()

    // auto it = mpp.lower_bound(2);
    // auto it = mpp.upper_bound(3);

    //rest fn like erase , size , swap are same as above.

    //Works in log(n) TC

    //MULTIMAP 

    //Same as map but keys aren't unique .
    
    //UNORDERED MAP 

    //Same as map but unsorted (key,value) pairs . 


    //Algorithms
    
    // int arr[] {3,5,2,1};

    // vector<int> v;
    // v.emplace_back(3);
    // v.emplace_back(5);
    // v.emplace_back(2);
    // v.emplace_back(1);
 
    //sorting

    //array sorting

    // sort(arr,arr+4); //[start,end)
    // for(int x :arr) {
    //     cout << x << " ";
    // } 
    // cout << endl;

    //vector sorting

    // sort(v.begin(),v.end());
    // for(int x : v) {
    //     cout << x << " " ;
    // }

    //sorting in descending order 

    //array 
    // sort(arr,arr+4,greater<int>());   //comparator 
    // for(int x : arr) {
    //     cout << x << " ";
    // }

    //sorting in your own way
    
    // pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    //see comparator definition written otuside main
    // sort(a,a+3,comp);
    // for(auto x : a) {
    //     cout << "{" <<  x.first << "," << x.second << "}";
    // }

     
    //return set bits

    // int num = 6;
    // int cnt = __builtin_popcount(num); // binary 6 - 110 so returns n(set bits) - 2( 2 1's)
    // cout << cnt << endl;

    // long long n =123456789;
    // int count=__builtin_popcountll(n);
    // cout << count << endl;


    //next permutation

    // string s="213"; // for all permutation keep it sorted
    // sort(s.begin(),s.end());

    // do {
    //     cout << s << endl;
    // }while(next_permutation(s.begin(),s.end()));

    //max element

    // int arr[]={2,10,5,6};
    // int *maxi= max_element(arr,arr+4);
    // cout << *(maxi) << endl;

    //or as : int maxi =*max_element(arr,arr+4);





    









     


     




     



    





    












    




    

 
  




    


    
    






}