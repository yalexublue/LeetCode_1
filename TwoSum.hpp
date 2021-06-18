//
//  TwoSum.hpp
//  LeetCodePractice
//
//  Created by Ye Xu on 6/9/21.
//

#ifndef TwoSum_hpp
#define TwoSum_hpp

#include <stdio.h>
#include <vector>
using namespace std;


int simple_sum(int a, int b);
vector<double> squareSolver (int a, int b, int c);

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

std::vector<int> twoSum(std::vector<int>& nums, int target);


#endif /* TwoSum_hpp */
