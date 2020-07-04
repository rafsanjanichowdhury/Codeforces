#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
#define mx 100005
#define ll long long
#define rafsan ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main(){
    rafsan;
    string S;
    cin>>S;
    S += '\0';
    vector<int> V;
    int i{0};
    while (S[i] != '\0')
    {
        if (S[i]>= '0' && S[i] <= '9')
        {
            V.push_back(int(S[i]));
        }
        ++i;
    }
    sort(V.begin(),V.end());
    string Ans="";
    for (size_t i = 0; i < V.size(); i++)
    {
        Ans += static_cast<char>(V[i]);
        Ans += (i<V.size()-1) ? "+": "";
    }
    cout<<Ans;
    return 0;
}