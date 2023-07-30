Node* insertAtBegining( Node* head, int x ) {
    Node* const new_head{ new Node( x )};
    new_head->next = head;
    return new_head;
}
Node* insertAtEnd( Node* head, int x ) {
    if ( !head ) return new Node( x );
    Node* curr{ head };
    while ( curr->next ) curr = curr->next;
    curr->next = new Node( x );
    return head;
}
