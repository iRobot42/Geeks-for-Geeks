void printList( Node* head ) {
    const Node* curr{ head };
    do cout << curr->data << ' ';
    while (( curr = curr->next ) != head );
} // 0.01+
