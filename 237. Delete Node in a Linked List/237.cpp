class Solution {
public:
    void deleteNode(ListNode* node) {
        // ���� ��尡 �׻� ������ ���(tail node)�� �ƴ϶�� ������, �׳� ���� ����� val�� next�� �ٲ���
        node->val = (node->next)->val;
        node->next = (node->next)->next;
    }
};