class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int l=tokens.size();
        int A[l];
        int g=0;
        for(int i=0;i<l;i++){
            if(tokens[i]=="+"){
                int k=A[g-2]+A[g-1];
                A[g-2]=k;
                g--;
            }
            else if(tokens[i]=="-"){
                int k=A[g-2]-A[g-1];
                A[g-2]=k;
                g--;
            }
            else if(tokens[i]=="/"){
                int k=A[g-2]/A[g-1];
                A[g-2]=k;
                g--;
            }
            else if(tokens[i]=="*"){
                int k=A[g-2]*A[g-1];
                A[g-2]=k;
                g--;
            }
            else {
                int p=stoi(tokens[i]);
                A[g++]=p;
            }
        }
        return A[0];
    }
};
