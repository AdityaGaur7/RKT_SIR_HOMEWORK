#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }

};

Node *getIntersectionNode(Node *headA, Node *headB) {
        while (headB) {
        Node* temp = headA;
        while (temp) {
            if (temp == headB)
                return headB;
            temp = temp->next;
        }
        headB = headB->next;
    }
    return NULL;
}

bool hasCycle(Node *head) {
       if(head==NULL) return false;

       map<Node*,bool>visited;
       Node* temp = head;

       while(temp!=NULL){
           if(visited[temp]==true){
               return true;
           }
            visited[temp]=true;
            temp=temp->next;
       }

       return false;
    }
int main(){


    int a[5]={1,2,3,4,5};
    Node *dummy = new Node(-1);
    Node *curr = dummy;
    for(int i = 0;i< 5 ;i++){
        Node *temp  = new Node(a[i]);
        curr->next = temp;
        curr = curr->next;
    }











    return 0;

}
