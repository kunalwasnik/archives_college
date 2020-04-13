#include <iostream>
#include <cstdio>
using namespace std;

main() {
int k,i,t,j,n,item;
cin>>t;
while(t--){

    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
cin>>item;
int flag=0;
for(j=0;j<n;j++){
    if(a[j]==item){
        cout<<j<<" ";
        flag=1;
    }

}
if(flag==0){
     cout<<-1<<endl;
}

cout<<endl;
}

}
