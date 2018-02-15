#include <iostream>

using namespace std;

int main()
{
     int i,n=7,j,buf,br=0;
   int a[7]={-10,-9,8,0,6,0,3};
   for(i=0;i<7 ;i++)
   {
       if(a[i]==0)
       {
           br++;
       }
   }
   for(i=0;i< n;i++)
   for(j=n-1;j >i;j--)
      if(a[j-1] >a[j])
       {
          buf=a[j-1];
          a[j-1]=a[j];
          a[j]=buf;
       }
    cout<<br;


 return 0;
}
