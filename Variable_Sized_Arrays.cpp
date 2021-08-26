#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
   int n,q;
   cin>>n>>q;
   vector<int> a[n];
   for(int i=0;i<n;i++)
   {
       int l;
       cin>>l;
       int o;
       for(int j=0;j<l;j++)
       {
           cin >> o;
           a[i].push_back(o);
        
       }
   }
   for(int i=0;i<q;i++)
   {
       int o,p;
       cin>>o>>p;
       cout<<a[o][p]<<'\n';
   }
}
