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

        // cout<<"enter left node for:"<< temp->data<<endl;
        int ldata;
        cin>>ldata;
        if(ldata !=-1){
            temp->left = new Node(ldata);
            q.push(temp->left);
        }
        // cout<<"enter right node for:"<< temp->data<<endl;
        int rdata;
        cin>>rdata;
        if(rdata !=-1){
            temp->right = new Node(rdata);
            q.push(temp->right);
        }
    }
}

void inorder(Node*root , vector<int>&a){
    if(root == NULL){
        return;
    }

    inorder(root->left,a);
    a.push_back(root->data);
    inorder(root->right,a);
}
void preorder(Node*root , vector<int>&a){
    if(root == NULL){
        return;
    }
    a.push_back(root->data);
    inorder(root->left,a);
    inorder(root->right,a);
}

void postorder(Node*root , vector<int>&a){
    if(root == NULL){
        return;
    }

    inorder(root->left,a);
    inorder(root->right,a);
    a.push_back(root->data);
}


int main(){
  Node*  root = NULL;
  buildFromLevelOrder(root);
  vector<int>a,b,c;
  inorder(root,a);
  preorder(root,b);
  postorder(root,c);
  for(auto i: a){
    cout<<i<<" ";
  }

  cout<<endl;

  for(auto i: b){
    cout<<i<<" ";
  }

  cout<<endl;

  for(auto i: c){
    cout<<i<<" ";
  }

  }
