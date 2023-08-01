#define ITERATIVE

#ifdef RECURSIVE
void helper( Node* r, vector< int >& v ) {
    if ( !r ) return;
    v.push_back( r->data );
    helper( r->left, v );
    helper( r->right, v );
}
vector< int > preorder( Node* root ) {
    vector< int > v;
    helper( root, v );
    return v;
} // 0.20+

#elif defined( ITERATIVE )
vector< int > preorder( Node* root ) {
    vector< int > v;
    stack< Node* > s;
    if ( root ) s.push( root );
    while ( !s.empty() ) {
        Node* n{ s.top() };
        s.pop();
        v.push_back( n->data );
        if ( n->right ) s.push( n->right );
        if ( n->left ) s.push( n->left );
    }
    return v;
} // 0.22+

#endif
