void MyQueue::push( int x ) {
    rear = ( front ? rear->next : front ) = new QueueNode( x );
}
int MyQueue::pop() {
    const int x{ front ? front->data : -1 };
    QueueNode* n{ front };
    front = n == rear ? rear = nullptr : n->next;
    return delete n, x;
}
