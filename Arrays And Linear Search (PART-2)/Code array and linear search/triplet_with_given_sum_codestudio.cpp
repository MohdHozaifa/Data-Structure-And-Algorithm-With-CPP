https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1




#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
    
    for(int i = 0; i<arr.size(); i++)
    {
        for(int j = i + 1; j <arr.size(); j++)
        {
            for(int k = i+2; k<arr.size(); k++)
            {
                if(arr[i] + arr[j] + arr[k] == K)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                    return ans;
                }
               
            }
        }
    }
    
}