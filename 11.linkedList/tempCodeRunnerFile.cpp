void printElement(Node* head){
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    printElement(head->next);