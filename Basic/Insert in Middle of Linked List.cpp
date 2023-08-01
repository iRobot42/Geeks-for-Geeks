Node* insertInMiddle( Node* head, int x ) {
    Node* curr{ head };
    Node* temp{ head->next };
    while ( temp && temp->next )
        curr = curr->next,
        temp = temp->next->next;
    temp = new Node( x );
    temp->next = curr->next;
    curr->next = temp;
    return head;
} // 0.13+
