#define V2

#ifdef V1 // recursive
vector< int > result;
vector< int > inOrder( Node* node ) {
    if ( !node ) return {};
    inOrder( node->left );
    result.push_back( node->data );
    inOrder( node->right );
    return result;
} // 0.01+

#elif defined( V2 ) // iterative
vector< int > inOrder( Node* node ) {
    vector< int > result;
    stack< Node* > nodes;
    while ( node || !nodes.empty() ) {
        while ( node ) nodes.push( node ),
            node = node->left;
        node = nodes.top(), nodes.pop();
        result.push_back( node->data );
        node = node->right;
    }
    return result;
} // 0.01+

#endif
