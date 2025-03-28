#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
#include <stack>

#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
> Given the following classes , implement a default constructor and the
necessary copy-control members. (a) class TreeNode{ private: string value; int
count; TreeNode *left, *right;
}
(b)
class BinStrTree{
  private:
  TreeNode *root;
};

 */

class TreeNode {
  public:
    TreeNode() : value(""), count(new int(1)), left(nullptr), right(nullptr) {}
    TreeNode(const TreeNode &rhs)
        : value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) {
        ++(*count);
    }
    TreeNode &operator=(const TreeNode &rhs);

    ~TreeNode() {
        if (--(*count) == 0) {
            delete count;
            delete left;
            delete right;
        }
    }

  private:
    string value;
    int *count;
    TreeNode *left, *right;
};

TreeNode &TreeNode::operator=(const TreeNode &rhs) {
    ++(*rhs.count);
    if (--(*count) == 0) {
        delete count;
        delete left;
        delete right;
    }

    value = rhs.value;
    count = rhs.count;
    left = rhs.left;
    right = rhs.right;
    return *this;
};

class BinStrTree {
  public:
    BinStrTree() : root(new TreeNode()) {}
    BinStrTree(const BinStrTree &bst) : root(new TreeNode(*bst.root)) {}
    BinStrTree &operator=(const BinStrTree &bst);
    ~BinStrTree() { delete root; }

  private:
    TreeNode *root;
};
// 同样是指针, 什么时候应该是空指针, 什么时候是新建对象?

BinStrTree &BinStrTree::operator=(const BinStrTree &rhs) {
    TreeNode *new_root = new TreeNode(*rhs.root);
    delete root;
    root = new_root;
    return *this;
}