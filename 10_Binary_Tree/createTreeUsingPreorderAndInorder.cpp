#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left; 
        Node* right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();
        if (front == NULL) {
            cout << endl;
            if (!q.empty()){
                q.push(NULL);
            }       
        }
        else {
            cout << front->data << " ";
            if (front->left != NULL)
                q.push(front->left);
            if (front->right != NULL)
                q.push(front->right);
        }
    }

    return;
}

int search(int element, int inorder[]){
    for(int i = 0; i<6; i++){
        if( inorder[i] == element ){
            return i;
        }
    }
    return -1;
}

Node* solve(int inorder[], int preorder[], int &preindex, int instart, int inend){
    //base case 
    if(preindex >= 6 || instart > inend){
        return NULL;
    }

    int element = preorder[preindex];
    preindex++;

    Node* root =  new Node(element);


    int index = search(element, inorder);
    


    root->left = solve(inorder, preorder, preindex, instart, index - 1);
    root->right = solve(inorder, preorder, preindex, index + 1, inend);
 
    return root;

}

int main(){
    int inorder[6] = {10, 8, 6, 2, 4, 12};
    int preorder[6] ={2, 8, 10, 6, 4, 12};
    int preindex = 0;
    int instart = 0;
    int inend = 5;
    Node* root = solve(inorder, preorder, preindex, instart, inend);
    cout<<"printing the tree"<< endl;
    levelOrderTraversal(root);
    return 0;
}