void MyStack::push( int x ) {
    StackNode* const n{ new StackNode( x )};
    n->next = top;
    top = n;
}
int MyStack::pop() {
    if ( !top ) return -1;
    const int x{ top->data };
    const StackNode* const n{ top };
    top = top->next;
    delete n;
    return x;
}
