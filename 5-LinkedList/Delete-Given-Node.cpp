/**
 * Time: O(1)
 * Space: O(1)
 */

void deleteNode(ListNode *node)
{
    *node = *(node->next);
}

void deleteNode(ListNode *node)
{
    ListNode *temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
}
