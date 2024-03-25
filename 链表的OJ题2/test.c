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
////合并两个有序链表
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
////合并两个有序链表
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
////合并两个有序链表
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