bool checkArmstrong(int n){
	int count=0;
    int original=n;
    int count_check=n;
    while (count_check!=0)
    {
        count_check=count_check/10;
        count++;
    }
    int answer=0;
    while (n!=0)
    {
        int lastdigit=n%10;
        answer=answer+pow(lastdigit,count);
        n=n/10;
    }
    
    return (answer==original);
}
