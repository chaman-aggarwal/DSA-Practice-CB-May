#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int freq;
    node* child[26];
    node()
    {
        freq = 0;
        for(int i=0; i<26; i++)
        {
            child[i] = NULL;
        }
    }
};

void insert(node* root, string s, int index)
{
    if(index == s.size())
    {
        return;
    }
    if(root->child[s[index]-'a'] == NULL)
    {
        root->child[s[index]-'a'] = new node();
    }
    root->child[s[index]-'a']->freq++;
    
    insert(root->child[s[index]-'a'], s, index+1);
}

int search(node* root, string s, int index)
{
    if(root->child[s[index]-'a']->freq == 1)
    {
        return index;
    }
    return search(root->child[s[index]-'a'], s, index+1);
}

int main() {
    vector<string> strs;
    strs.push_back("duck"); // du
    strs.push_back("lion"); // l
    strs.push_back("dog"); // dog
    strs.push_back("dove"); // dov
    int n = strs.size();

    node* root = new node();
    for(int i=0; i<n; i++)
    {
        insert(root, strs[i], 0);
    }

    vector<string> ans;
    for(int i=0; i<n; i++)
    {
        // dove --> 2
        int idx = search(root, strs[i], 0);
        ans.push_back(strs[i].substr(0, idx+1));
    }

    for(string i:ans)
    {
        cout<<i<<", ";
    }

    return 0;
}
