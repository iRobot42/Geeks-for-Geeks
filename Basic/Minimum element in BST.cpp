#define V1

#ifdef V1 // recursive
int minValue( Node* root ) {
    return root ? root->left ? minValue( root->left ) : root->data : -1;
} // 0.06+

#elif defined( V2 ) // iterative
int minValue( Node* root ) {
    if ( !root ) return -1;
    while ( root->left ) root = root->left;
    return root->data;
} // 0.06+

#endif
