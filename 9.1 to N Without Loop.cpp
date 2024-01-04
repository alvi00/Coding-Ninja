vector<int> printNos(int x) {
   
   if (x == 0) {
        return {};  
    }

    vector<int> result = printNos(x - 1);  
    result.push_back(x); 
    return result;

}
