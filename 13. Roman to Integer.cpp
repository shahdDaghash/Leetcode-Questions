class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        if(s[0]=='I')n++;
        else if(s[0]=='V') n+=5;
        else if(s[0]=='X') n+=10;
        else if(s[0]=='L') n+=50;
        else if(s[0]=='C') n+=100;
        else if(s[0]=='D') n+=500;
        else if(s[0]=='M') n+=1000;

        for(int i=1; i<s.size(); i++){
            if(s[i]=='I') n++;
            else if(s[i]=='V') {
                n+=5;
                if(s[i-1]=='I') n-=2;
            }
            else if(s[i]=='X') {
                n+=10;
                if(s[i-1]=='I') n-=2;
            }
            else if(s[i]=='L') {
                n+=50;
                if(s[i-1]=='X') n-=20;
            }
            else if(s[i]=='C') {
                n+=100;
                if(s[i-1]=='X') n-=20;
            }
            else if(s[i]=='D') {
                n+=500;
                if(s[i-1]=='C') n-=200;
            }
            else if(s[i]=='M') {
                n+=1000;
                if(s[i-1]=='C') n-=200;
            }
        }
    return n;
    }
};
