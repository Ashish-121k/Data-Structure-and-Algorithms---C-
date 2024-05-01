//approach 1 : copy mai nhi hai // lnr traversal // ye approach sirf binary tree ke liye shi hai
//             binary search ke liye nhi
class Solution
{
    public: 
    void helper(Node *root, Node* &head, Node* &prev){
        if(!root) return;
        
        helper(root->left, head, prev);
        
        if(!head){
            head = root;
            prev = root;
        }
        else{
            prev->right = root;
            prev->right->left = prev;
            prev = root;
        }
        
        helper(root->right, head, prev);
    }
    
    Node * bToDLL(Node *root)
    {
        Node* head = NULL;
        Node* prev = NULL;
        
        helper(root, head, prev);
        return head;
    }
};

//approach 2 : copy mai hai // traversal -> rnl
class Solution
{
    public: 
    void solve(Node* root, Node* &head){
        if(root == NULL){
            return;
        }
        //r
        solve(root->right, head);
        //n
        root->right = head;
        if(head != NULL){
            head->left = root;
        }
         head = root;
        //l
        solve(root->left, head);
        
    }
    
    Node * bToDLL(Node *root)
    {
        Node* head = NULL;
        solve(root, head);
        return head;
    }
};


