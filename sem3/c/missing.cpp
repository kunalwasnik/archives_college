#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
int tc,n;
long long int a[10000000] , b[10000000];
string a , b;
cin>>tc;

while(tc--){
cin>>n;

for(int i=0;i<n;i++){
    b[i] = i+1;
}

for(int i=0;i<n-1;i++){
   cin>>a[i];
}

for(int j =0;j<n-1;j++){
    for(int i=0;i<n;i++){
            if(a[j] == b[i]){
                b[i] = -1;
            }

    }

}

for(int i=0;i<n;i++){
    if(b[i]!=-1)
        cout<<b[i];
}





}


}
