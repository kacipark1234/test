---------------------------測驗 2------------------------------------- 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string S = "人易科技:上 機 測 驗 - 演算法",ans="";
    bool T=false;
    for(int i=0 ; i<S.size(); i++){
        if(S[i]==':'){
            ans+="：";
            T=true;
            continue;
        }
        else if(S[i]==' '){
            continue;
        }
        else if(S[i]=='-'){
            ans+=" - ";
            break;
        }
        if(T==true){
            ans+=S[i];
        }
    }
    cout<<ans;
}
