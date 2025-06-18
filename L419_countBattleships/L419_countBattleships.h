//
// Created by garen_lee on 2025/6/18.
/**
  ******************************************************************************
  * @file           : L419_countBattleships.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/18
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L419_COUNTBATTLESHIPS_H
#define L104_MAXDEPTH_CPP_L419_COUNTBATTLESHIPS_H

#include "util.h"
class L419_countBattleships : public LeetcodeDepthFirstSearch {
private:
    int countBattleships(vector<vector<char>>& board);
public:
    L419_countBattleships() {}
    void test();
};


#endif //L104_MAXDEPTH_CPP_L419_COUNTBATTLESHIPS_H
