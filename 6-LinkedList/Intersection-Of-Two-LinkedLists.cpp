/**
 * time : O(2 * max(n1, n2)) 
 * space : O(1)
 */

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;

    ListNode *a = headA;
    ListNode *b = headB;

    while (a != b)
    {
        a = a == NULL ? headB : a->next;
        b = b == NULL ? headA : b->next;
    }

    return a;
}