bool isPrime(int n)
{
	int answer=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			answer++;
		}
	}
	 if(n==1){
        return false;
    }
	else if(answer>0){
		return false;
	}else{
		return true;
	}
}

//here the time complexity is O(n)

bool isPrime(int n)
{
	int answer=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			answer++;
		}
	}
	 if(n==1){
        return false;
    }
	else if(answer>0){
		return false;
	}else{
		return true;
	}
}
