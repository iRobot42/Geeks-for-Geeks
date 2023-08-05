#define V2

#ifdef V1 // recursive
void helper( Node* node, vector< int >& result ) {
    if ( !node ) return;
    helper( node->left, result );
    helper( node->right, result );
    result.push_back( node->data );
}
vector< int > postOrder( Node* root ) {
    vector< int > result;
    helper( root, result );
    return result;
} // 0.13+

#elif defined( V2 ) // iterative
vector< int > postOrder( Node* root ) {
    vector< int > result;
    stack< Node* > nodes;
    if ( root ) nodes.push( root );
    while ( !nodes.empty() ) {
        Node* curr{ nodes.top() };
        nodes.pop();
        result.push_back( curr->data );
        if ( curr->left ) nodes.push( curr->left );
        if ( curr->right ) nodes.push( curr->right );
    }
    return { result.crbegin(), result.crend() };
} // 0.13+

#endif
