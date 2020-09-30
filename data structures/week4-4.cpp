#include <bits/stdc++.h>

using namespace std;

#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    unordered_map<int, int> mp;
    for (int i = 0; i < s.length(); i++){
        mp[i]=mp[i-1]+s[i];
    }
    // for (size_t i = 0; i < s.length(); i++){
    //     cout<<mp[i]<<" ";
    // }
    int n;
    cin >>n;
    while(n--){
        int i,j,l,a,b;
        bool flag;
        cin>>i>>j>>l;
        a=mp[l+i-1]-mp[i-1];
        b=mp[l+j-1]-mp[j-1];
        if(a==b){
            cout<<a<<b;
            flag=true;
            for(int k=0; k<l; k++){
                if(s[i+k]!=s[j+k]){
                    flag=false;
                }
            }
            if(flag==true){
                cout<<"Yes"<<"\n";
            }else{
                cout<<"No"<<"\n";
            }
        }else{
            cout<<"No1"<<"\n";
        }
    }
}
