#define V2

#ifdef V1 // recursive
long sumBT( Node* root ) {
    return root ? root->key + sumBT( root->left ) + sumBT( root->right ) : 0;
} // 0.06+

#elif defined( V2 ) // iterative
long sumBT( Node* root ) {
    stack< Node* > nodes;
    nodes.push( root );
    long sum{};
    while ( !nodes.empty() ) {
        root = nodes.top();
        nodes.pop();
        sum += root->key;
        if ( root->left ) nodes.push( root->left );
        if ( root->right ) nodes.push( root->right );
    }
    return sum;
} // 0.06+

#endif
