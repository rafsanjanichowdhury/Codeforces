/*
    A Journey of thousands mile started with one single step. -Lao Tzu
 *    author:  v0ldem0rt
 *    created: 25.06.2020 01:17:00   
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
//    int n; cin>>n; int c1{0},c2{0};
    int64_t arr[4]; fl(i,0,4) cin>>arr[i]; sort(arr,arr+4);
    int c1{1};
    int64_t temp = arr[0];
    fl(i,1,4){
        if(arr[i-1] != arr[i]) ++c1;
    }
    cout<<4-c1<<endl;
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