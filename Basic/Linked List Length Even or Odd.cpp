int isLengthEvenOrOdd( Node* head ) {
    int c{};
    while ( head ) ++c, head = head->next;
    return c & 1;
} // 0.01+
