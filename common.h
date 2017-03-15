/**
 * author:lanbin0303@gmail.com
 *
 * Features:
 * 1.define macros and ariables
 * 2.include common head files
 * 3.basic storage structure
 */
#ifndef __Common_H__
#define __Common_H__
#include <vector>
#include <string>
#include <map>
#include <iostream>
using namespace std;

//singly linked list node
struct ListNode
{
    int value;
    ListNode *next;
};
//doubly linked list node
struct DoubleListNode
{
    int value;
    DoubleListNode *pre;
    DoubleListNode *next;
};
//binary tree node
struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
};
#endif
