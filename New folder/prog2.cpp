//https://www.hackerrank.com/contests/third-year-w2/challenges/similar-dress-code/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int p=0,q=0;
        for(char ch:s){
            if(ch=='1') p++;
            else q++;
        }
        cout<<min(p,q)<<"\n";
    }
    return 0;
}
