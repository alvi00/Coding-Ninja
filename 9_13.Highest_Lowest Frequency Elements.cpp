vector<int> getFrequencies(vector<int>& v) {
    map<int,int>alvi;
    int n=v.size();
    for (int i = 0; i < n; i++) {
        alvi[v[i]]++;
    }

    int max=0;
    int min=INT32_MAX;

    vector<int>max_ele;
    vector<int>min_ele;
    for(map<int,int>::iterator it=alvi.begin();it!=alvi.end();it++){
        if((*it).second>max){
            max_ele.clear();
            max=(*it).second;
            max_ele.push_back((*it).first);
        }
            if((*it).second<min){
                min_ele.clear();
            min=(*it).second;
            min_ele.push_back((*it).first);
        }

    }

    int max_result=*min_element(max_ele.begin(),max_ele.end());
    
    int min_result=*max_element(min_ele.begin(),min_ele.end());
    return {max_result, min_result};
}
