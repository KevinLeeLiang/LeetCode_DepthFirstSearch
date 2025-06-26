//
// Created by garen_lee on 2025/6/25.
/**
  ******************************************************************************
  * @file           : L430_flatten.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/25
  ******************************************************************************
  */
//

#include "L430_flatten.h"

L430::Node *L430_flatten::flatten(L430::Node *head) {
    function<L430::Node*(L430::Node*)> dfs = [&](L430::Node* node) {
        L430::Node* cur = node;
        // 记录链表的最后一个节点
        L430::Node* last = nullptr;

        while (cur) {
        L430::Node* next = cur->next;
            //  如果有子节点，那么首先处理子节点
            if (cur->child) {
                L430::Node* child_last = dfs(cur->child);

                next = cur->next;
                //  将 node 与 child 相连
                cur->next = cur->child;
                cur->child->prev = cur;

                //  如果 next 不为空，就将 last 与 next 相连
                if (next) {
                    child_last->next = next;
                    next->prev = child_last;
                }

                // 将 child 置为空
                cur->child = nullptr;
                last = child_last;
            }
            else {
                last = cur;
            }
            cur = next;
        }
        return last;
    };

    dfs(head);
    return head;
}

