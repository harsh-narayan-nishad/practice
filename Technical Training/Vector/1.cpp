#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Question (i)
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    // Question (ii)
    auto it = v1.begin();
    v1.insert(it + 3, 35);

    // Printing values 

    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<"  ";
    }

    cout<<endl;

// How does it working ?
    for(int i: v1)
    {
        cout<<i<<"  ";
    }

    return 0;
    

}