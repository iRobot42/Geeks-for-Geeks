Node* deleteNode( Node* head, int x ) {
    Node* curr{ head };
    while ( --x ) curr = curr->next;
    if ( curr->prev ) curr->prev->next = curr->next;
    if ( curr->next ) curr->next->prev = curr->prev;
    if ( curr == head ) head = head->next;
    delete curr;
    return head;
} // 0.02+
