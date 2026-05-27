#include<iostream>
#include<stack>
#include<string>

using namespace std;

string fun(string str)
{
    stack<char> st;
    string res;

    for(int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    while(!st.empty())
    {
        char ch = st.top();
        st.pop();

        res.push_back(ch);
    }

    return res;
}

int main()
{
    string str = "Yogesh";
    cout << "Original String: " << str << endl;

    cout << "Reversed String: " << fun(str) << endl;

    return 0;
}


// ==============================================================
//                           OUTPUT
// ==============================================================
//                     Original String: Yogesh
//                     Reversed String: hsegoY
// ================================================================
