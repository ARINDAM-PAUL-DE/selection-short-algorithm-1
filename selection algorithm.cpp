#include<iostream>
using namespace std;

{
for(int i=0;i<n-1;i++){
int minIndex=i;
for(int j=j+1;j<n;j++){
if(arr[j]<arr[minIndex])
minindex=j;
}
swap(arr[minIndex],arr[i]);
}
}
