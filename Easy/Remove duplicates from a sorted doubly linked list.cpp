Node* removeDuplicates( Node* head ) {
    Node* curr{ head };
    while ( curr->next )
        if ( curr->data == curr->next->data ) {
            Node* temp{ curr->next }; // dup
            if ( curr->next = temp->next )
                curr->next->prev = curr;
            delete temp; // no garbage
        } else curr = curr->next;
    return head;
}
