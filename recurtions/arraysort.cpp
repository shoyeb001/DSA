// sort an array using recursion

#include <iostream>
#include <vector>
using namespace std;

void inserting(vector<int>&v, int temp)
{
    if (v.size() == 0 || v[v.size()-1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    inserting(v, temp);
    v.push_back(val);
}

void sorting(vector<int>&v)
{
    if (v.size() <= 1)
    {
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    sorting(v);
    inserting(v, temp);
}

int main()
{
    vector<int>v = {5, 2, 3, 4, 1, 8};
    sorting(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
