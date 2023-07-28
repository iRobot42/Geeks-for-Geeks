#define V2
#ifdef V1
int GetNth( node* n, int i ) {
    return --i ? GetNth( n->next, i ) : n->data;
} // 0.01+
#elif defined( V2 )
int GetNth( node* n, int i ) {
    while ( --i ) n = n->next;
    return n->data;
} // 0.01+
#endif
