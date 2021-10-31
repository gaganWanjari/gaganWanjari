#include<bits/stdc++.h>
using namespace std;
string countAndSay(int n)
{
    if(n==1)    return "1";
    if(n==2)    return "11";
    string str = "11";
    for(int i = 3; i<=n ; i++)
    {
        str += '$';
        int len = str.length();                                             
        int cnt = 1;// Matching character
        string tmp = ""; //i'th term in series
        for(int j = 1; j<len ; j++)
        {
            if(str[j] != str[j-1])
            {
                tmp += cnt + '0';// count of str[j-1] to tmp
                tmp += str[j-1]; // append str[j-1]
                cnt = 1;//Reset count
            }
            else cnt++;//If matches increment matching char
        }
        str = tmp;//update str
    }
    return str;

}
int main()
{
    int n = 3;
    cout<<countAndSay(n);
    return 0;

}