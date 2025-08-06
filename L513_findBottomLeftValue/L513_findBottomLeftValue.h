//
// Created by garen_lee on 2025/8/6.
/**
  ******************************************************************************
  * @file           : L513_findBottomLeftValue.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/6
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L513_FINDBOTTOMLEFTVALUE_H
#define L104_MAXDEPTH_CPP_L513_FINDBOTTOMLEFTVALUE_H

#include "util.h"
class L513_findBottomLeftValue : public LeetcodeDepthFirstSearch {
private:
    int findBottomLeftValue(TreeNode* root);
public:
    L513_findBottomLeftValue() {}
    void test();
};


#endif //L104_MAXDEPTH_CPP_L513_FINDBOTTOMLEFTVALUE_H
