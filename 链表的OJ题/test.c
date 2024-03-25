#include<stdio.h>
//OJ题：
//算法竞赛中用的
//2015年陆续开始大多数攻速校招笔试阶段也是用oj判定编程题
//笔试就开始变成线上笔试，尤其是去年疫情
//1.接口型
// 给了一个函数，实现这个函数就可以了，不需要写main函数，不需要加头文件
// 结果通常是通过返回值来检查结果的
//2.IO型
// 
// 
// 一、反转链表
//1.翻转指针
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* n1 = NULL;//被指向的节点
    struct ListNode* n2 = head;//已知节点
    struct ListNode* n3 = n2->next;//存下一个节点的位置
    while (n2 != NULL)
    {
        n2->next = n1;
        n1 = n2;
        n2 = n3;
        if (n3)
        {
            n3 = n3->next;
        }
    }
    return n1;
}
//头插法
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* cur = head;
    struct ListNode* newhead = NULL;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;
    }
    return newhead;
}


//查找链表的中间结点

//1.方法1：求长度，找中间值
struct ListNode* middleNode(struct ListNode* head) {
    int len = 0;
    struct ListNode* p1 = head;
    while (p1)
    {
        len++;
        p1 = p1->next;
    }
    for (int i = 0;i < len / 2;i++)
    {
        head = head->next;
    }
    return head;
}

//方法2：快慢指针
//快指针走两步，慢指针走一步
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}



//合并两个有序链表
//尾插法
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    struct ListNode* head = NULL, * tail = NULL;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val < list2->val)
        {
            if (tail == NULL)
            {
                head = tail = list1;
            }
            else
            {
                tail->next = list1;
                tail = tail->next;
            }
            list1 = list1->next;
        }
        else
        {
            if (tail == NULL)
            {
                head = tail = list2;
            }
            else
            {
                tail->next = list2;
                tail = tail->next;
            }
            list2 = list2->next;
        }
    }
    if (list1 != NULL)
    {
        tail->next = list1;
    }
    if (list2 != NULL)
    {
        tail->next = list2;
    }
    return head;
}


//优化算法
//提前准备头结点
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    struct ListNode* head = NULL, * tail = NULL;
    if (list1->val < list2->val)
    {
        head = tail = list1;
        list1 = list1->next;
    }
    else
    {
        head = tail = list2;
        list2 = list2->next;
    }
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            tail = tail->next;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            tail = tail->next;
            list2 = list2->next;
        }
    }
    if (list1 != NULL)
    {
        tail->next = list1;
    }
    if (list2 != NULL)
    {
        tail->next = list2;
    }
    return head;
}


//方法3：带哨兵位的头结点
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    struct ListNode* head = NULL, * tail = NULL;
    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            tail = tail->next;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            tail = tail->next;
            list2 = list2->next;
        }
    }
    if (list1 != NULL)
    {
        tail->next = list1;
    }
    if (list2 != NULL)
    {
        tail->next = list2;
    }
    return head->next;
}


//环形链表

//方法1：快慢指针

bool hasCycle(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
//拓展：
//1.请证明slow和fast一定会在环内相遇？是否有可能永远追不上
//2.slow一次走1步，fast1次走3步是否可行？ 
// 结论：1.slow一次走一步，fast一次走两步一定能追上。
//       2.
//