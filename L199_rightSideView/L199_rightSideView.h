//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L199_rightSideView.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L199_RIGHTSIDEVIEW_H
#define DEPTHFIRSTSEARCH_L199_RIGHTSIDEVIEW_H

#include "util.h"
class L199_rightSideView : public LeetcodeDepthFirstSearch {
private:
    vector<int> rightSideView(TreeNode *root);
public:
    L199_rightSideView() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L199_RIGHTSIDEVIEW_H
