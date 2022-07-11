#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
#include <array>
using namespace std;
int search(string s,char idx){
    for(int m=0;s[m]!='\0';m++){
        if(idx==s[m]){
            return m;
        }
    }
    return 0;
}
int firstUniqChar(string s,int n) {
int H[26];
for(int i=0;i<=26;i++){
    H[i]=-1;
}
for(int i=0;s[i]!='\0';i++){
    for(int k=1;s[k]!='\0';k++){
        if(s[i]==s[k]){
            H[s[i]-'a']++;
        }
    }
}
int flag=0;
int j=0;
for(j;H[j]<=26;j++){
    if(H[j]==-1){
        flag=0;
       int idx=j+'a';
    idx=char(idx);
    int res=search(s,idx);
    return res;
      
    }
    else if(H[j]>-1){
        flag=1;
    }
}
if(flag==1){
    return -1;
}
return 0;
}

int main(){

ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



// #ifndef ONLINE_JUDGE

// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

// #endif
string s;
cin>>s;
int n=s.size();
cout<<firstUniqChar(s,n);


return 0;
}