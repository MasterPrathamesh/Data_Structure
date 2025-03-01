// Problem statement
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
// Note :
// A duplicate number is always present in the given array.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <=  T  <= 10
// 2 <=  N <= 10 ^ 5
// 1 <=  ARR[i]  <= N - 1

// Where 'T' denotes the number of test cases, 'N' denotes the number of elements in the array, and 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.

// Time limit: 1 sec
// Sample Input 1:
// 2
// 5
// 4 2 1 3 1
// 7
// 6 3 1 5 4 3 2
// Sample Output 1:
// 1
// 3
// Explanation of sample input 1:
// For the first test case, 
// The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

// For the second test case,
// The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.

// int findDuplicate(vector<int> &arr) 
// {
//     int ans = 0 ; 
    
//     // doing XOR for all the array elements
//     for(int i=0; i < arr.size(); i++){
//         ans = ans^arr[i];
//     }

//     //XOR [1, n- 1]
//     for(int i=1 ; i < arr.size(); i++){
//         ans = ans^i;
//     }
// 	return ans; 
// }




