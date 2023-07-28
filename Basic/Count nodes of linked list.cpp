#define V2
#ifdef V1
int getCount( Node* head ) {
    return head ? getCount( head->next ) + 1 : 0;
} // 0.35+
#elif defined( V2 )
int getCount( Node* head ) {
    int c{};
    while ( head ) ++c, head = head->next;
    return c;
} // 0.34+
#endif
