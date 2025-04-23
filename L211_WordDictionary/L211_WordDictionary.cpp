//
// Created by garen_lee on 2025/4/23.
/**
  ******************************************************************************
  * @file           : L211_WordDictionary.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/23
  ******************************************************************************
  */
//

#include "L211_WordDictionary.h"

using namespace L211;

WordDictionary::WordDictionary() {
    trie_ = new TrieNode();
}

void WordDictionary::insert(TrieNode *root, const string &word) {
    TrieNode *node = root;
    for (auto c : word) {
        if (node->children[c - 'a'] == nullptr) {
            node->children[c - 'a'] = new TrieNode();
        }
        node = node->children[c - 'a'];
    }
    node->isEnd = true;
}

void WordDictionary::addWord(string word) {
    insert(trie_, word);
}

bool WordDictionary::search(string word) {
    return dfs(word, 0, trie_);
}

bool WordDictionary::dfs(const string &word, int index, TrieNode *node) {
    if (index == word.size()) {
        return node->isEnd;
    }
    char ch = word[index];
    if (ch >= 'a' && ch <= 'z') {
        TrieNode * child = node->children[ch - 'a'];
        if (child != nullptr && dfs(word, index + 1, child)) {
            return true;
        }
    } else if (ch == '.') {
        for (int i = 0; i < 26; i++) {
            TrieNode * child = node->children[i];
            if (child != nullptr && dfs(word, index + 1, child)) {
                return true;
            }
        }
    }
    return false;
}

void L211_WordDictionary::test() {
    WordDictionary wd;
    wd.addWord("bad");
    wd.addWord("dad");
    wd.addWord("mad");
    cout << wd.search("pad") << endl;
    cout << wd.search("bad") << endl;
    cout << wd.search(".ad") << endl;
    cout << wd.search("b..") << endl;
}