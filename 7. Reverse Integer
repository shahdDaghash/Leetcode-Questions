class Solution {
public:
    int reverse(int x) {
        if(x >= pow(2,31)-1 || x < -1*pow(2,31)) return 0;
        
        string rev=to_string(x);
        if (rev[0]=='-')
            ::reverse(rev.begin()+1, rev.end());
        else
            ::reverse(rev.begin(), rev.end());
        rev.erase(0, rev.find_first_not_of('0'));
        long long num = atoi(rev.c_str());
        
        if(num >= pow(2,31)-1 || num < -1*pow(2,31)) return 0;
        return (int)num;
    }
};
