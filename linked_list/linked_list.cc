#include<iostream>

//using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node* head {nullptr};

void insert(int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = head;
    head = new_node;
}

void display(){
    struct Node* ptr;
    ptr = head;
    while (ptr!= nullptr)
    {
	    std::cout<< ptr -> data << " ";
	    ptr = ptr -> next;
    }
}

int main(){
    insert(3);
    insert(2);
    insert(1);
    insert(4);
    insert(6);
    insert(7);
    insert(39);

    std::cout << "The linked list is : " ;
    display();

    return 0;
}
