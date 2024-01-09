#include <bits/stdc++.h>
void insertionSort(int arr[], int n)
{
   for(int i=0;i<n;i++){
       int j=i;
       while(j>0&&arr[j-1]>arr[j]){
           int temp=arr[j-1];
           arr[j-1]=arr[j];
           arr[j]=temp;
           j--;
       }
   }
}
