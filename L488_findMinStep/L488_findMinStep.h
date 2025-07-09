//
// Created by garen_lee on 2025/7/9.
/**
  ******************************************************************************
  * @file           : L488_findMinStep.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/9
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L488_FINDMINSTEP_H
#define L104_MAXDEPTH_CPP_L488_FINDMINSTEP_H

#include "util.h"
class L488_findMinStep : public LeetcodeDepthFirstSearch {
    struct State {
        string board;
        string hand;
        int step;
        State(const string & board, const string & hand, int step) {
            this->board = board;
            this->hand = hand;
            this->step = step;
        }
    };
public:
    string clean(const string & s);
    L488_findMinStep() {}
    void test();
    int findMinStep(string board, string hand);
};


#endif //L104_MAXDEPTH_CPP_L488_FINDMINSTEP_H
