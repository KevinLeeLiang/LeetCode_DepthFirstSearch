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
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L79") {
            std::shared_ptr<L79_exist> tmp= std::make_shared<L79_exist>();
            solution_ = std::dynamic_pointer_cast<LeetcodeDepthFirstSearch>(tmp);
        } else if (title == "L94") {
            std::shared_ptr<L94_inorderTraversal> tmp= std::make_shared<L94_inorderTraversal>();
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
