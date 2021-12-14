class Solution {
public:
    
    
    int trib(int n){
        int a = 0, b = 1, c = 1, d;
        if(n<=1){
            return n;
        }
        for(int i=2; i<n; i++){
            d = c + b + a;
            a = b;
            b = c;
            c = d;
        }
        
        return c;
    }
    
    
    int tribonacci(int n) {
        return trib(n);
    }
};
