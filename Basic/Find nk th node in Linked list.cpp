int fractional_node( Node* head, int k ) {
    Node* frac{ head };
    int c{};
    do if ( c++ == k ) frac = frac->next, c = 1;
    while ( head = head->next );
    return frac->data;
} // 0.01+
