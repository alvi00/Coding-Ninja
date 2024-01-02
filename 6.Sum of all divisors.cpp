int sumOfAllDivisors(int n){
    int answer=0;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                answer=answer+j;
            }
        }
    }	
    return answer;
}
