#include<iostream>
using namespace std;
int main(){
int i,j,t,n,total,k,count;
cin>>t;
while(t--){

         cout<<"enter size of array"<<endl;
        cin>>n;
        int a[n];
        int b[n];
        cout<<"enter elements of array"<<endl;
        for( i = 0; i < n; i++)
    {
      cin>>a[i];
    }

int count = 0;
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++) {
      if (a[i] == a[j]) {
        count++;
      }
    }

    if (count > n/2) {
      cout<< a[i];
      break;
    }
    count=0;


  }

  if(count==0){
                cout<< -1;

      }



}
}
