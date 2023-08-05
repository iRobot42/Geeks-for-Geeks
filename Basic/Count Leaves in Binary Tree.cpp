#define V2

#ifdef V1 // recursive
int countLeaves( Node* root ) {
    return !root ? 0 : !root->left && !root->right ? 1 :
        countLeaves( root->left ) + countLeaves( root->right );
} // 0.05+

#elif defined( V2 ) // iterative
int countLeaves( Node* root ) {
    stack< Node* > nodes;
    if ( root ) nodes.push( root );
    int leaves{};
    while ( !nodes.empty() ) {
        root = nodes.top();
        nodes.pop();
        if ( root->left || root->right ) {
            if ( root->left ) nodes.push( root->left );
            if ( root->right ) nodes.push( root->right );
        } else ++leaves;
    }
    return leaves;
} // 0.05+

#endif
