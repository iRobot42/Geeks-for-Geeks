#define V2

#ifdef V1 // recursive
int getSize( Node* node ) {
    return node ? getSize( node->left ) + getSize( node->right ) + 1 : 0;
} // 0.05+

#elif defined( V2 ) // iterative
int getSize( Node* node ) {
    stack< Node* > nodes;
    int size{};
    if ( node ) nodes.push( node ), ++size;
    while ( !nodes.empty() ) {
        node = nodes.top();
        nodes.pop();
        if ( node->left ) nodes.push( node->left ), ++size;
        if ( node->right ) nodes.push( node->right ), ++size;
    }
    return size;
} // 0.05+

#endif
