#define V2

#ifdef V1 // recursive
bool search( Node* root, int x ) {
    return !root ? false : x == root->data ? true :
        search( x < root->data ? root->left : root->right, x );
} // 0.15+

#elif defined( V2 ) // iterative
bool search( Node* root, int x ) {
    while ( root ) if ( x == root->data ) return true;
        else root = x < root->data ? root->left : root->right;
    return false;
} // 0.15+

#endif
