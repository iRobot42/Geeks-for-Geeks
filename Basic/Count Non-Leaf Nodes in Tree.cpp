#define V2

#ifdef V1 // recursive
int countNonLeafNodes( Node* root ) {
    return root && ( root->left || root->right )
        ? 1 + countNonLeafNodes( root->right )
            + countNonLeafNodes( root->left ) : 0;
} // 0.07+

#elif defined( V2 ) // iterative
int countNonLeafNodes( Node* root ) {
    stack< Node* > nodes;
    nodes.push( root );
    int nonleaf{};
    while ( !nodes.empty() ) {
        root = nodes.top();
        nodes.pop();
        if ( root->left || root->right ) {
            ++nonleaf;
            if ( root->left ) nodes.push( root->left );
            if ( root->right ) nodes.push( root->right );
        }
    }
    return nonleaf;
} // 0.07+

#endif
