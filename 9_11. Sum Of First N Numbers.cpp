long long sumFirstN(long long n) {
   
   if(n==0){
       return 0;
   }

   return n+sumFirstN(n-1);
}
