// merge 2 sort cn

#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{
    int i= 0, j = 0;
    while(i<n && j<m)
    {
        if(arr1[i] > arr2[j])
        {
            arr1[i] = arr2[j];
            j++;
        }
        else
        {
            arr1[i] = arr1[i];
            i++;
        }
    }

    while(i < n)
    {
        arr1[i] = arr2[j];
        j++;
    }

}

void print(int arr1[], int p)
{
    for(int l = 0; l < p; l++)
    {
        cout<<arr1[l]<<" ";
    }
}

int main()
{
    int arr1[6] = {1, 2, 3};
    int arr2[3] = {2, 5, 6};

    merge(arr1, 6, arr2, 3);

    print(arr1, 6);
}

/*        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
    };
*/

/*
 int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--; k--;
            }
            else{
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
    }
*/

//add 2 array 
/*
vector<int> reverse(vector<int> v)
{
	int s = 0;
	int e = v.size() - 1;

	while(s < e)
	{
		swap(v[s++], v[e--]);
	}
	return v;
}

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	vector<int> ans;
	int carry = 0;

	while(i>=0  && j>=0)
	{
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1 + val2 + carry;

		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}

	while(i >= 0)
	{
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}

	while(j >= 0)
	{
		int sum = a[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}

	while(carry != 0)
	{
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}

	return reverse (ans);
}
*/