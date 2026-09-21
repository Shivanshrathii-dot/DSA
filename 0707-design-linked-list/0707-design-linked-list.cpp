class MyLinkedList {
public:
    struct Node{
        int val;
        Node* next;
        Node(int x){
            val=x;
            next=NULL;
        }
    };
    Node* head;
    MyLinkedList() {
        head=NULL;
    }



    
    int get(int index) {
        Node* temp=head;
        
        for(int i=0;i<index;i++){
            if(temp==NULL){
                return -1;
                
            }
            temp=temp->next;
        }
        if(temp==NULL){
            return -1;
        }
        return temp->val;
    }



    
    void addAtHead(int val) {
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;  
    }



    
    void addAtTail(int val) {
        Node* temp=new Node(val);
        if(head==NULL){
            head=temp;
            return;
        }
        Node* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }


    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        Node* curr=head;
        for(int i=0;i<index-1;i++){
            if(curr==NULL){
                return;
            }
            curr=curr->next;
        }
        if(curr==NULL){
            return ;
        }
        Node* temp=new Node(val);
        temp->next=curr->next;
        curr->next=temp;

        
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL){
            return;
        }
        if(index==0){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        Node* curr=head;
        for(int i=0;i<index-1;i++){
            if(curr->next==NULL){
                return;
            }
            curr=curr->next;
        }
        if(curr->next==NULL){
            return;
        }
        Node* temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */