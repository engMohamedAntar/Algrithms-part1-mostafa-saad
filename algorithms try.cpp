#include <iostream>
#include <cassert>
#include <algorithm>
#include<vector>
using namespace std;

void insertion_sort(vector<int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        int j=i-1;
        int temp=v[i];
        while(v[j]>temp&&j>=0)
        {
           v[j+1]=v[j]; 
           j--;
        }
            
        v[j+1]=temp;
    }
}
int main() 
{
    vector<int> v {20,10,30,40,15};
    insertion_sort(v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<"buy\n";
	return 0;
}
