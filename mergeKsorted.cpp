class Solution
{
    struct CompareNode
    {
        bool operator()(ListNode *const &p1, ListNode *const &p2)
        {
            // return "true" if "p1" is ordered before "p2", for example:
            return p1->val > p2->val;
            //Why not p1->val <p2->val; ??
        }
    };

public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        ListNode dummy(0);
        ListNode *tail = &dummy;

        priority_queue<ListNode *, vector<ListNode *>, CompareNode> queue;

        for (vector<ListNode *>::iterator it = lists.begin(); it != lists.end(); ++it)
        {
            if (*it)
                queue.push(*it);
        }
        while (!queue.empty())
        {
            tail->next = queue.top();
            queue.pop();
            tail = tail->next;

            if (tail->next)
            {
                queue.push(tail->next);
            }
        }

        return dummy.next;
    }
};