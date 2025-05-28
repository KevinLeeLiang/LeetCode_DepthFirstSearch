//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_TEST_FACTORY_H
#define LEETCODE_HASHTABLE_TEST_FACTORY_H
#include <memory>
#include "L79_exist/L79_exist.h"
#include "L94_inorderTraversal/L94_inorderTraversal.h"
#include "L98_isValidBST/L98_isValidBST.h"
#include "L99_recoverTree/L99_recoverTree.h"
#include "L100_isSameTree/L100_isSameTree.h"
#include "L101_isSymmetric/L101_isSymmetric.h"
#include "L104_maxDepth/L104_maxDepth.h"
#include "L110_isBalanced/L110_isBalanced.h"
#include "L111_minDepth/L111_minDepth.h"
#include "L112_hasPathSum/L112_hasPathSum.h"
#include "L113_pathSum/L113_pathSum.h"
#include "L114_flatten/L114_flatten.h"
#include "L116_connect/L116_connect.h"
#include "L117_connect/L117_connect.h"
#include "L124_maxPathSum/L124_maxPathSum.h"
#include "L129_sumNumbers/L129_sumNumbers.h"
#include "L130_solve/L130_solve.h"
//#include "L133_cloneGraph/L133_cloneGraph.h"
#include "L144_preorderTraversal/L144_preorderTraversal.h"
#include "L145_postorderTraversal/L145_postorderTraversal.h"
#include "L199_rightSideView/L199_rightSideView.h"
#include "L200_numIslands/L200_numIslands.h"
#include "L207_canFinish/L207_canFinish.h"
#include "L210_findOrder/L210_findOrder.h"
#include "L211_WordDictionary/L211_WordDictionary.h"
#include "L226_invertTree/L226_invertTree.h"
#include "L230_kthSmallest/L230_kthSmallest.h"
#include "L235_lowestCommonAncestor/L235_lowerCommonAncestor.h"
#include "L236_lowestCommonAncestor/L236_lowestCommonAncestor.h"
#include "L257_binaryTreePaths/L257_binaryTreePaths.h"
#include "L297_serializeAndDeserialize/L297_serializeAndDeserialize.h"
#include "L310_findMinHeightTrees/L310_findMinHeightTrees.h"
#include "L329_longestIncreasingPath/L329_longestIncreasingPath.h"
#include "L332_findItinerary/L332_findItinerary.h"
#include "L337_rob/L337_rob.h"
#include "L365_canMeasureWater/L365_canMeasureWater.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L79") {
            std::shared_ptr<L79_exist> tmp= std::make_shared<L79_exist>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L94") {
            std::shared_ptr<L94_inorderTraversal> tmp= std::make_shared<L94_inorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L98") {
            std::shared_ptr<L98_isValidBST> tmp= std::make_shared<L98_isValidBST>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L99") {
            std::shared_ptr<L99_recoverTree> tmp= std::make_shared<L99_recoverTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L100") {
            std::shared_ptr<L100_isSameTree> tmp= std::make_shared<L100_isSameTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L101") {
            std::shared_ptr<L101_isSymmetric> tmp= std::make_shared<L101_isSymmetric>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L104") {
            std::shared_ptr<L104_maxDepth> tmp= std::make_shared<L104_maxDepth>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L110") {
            std::shared_ptr<L110_isBalanced> tmp= std::make_shared<L110_isBalanced>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L111") {
            std::shared_ptr<L111_minDepth> tmp= std::make_shared<L111_minDepth>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L112") {
            std::shared_ptr<L112_hasPathSum> tmp= std::make_shared<L112_hasPathSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L113") {
            std::shared_ptr<L113_pathSum> tmp= std::make_shared<L113_pathSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L114") {
            std::shared_ptr<L114_flatten> tmp= std::make_shared<L114_flatten>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L116") {
            std::shared_ptr<L116_connect> tmp= std::make_shared<L116_connect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L117") {
            std::shared_ptr<L117_connect> tmp= std::make_shared<L117_connect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L124") {
            std::shared_ptr<L124_maxPathSum> tmp= std::make_shared<L124_maxPathSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L129") {
            std::shared_ptr<L129_sumNumbers> tmp= std::make_shared<L129_sumNumbers>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L130") {
            std::shared_ptr<L130_solve> tmp= std::make_shared<L130_solve>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
//        } else if (title == "L133") {
//            std::shared_ptr<L133_cloneGraph> tmp= std::make_shared<L133_cloneGraph>();
//            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L144") {
            std::shared_ptr<L144_preorderTraversal> tmp= std::make_shared<L144_preorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L145") {
            std::shared_ptr<L145_postorderTraversal> tmp= std::make_shared<L145_postorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L199") {
            std::shared_ptr<L199_rightSideView> tmp= std::make_shared<L199_rightSideView>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L200") {
            std::shared_ptr<L200_numIslands> tmp= std::make_shared<L200_numIslands>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L207") {
            std::shared_ptr<L207_canFinish> tmp= std::make_shared<L207_canFinish>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L210") {
            std::shared_ptr<L210_findOrder> tmp= std::make_shared<L210_findOrder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L211") {
            std::shared_ptr<L211_WordDictionary> tmp= std::make_shared<L211_WordDictionary>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L226") {
            std::shared_ptr<L226_invertTree> tmp= std::make_shared<L226_invertTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L230") {
            std::shared_ptr<L230_kthSmallest> tmp= std::make_shared<L230_kthSmallest>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L235") {
            std::shared_ptr<L235_lowerCommonAncestor> tmp= std::make_shared<L235_lowerCommonAncestor>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L236") {
            std::shared_ptr<L236_lowestCommonAncestor> tmp= std::make_shared<L236_lowestCommonAncestor>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L257") {
            std::shared_ptr<L257_binaryTreePaths> tmp= std::make_shared<L257_binaryTreePaths>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L297") {
            std::shared_ptr<L297_serializeAndDeserialize> tmp= std::make_shared<L297_serializeAndDeserialize>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L310") {
            std::shared_ptr<L310_findMinHeightTrees> tmp= std::make_shared<L310_findMinHeightTrees>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L329") {
            std::shared_ptr<L329_longestIncreasingPath> tmp= std::make_shared<L329_longestIncreasingPath>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L332") {
            std::shared_ptr<L332_findItinerary> tmp= std::make_shared<L332_findItinerary>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L337") {
            std::shared_ptr<L337_rob> tmp= std::make_shared<L337_rob>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L365") {
            std::shared_ptr<L365_canMeasureWater> tmp= std::make_shared<L365_canMeasureWater>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeDepthFirstSearch> solution_;
};


#endif //LEETCODE_HASHTABLE_TEST_FACTORY_H
