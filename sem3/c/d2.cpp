#include<iostream>
using namespace std;
int main(){
int t,z,k,j,x;
  cin>>t;
  while(t--)
  {
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for(int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    z=n/2; //2
    x=n-z; //3

    int dil[z];
    int preet[x];
    for(j=0;j<z;j++){
            dil[j]=a[j];
    }


    for(k=0;k<x;k++){
            preet[k]=a[k+z];
    }



  for(j=0;j<z;j++){
           cout<<dil[j]<<endl;
    }
      for(k=0;k<x;k++){
             cout<<preet[k];
    }



}
}
