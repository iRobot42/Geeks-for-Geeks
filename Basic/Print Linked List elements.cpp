#define V2
#ifdef V1 // recursive
void display( Node* head ) {
    if ( !head ) return;
    cout << head->data << ' ';
    display( head->next );
} // 0.01+
#elif defined( V2 ) // iterative
void display( Node* head ) {
    while ( head ) {
        cout << head->data << ' ';
        head = head->next;
    }
} // 0.01+
#endif
