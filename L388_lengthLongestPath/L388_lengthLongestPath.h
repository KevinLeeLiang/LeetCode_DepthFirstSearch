//
// Created by garen_lee on 2025/6/4.
/**
  ******************************************************************************
  * @file           : L388_lengthLongestPath.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/4
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L388_LENGTHLONGESTPATH_H
#define DEPTHFIRSTSEARCH_L388_LENGTHLONGESTPATH_H

#include "util.h"
class L388_lengthLongestPath : public LeetcodeDepthFirstSearch {
private:
    int lengthLongestPath(string input);
public:
    L388_lengthLongestPath() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L388_LENGTHLONGESTPATH_H
