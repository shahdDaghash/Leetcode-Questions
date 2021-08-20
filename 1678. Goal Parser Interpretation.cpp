class Solution {
public:
    string interpret(string command) {
        string res = "";
        int n = command.size();
        for(int i=0; i<n; i++){
            if(command[i]=='G' || command[i]=='a' || command[i]=='l') res+=command[i];
            else if(i<n-1 && command[i]=='(' && command[i+1]==')'){
                res+='o';
                i++;
            }
        }
        return res;
    }
};
