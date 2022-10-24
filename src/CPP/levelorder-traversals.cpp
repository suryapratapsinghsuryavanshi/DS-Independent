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

vector<int> levelOrderTraversal(Node*root){
  vector<int>a;  
  if(root == NULL){
    return a;
  }
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
    int s = q.size();
    for(int i = 0 ; i<s;i++){
    Node*temp = q.front();
    q.pop();
    
    a.push_back(temp->data);
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }
   }
 }

 return a;
}

int main(){
  Node*  root = NULL;
  buildFromLevelOrder(root);
  vector<int>a = levelOrderTraversal(root);
  for(auto i: a){
    cout<<i<<" ";
  }

  }