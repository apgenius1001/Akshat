/******************************************************************************

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2)
{
    std::vector<int> ab;
    
    ab.reserve(nums1.size() + nums2.size()); //allocate memory
    ab.insert(ab.end(), nums1.begin(), nums1.end());
    ab.insert(ab.end(), nums2.begin(), nums2.end());
    
    std::sort(ab.begin(), ab.end());
    
    for(auto it : ab) {
        std::cout << it << "  ";
    }
    
    int len = ab.size();
    double median = 0.0;
    
    if(len % 2 == 0) {
        median = (ab[len/2] + ab[len/2 - 1])/2.0f;
    } else {
        median = ab[len/2];
    }
    
    cout << endl<< len << "   "<<ab[len/2 - 1] << endl;
    cout << ab[len/2] << endl;
    return median;    
}


int main()
{
    std::vector<int> a1 = {1,2};
    std::vector<int> a2 = {3,4};
    
    auto median = findMedianSortedArrays(a1, a2);
     std::cout << endl << median << endl;

    return 0;
}

