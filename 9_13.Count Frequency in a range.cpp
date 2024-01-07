vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    int hash[x]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        result.push_back(hash[i + 1]);
    }
    return result;

}
