//
//  TwoSum.cpp
//  LeetCodePractice
//
//  Created by Ye Xu on 6/9/21.
//

#include "TwoSum.hpp"
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

int simple_sum (int a, int b){
    return a + b;
}

std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::vector<int> temp;
    int i = 0;
    while (i < (nums.size() - 1)){
        for (int j = i + 1; j < nums.size(); j+=1){
            if (nums[i] + nums[j] == target){
                temp.push_back(i);
                temp.push_back(j);
            }
        }
        i += 1;
    }
    
    return temp;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* output = new ListNode();
    ListNode* itr = output;
    bool isCap = false;
    while (l1 != nullptr && l2 != nullptr){
        
        int sum = 0;
        sum = l1->val + l2->val;
        if (isCap){
            sum += 1;
            isCap = false;
        }
        if (sum >= 10){
            sum = sum % 10;
            isCap = true;
        }
        itr->val = sum;
        
        if (l1->next != nullptr || l2->next != nullptr || isCap)
            itr->next = new ListNode();
        l1 = l1->next;
        l2 = l2->next;
        itr = itr->next;
    }
    while (l1 != nullptr){
        int sum = 0;
        
        sum = l1->val;
        if (isCap){
            sum += 1;
            isCap = false;
        }
        if (sum >= 10){
            sum = sum % 10;
            isCap = true;
        }
        itr->val = sum;
        
        if (l1->next != nullptr || isCap)
            itr->next = new ListNode();
        l1 = l1->next;
        itr = itr->next;
    }
    while (l2 != nullptr){
        int sum = 0;
        
        sum = l2->val;
        if (isCap){
            sum += 1;
            isCap = false;
        }
        if (sum >= 10){
            sum = sum % 10;
            isCap = true;
        }
        itr->val = sum;
        if (l2->next != nullptr || isCap)
            itr->next = new ListNode();
        
        l2 = l2->next;
        itr = itr->next;
    }
    if (isCap){
        itr->val += 1;
    }
    
    return output;
}


vector<double> squareSolver (int a, int b, int c){
    vector<double> temp;
    if (a == 0 && b == 0 && c == 0){
        cout << "no viable solution. \n";
    }
    else if (a == 0){
        double solution = 0;
        solution = -1 * c / b;
        temp.push_back(solution);
    }
    else if ((b * b - 4 * a * c) < 0){
        cout << "no real solution. \n";
    }
    else {
        double solution1 = 0; double solution2 = 0;
        solution1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        solution2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        temp.push_back(solution1);
        temp.push_back(solution2);
    }
    return temp;
}
