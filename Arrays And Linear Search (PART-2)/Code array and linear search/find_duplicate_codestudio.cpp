// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1


int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        ans = ans^arr[i];
    }
    for(int i = 1; i < arr.size(); i++)
    {
        ans = ans^i;
    }
    return ans;
	
}