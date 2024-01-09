void bubbleSort(int arr[], int n) 
{
    for(int i=n-1;i>=1;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}
