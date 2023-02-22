#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> V={0,1,2,3,4,5,6,7,8,9},OOD,EVEN;
    int ood=0,even=0;
    for(auto i:V){
        if(V[i]%2==0){
            even+=V[i];
            EVEN.push_back(V[i]);
        }
        else{
            ood+=V[i];
            OOD.push_back(V[i]);
        }
    }
    cout<<"计羆㎝:"<<ood<<" 案计羆㎝:"<<even<<endl;
    cout<<"计皚:";
    for(int i=0;i<OOD.size();i++){
        cout<<OOD[i];
    }
    cout<<endl<<"案计皚:";
    for(int i=0;i<EVEN.size();i++){
        cout<<EVEN[i];
    }
}
