class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                st.push(st.top()*2);
            }
            else if(operations[i]=="+")
            {
                stack<int> temp = st;
                int a=temp.top();
                temp.pop();
                int b =temp.top();
                
                st.push(a+b);
            }
            else
            {
                st.push(stoi(operations[i]));
            }
        }
        int total=0;
        for(int i=0;st.size();i++)
        {
            int a=st.top();
            st.pop();
            total+=a;
        }
        return total;
        
    }
};