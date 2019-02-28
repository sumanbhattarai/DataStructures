

# Algorithm to PUSH in Stack using Linked List

1. Input DATA to be pushed
2. Create NewNode
3. NewNode -> DATA = DATA
4. NewNode -> Next = TOP
5. TOP = NewNode
6. End


# Algorithm to POP in Stack using LinkedList

1. if ( TOP equals to Null )
    * Print " Stack is Empty "

2. TEMP = TOP
3. TOP = TOP -> Next
4. Print " The Popped Element is TEMP -> DATA "
5. TEMP -> Next = Null
6. free the TEMP node
7. End 

