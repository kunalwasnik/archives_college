#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int k;
    cout<<"enter number to find"<<endl;
    cin>>k;
    num(a,n,k);
  }
}

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function given below*/
int num(int a[], int n, int k)
{
    int i,x,y,z,j,m,l,flag,counte,nume;

flag=0;
for(j=0;j<n;j++){
      m=a[j];
      nume=m;
      counte=0;

      while(nume!=0){
        nume=nume/10;
        counte=counte+1;
      }
     // cout<<"COUNTER :: "<<counte<<endl;

    for(l=0;l<counte;l++){
    x=m%10;
    m=m/10;
    if(x==k){
        flag=flag+1;
    }

}
}
if(flag!=0){
    cout<<flag<<endl;
    }
    else{
        cout<<0<<endl;
    }

}
