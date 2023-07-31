int sumOfLastN_Nodes( Node* head, int n ) {
    Node* left{ head };
    while ( n-- )
        head = head->next;
    while ( head )
        head = head->next,
        left = left->next;
    int sum{};
    while ( left )
        sum += left->data,
        left = left->next;
    return sum;
} // 0.01+
