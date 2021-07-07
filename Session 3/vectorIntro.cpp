#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }

    for(int i:v)
    {
        cout<<i<<", ";
    }

    vector<int> x(10, 2); // vector has 10 elements of value 2
    vector<int> y{5, 6, 7, 8, 9};

    // for each loop
    for(int i:x)
    {
        cout<<i<<", ";
    }
    cout<<endl;

    for(int i=0; i<y.size(); i++)
    {
        cout<<y[i]<<", ";
    }

    return 0;
}
