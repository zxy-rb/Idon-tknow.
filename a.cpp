#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define se second
#define fi first

void solve(){
    
  string s;
  int l,q;
  int cur=0;
  cin>>l>>s>>q;
  s="0"+s;
vector<int>t(q+1);
vector<int>x(q+1);
vector<char>c(q+1);
int last=0;
 for(int i=1;i<=q;i++){
    cin>>t[i]>>x[i]>>c[i];
    if(t[i]==1){
      s[x[i]]=c[i];
    }else if(t[i]==2){
      cur=-1;
      last=i;
    }else if(t[i]==3){
      cur=1;
      last=i;
    }
  }
    if(cur==-1){
        for(int i=0;i<l;i++){
            if('A'<=s[i]&&s[i]<='Z')s[i]=char(s[i]+32);
        }
    }
    else if(cur==1){
        for(int i=0;i<l;i++){
           if('a'<=s[i]&&s[i]<='z')s[i]=char(s[i]-32);
        }
    }
    for(int i=last+1;i<=q;i++){
        if(t[i]==1){
            s[x[i]]=c[i];
        }
    }

    for(int i=1;i<=l;i++)cout<<s[i];

  }

void add(int a){
  cout<<a*2;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--){
        solve();
    }
    return 0;
}