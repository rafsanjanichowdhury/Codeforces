/*
    A Journey of thousands mile started with one single step. -Lao Tzu
 *    author:  v0ldem0rt
 *    created: 25.06.2020 07:27:00   
*/
#include <bits/stdc++.h>
using namespace std;

 
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;

#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define fn(i,n) for(ll i=0;i<n;i++)
#define test ll t;cin>>t;while(t--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    int n=4; //cin>>n; 
    ll c1{0},c2{0};
    int arr[n]; fl(i,0,n) cin>>arr[i];
    string s; cin>>s;

    fl(i,0,s.length()){
        if(s[i] == '1') c1 += arr[0];
        else if(s[i] == '2') c1 += arr[1];
        else if(s[i] == '3') c1 += arr[2];
        else c1 += arr[3];        
    }
    cout<<c1<<endl;
    //int a,b; cin>>a>>b; int c1{0};
    // int arr[n][3];
    // fl(i,0,n) {fl(j,0,3) cin>>arr[i][j]; int sum =0; sum = accumulate(arr[i], arr[i]+3, sum); if(sum>1) ++c1;}
    // cout<<c1<<endl;
//    while(a <= b){a *= 3; b *= 2; ++c1;} cout<<c1<<endl;
    // fl(i,0,s.length()) {
    //     if (s[i] == 'A') ++c1;
    //     else ++c2;
    // }
    // if(c1>c2) cout<<"Anton" <<endl;
    // else if(c2>c1) cout<<"Danik"<<endl;
    // else cout<<"Friendship"<<endl;

    return 0;
}