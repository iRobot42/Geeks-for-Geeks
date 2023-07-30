void deleteAlt( Node* head ) {
    while ( head && head->next ) {
        const Node* const alt{ head->next };
        head->next = alt->next;
        delete alt;
        head = head->next;
    }
} // 0.01+
