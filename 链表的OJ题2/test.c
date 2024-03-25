//�ϲ�������������
//β�巨
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


//�Ż��㷨
//��ǰ׼��ͷ���
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


//����3�����ڱ�λ��ͷ���
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


//��������

//����1������ָ��

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
//��չ��
//1.��֤��slow��fastһ�����ڻ����������Ƿ��п�����Զ׷����
//2.slowһ����1����fast1����3���Ƿ���У� 
// ���ۣ�1.slowһ����һ����fastһ��������һ����׷�ϡ�
//       2.
////�ϲ�������������
//β�巨
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


//�Ż��㷨
//��ǰ׼��ͷ���
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


//����3�����ڱ�λ��ͷ���
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


//��������

//����1������ָ��

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
//��չ��
//1.��֤��slow��fastһ�����ڻ����������Ƿ��п�����Զ׷����
//2.slowһ����1����fast1����3���Ƿ���У� 
// ���ۣ�1.slowһ����һ����fastһ��������һ����׷�ϡ�
//       2.
////�ϲ�������������
//β�巨
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


//�Ż��㷨
//��ǰ׼��ͷ���
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


//����3�����ڱ�λ��ͷ���
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


//��������

//����1������ָ��

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
//��չ��
//1.��֤��slow��fastһ�����ڻ����������Ƿ��п�����Զ׷����
//2.slowһ����1����fast1����3���Ƿ���У� 
// ���ۣ�1.slowһ����һ����fastһ��������һ����׷�ϡ�
//       2.
////�ϲ�������������
//β�巨
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


//�Ż��㷨
//��ǰ׼��ͷ���
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


//����3�����ڱ�λ��ͷ���
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


//��������

//����1������ָ��

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
//��չ��
//1.��֤��slow��fastһ�����ڻ����������Ƿ��п�����Զ׷����
//2.slowһ����1����fast1����3���Ƿ���У� 
// ���ۣ�1.slowһ����һ����fastһ��������һ����׷�ϡ�
//       2.
//