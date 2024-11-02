vector< int > displayList( Node* n ) {
    vector< int > v;
    while ( n ) v.push_back( n->data ), n = n->next;
    return v;
}
