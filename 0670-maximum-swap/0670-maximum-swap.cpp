class Solution {
public:
    int maximumSwap(int num) {
        string str=to_string(num);
        int n=str.length();
        vector<int> idx(n);

        if(str.length()==1){
            return num;
        }

        idx[n-1]=n-1;
        for(int i=n-2; i>=0; i--){
            if(str[i]-'0'>str[idx[i+1]]-'0'){
                idx[i]=i;
            }
            else{
                idx[i]=idx[i+1];
            }
        }
        for(int i=0; i<n; i++){
            if(str[i]-'0'<str[idx[i]]-'0'){
                swap(str[i], str[idx[i]]);
                return stoi(str);
            }
        }
        return stoi(str);
    }
};