bool isCircular( Node* head ) {
    Node* curr{ head };
    while ( curr = curr->next )
        if ( curr == head ) return true;
    return false;
} // 0.01+
