
# Insert an element in Linear Queue

1. Input DATA to be inserted
2. Create NewNode
3. NewNode -> DATA = DATA 
4. if ( REAR not equal to Null )
    * REAR -> Next = NewNode
5. REAR = NewNode
6. End

# Remove an element in Linear Queue

1. if (FRONT equal to Null )
   * Print " Queue is Empty "
   * End
2. TEMP = FRONT
3. Print " The poped element is Front -> DATA "
4. if ( FRONT == REAR )
    * FRONT = Null
5. Else
    * FRONT = FRONT -> Next
6. End 


