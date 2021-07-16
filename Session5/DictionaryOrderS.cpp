https://hack.codingblocks.com/app/contests/2340/1063/problem

#include <iostream>
#include <set>
using namespace std;

void permutation(string inp, int i, set<string>&s)
{
    // base case
    if(inp[i]=='\0')
    {
        s.insert(inp);
        return;
    }

    for(int j=i; inp[j]!='\0'; j++)
    {
        swap(inp[i], inp[j]);
        permutation(inp, i+1, s);
        swap(inp[i], inp[j]);
    }

}

int main() {
    string inp;
    cin>>inp;
    set<string> s;
    permutation(inp, 0, s);

    for(auto x:s)
    {
        if(inp > x)
        {
            cout<<x<<endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}
