#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }


};

void buildFromLevelOrder(Node*&root){
    queue<Node*>q;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int ldata;
        cin>>ldata;
        if(ldata !=-1){
            temp->left = new Node(ldata);
            q.push(temp->left);
        }
       
        int rdata;
        cin>>rdata;
        if(rdata !=-1){
            temp->right = new Node(rdata);
            q.push(temp->right);
        }
    }
}

void flatten(Node *&root)
    {
        Node* curr = root;
        while(curr !=NULL){
            if(curr->left){
                Node* prev = curr->left;
                while(prev->right){
                    prev = prev->right;
                }
                
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    
    }

 int main(){
    Node* root = NULL;
    buildFromLevelOrder(root);
    flatten(root);
    while(root!=NULL){
        cout<<root->data<<" ";
        root = root->right;
    }
 }   