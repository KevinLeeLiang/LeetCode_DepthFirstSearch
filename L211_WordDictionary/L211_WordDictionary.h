//
// Created by garen_lee on 2025/4/23.
/**
  ******************************************************************************
  * @file           : L211_WordDictionary.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/23
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L211_WORDDICTIONARY_H
#define DEPTHFIRSTSEARCH_L211_WORDDICTIONARY_H

#include "util.h"
struct TrieNode {
    vector<TrieNode *> children;
    bool isEnd;
    TrieNode() : children(26), isEnd(false) {}
};

namespace L211 {
    class WordDictionary {
    public:
        WordDictionary();

        void addWord(string word);

        bool search(string word);

        void insert(TrieNode *root, const string &word);

    private:
        TrieNode *trie_;

        bool dfs(const string &word, int index, TrieNode *node);
    };
}

class L211_WordDictionary : public LeetcodeDepthFirstSearch{
public:
    L211_WordDictionary() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L211_WORDDICTIONARY_H
