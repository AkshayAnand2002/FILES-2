https://www.codingninjas.com/codestudio/problems/subarrays-with-zero-sum_3161876?leftPanelTab=0
#include <bits/stdc++.h> 
int countSubarrays(int n, vector<int> &arr){
    int count=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    int localsum=0;
    for(int i=0;i<n;i++){
        localsum+=arr[i];
        if(mp.find(localsum) != mp.end()){
            count+=mp[localsum];
        }
        mp[localsum]++;
    }
    return count;
}
/*
Hashing Approach
The basic idea is to store the sum of the array while traversing the array. We store the sum of the elements traveled. Whenever we find a sum already present in a hashmap, we increase our count by the value stored in the hashmap. 
 

For example: 

If we have a subarray starting from index 0 and ending at index 2 has a sum of 10.

If there is another subarray starting from index 0 and ending at index 5 has a sum of 10.

Then the sum of elements from index 3 to index 5 should be 0.

In this way, we can find the number of subarrays having sum 0 by using the hashmap. For each sum found, we add it to our hashmap. 

 

Here is the algorithm :

 

Create a variable (say, ‘COUNT’) to store the count of subarrays with 0 sum.
Create a hashmap (say, ‘MAP’) to store the sum count and initialize ‘MAP[0]’ to 1.
Create a variable (say, ‘localSum’) to store the sum of elements traveled so far and initialize it with 0.
Run a loop from 1 to ‘N’ (say, iterator ‘i’).
Add ‘ARR[i]’ to ‘localSum’.
Check if ‘localSum’ is present in ‘MAP’.
Add ‘MAP[localSum]’ to ‘COUNT’.
Add ‘localSum’ to ‘MAP’.
Return ‘COUNT’.
Time Complexity
O(N), where ‘N’ is the size of the array.

 
/*
We run a loop to traverse all the array elements once, which takes O(N) time. Therefore, the overall time complexity will be O(N).

Space Complexity
O(N), where ‘N’ is the size of the array.

 

We use hashmap to store the sum of elements traveled which takes O(N) space. Therefore, the overall space complexity will be O(N).
---------------------------
*
    Time complexity: O(N)
    Space complexity: O(N)
    
    Where 'N' is the size of the array.
*/
/*
#include <unordered_map>

int countSubarrays(int n, vector<int> &arr){
    
    // To store the count.
    int count = 0;
    
    // To store the count sum.
    unordered_map<int, int> map;
    map[0] = 1;
    
    // To store the sum while traversing.
    int localSum = 0;
    
    // Find all subarrays.
    for(int i = 0; i < n; ++i) {
        
        // Update sum.
        localSum += arr[i];
        
        // Check if sum is already present.
        if(map.find(localSum) != map.end()) {
            
            // Update count.
            count += map[localSum];
        }
        
        // Update map.
        map[localSum]++;
    }
    
    return count;
}
*/
