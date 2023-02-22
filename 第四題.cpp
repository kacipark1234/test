#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> V={77,5,5,22,13,55,97,4,796,1,0,9};

    for(int i=0;i<V.size();i++){
        for(int j=i+1;j<V.size();j++){
            if( V[i] > V[j]){
                swap(V[i],V[j]);
            }
        }
    }
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }

}
