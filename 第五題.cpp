#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> a={77,5,5,22,13,55,97,4,796,1,0,9},b={0,1,2,3,4,5,6,7,8,9},c,c1,d,e,e1;



    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            e.push_back(a[i]);
            if(a[i]==b[j]){
                c.push_back(a[i]);
                break;
            }
            if(j==b.size()-1){
                d.push_back(a[i]);
            }
        }
    }
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
        if(c[i]!=c[i+1]){
            c1.push_back(c[i]);
        }
    }
    sort(e.begin(),e.end());
    for(int i=0;i<e.size();i++){
        if(e[i]!=e[i+1]){
            e1.push_back(e[i]);
        }
    }
    cout<<"交集:";
    for(int i=0;i<c1.size();i++){
        cout<<c1[i]<<" ";
    }
    cout<<"差集:";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<"聯集:";
    for(int i=0;i<e1.size();i++){
        cout<<e1[i]<<" ";
    }



}
