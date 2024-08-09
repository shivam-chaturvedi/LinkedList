#include<iostream>
#include<initializer_list>
// sorry its initializer list

using namespace std;

class LinkedList{
    private:
    // first made node structure
    struct Node{
        int data; //data part
        Node *next;
        Node(int data):data(data),next(nullptr){}
    };

    Node *head=nullptr; //head pointer will contain first node address

    public:

    // now make a constructor
    LinkedList(initializer_list<int> init){
        for(auto i:init){
            insertAtLast(i);
        }
    }

    void insertAtBeg(int data){
        // this method should insert the new value at beginning of linked list
        // first make a newnode
        Node *newnode=new Node(data);
        if(!head){
            // if list is empty
            head=newnode;
            return;
        }
        // if list is not empty
        newnode->next=head;
        head=newnode;
    }

    // now make a method to insert value at last
    void insertAtLast(int data){
        Node *newnode=new Node(data);
        if(!head){
            // again if head is null
            head=newnode;
            return;
        }
        // now if list is not empty we need to find the last node
        Node *temp=head;
        while(temp->next!=nullptr){
            temp=temp->next; //move temp pointer forward until we reach last node
        }
        // now temp is containing the last node
        temp->next=newnode;
        // now we inserted the last node ->next value to newnode
    }

    // now make a traverse method
    void traverse(){
        if(!head){
            // if list is null
            return;
        }
        Node *temp=head;
        while(temp!=nullptr){
            if(temp->next==nullptr){
                // if temp is last node
                cout<<temp->data;
                cout<<endl;
            }
            else{
            cout<<temp->data<<"->";
            }
            // it is done so list end will not print -> 
            temp=temp->next;
        }
    }

    // now make a remove method
    void remove(int data){
        if(!head) return; //listis empty nothing to remove

        if(head->data==data){
            // if value to be deleted exist in first node
            Node *temp=head;
            head=head->next; //head will point to next node
            delete temp; //free the first node
        }
        else{
            // value in somewhere between
            Node *temp=head;
            while(temp->next!=nullptr && temp->next->data!=data){
                temp=temp->next;
            }
            // now temp->next will either contain the node to be deleted or nullptr
            Node *t2=temp->next; //t2 will store the node address which needs to be deleted
            if(t2 !=nullptr){
            temp->next=t2->next; //temp->next now contain the next node from t2
            // also free the t2
            delete t2; //now node is deleted
            }
        }

    }
};

int main(){
    LinkedList list={45,56,575,84595,958585,44,444,44,234,24}; //like this
    list.insertAtBeg(45);
    list.insertAtBeg(6);
    list.insertAtBeg(4784);
    list.insertAtBeg(450);
    list.insertAtBeg(555);
    list.insertAtLast(485);
    list.insertAtLast(755);
    list.insertAtBeg(5);
    list.insertAtBeg(45);
    // thanks for watching
    // lets try to rmeove 450
    list.remove(450);
    list.traverse();

    // so thats working now try also make a list_initialization so that we can directly iniatilize value to list

    return 0;
}