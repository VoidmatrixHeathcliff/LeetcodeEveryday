# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head, val=None) -> ListNode:
        if not head: return head
        if (val is not None and head.val==val) or (head.next and head.val==head.next.val):
            return self.deleteDuplicates(head.next, head.val)
        head.next = self.deleteDuplicates(head.next, head.val)
        return head