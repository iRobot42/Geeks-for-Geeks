int modularNode( Node* head, int k ) {
    int data{ -1 }, index{};
    do if (!( ++index % k ))
        data = head->data;
    while ( head = head->next );
    return data;
} // 0.01+
