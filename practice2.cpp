//
//  practice2.cpp
//  LeetCodePractice
//
//  Created by Ye Xu on 6/17/21.
//

#include "practice2.hpp"
#include <vector>
#include <math.h>
using namespace std;

int reverse(int x) {
    bool isNegative = false;
    long out = 0;
    if (x < 0)
        isNegative = true;
    else
        isNegative = false;

    vector<int> temp;
    if (!isNegative){
        while (x > 9){
            temp.push_back(x % 10);
            x /= 10;
        }
    }
    else {
        while (x < -9){
            temp.push_back(x % 10);
            x /= 10;
        }
    }
    temp.push_back(x);
    
    for (int i = 0; i < temp.size(); i++){
        out += (temp[i] * pow(10.0, temp.size() - 1 - i));
    }
    
    if (out < -1 * pow(2.0, 31.0) || out > pow(2.0, 31.0) - 1)
        return 0;
    else
        return out;
}
