//https://www.hackerrank.com/contests/third-year-w2/challenges/friends-and-balls/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin>>n;
    vector<ll> a(n+2);
    ll m,q;
    cin>>m;
    while(m--){
        ll l,r;
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    for(ll i=1;i<=n;i++){
        a[i]+=a[i-1];
        // cout<<a[i]<<' ';
    }
    cin>>q;
    vector<ll> freq(1000001);
    
    for(ll i=1;i<=n;i++){
        freq[a[i]]++;
    }
    
    for(ll i=n;i>=0;i--){
        freq[i]+=freq[i+1];
    }
    while(q--){
        ll x;
        cin>>x;
        cout<<freq[x]<<"\n";
    }
    return 0;
}
