// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if ((l1) == NULL && (l2) == NULL)
			return NULL;
		else if ((l1) == NULL)
			return  l2;
		else if ((l2) == NULL)
			return l1;
		ListNode a(0);
		ListNode *dummy = &a;
		ListNode * cur = &a;
		ListNode *tmp0, *tmp1;
		dummy->next = l1;
		while (l1 != NULL && l2 != NULL){
			if (l1->val < l2->val)
				l1 = l1->next;
			else{
				tmp0 = cur->next;
				tmp1 = l2->next;
				cur->next = l2;
				l2->next = tmp0;
				l2 = tmp1;
			}
			cur = cur->next;
		}
		if ((l1) == NULL && (l2) == NULL)
			cur->next= NULL;
		else if ((l1) == NULL)
			cur->next=  l2;
		else if ((l2) == NULL)
			cur->next= l1;
		return dummy->next;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	//Mat picture = imread("1.bmp");//图片必须添加到工程目录下                            
	//imshow("测试程序", picture);
	Solution a;
	ListNode l1(1),  l2(2);
	
	//l1.next = &l1_1;
	//l2.next = &l2_2;
	ListNode *m = a.mergeTwoLists(&l1,&l2);
	while (m != NULL){
		cout << m->val;
		m = m->next;
	}

	//cvWaitKey(6000);
	return 0;
}
