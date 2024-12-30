// 2nd optimised solution of the problem.
// Intersection of two sorted arrays using vectors
//where address of two array pass on the function and size of the arrays is also passed.
vector<int> ans;
while(i<n && j<m){
    if(arr1[i] == arr2[j]):
        ans.push_back(arr1[i]):
        i++,j++;
    else if(arr1[i] < arr2[j]):
        i++;
    else
        j++;
}
return ans;


