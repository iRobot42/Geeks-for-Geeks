void addNode( Node* head, int pos, int data ) {
    while ( pos-- ) head = head->next;
    Node* node{ new Node( data )};
    node->prev = head;
    node->next = head->next;
    head->next = node;
} // 0.11+
