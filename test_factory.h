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
        } else {
            cout << "no solution" << endl;
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
