#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeroes(vector<int>& nums) 
{
        int nonzero = 0;
        for(int j = 0; j<nums.size(); j++)
        {
            if(nums[j] != 0)
            {
                swap(nums[j], nums[nonzero]);
                nonzero++;
            }
        }
        return nums;
}

void print(vector<int> v)
{

    for(int i = 0; i<v.size(); i++)
    {
       cout<<v[i]<<" ";
    } 

    cout<<endl;

}
     

int main()
{
    vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(12);
    v.push_back(8);
    v.push_back(0);

    vector<int> ans = move(v);
    print(ans);

    return 0;
}