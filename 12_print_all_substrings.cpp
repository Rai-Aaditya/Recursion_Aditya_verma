#include <bits/stdc++.h>
using namespace std;
void substring(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    string op1=op;
    string op2=op;
    op2=op2+ip[0];
    ip.erase(ip.begin()+0);
    substring(ip,op1);
    substring(ip,op2);
}
int main()
{
    string s;
    cin>>s;
    substring(s, "");
    return 0;
}