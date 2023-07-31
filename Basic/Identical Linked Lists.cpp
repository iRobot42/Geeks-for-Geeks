bool areIdentical( Node* head1, Node* head2 ) {
    while ( head1 && head2 ) {
        if ( head1->data != head2->data )
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    return !head1 && !head2;
} // 0.16+
