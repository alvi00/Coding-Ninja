void selectionSort(vector<int>&arr) {
    
   int n = arr.size();
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
              mini=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }

}
