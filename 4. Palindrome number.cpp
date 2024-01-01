bool palindrome(int n)
{
    int original=n;
    int answer=0;
    while(n!=0){
        int lastdigit=n%10;
        answer=answer*10+lastdigit;
        n=n/10;
    }
    if(answer==original){
        return true;
    }
    else{
        return false;
    }
}
