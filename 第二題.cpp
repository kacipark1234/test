#include<bits/stdc++.h>
using namespace std;
int main(){
    string S = "�H�����:�W �� �� �� - �t��k",ans="";
    bool T=false;
    for(int i=0 ; i<S.size(); i++){
        if(S[i]==':'){
            ans+="�G";
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
