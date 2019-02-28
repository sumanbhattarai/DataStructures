

# Insertion of node at the beginning of the list

1. Input DATA to be inserted
2. Create NewNode
3. NewNode -> DATA = DATA 
4. if ( START equals to NULL )
    * NewNode -> Next = Null
5. Else
    *  NewNode -> Next = START
6. START = NewNode 
7. End

# Insertion of node at the end of the list

1. Input DATA to be inserted
2. Create NewNode
3. NewNode -> DATA = DATA
4. NewNode -> Next = Null
5. if ( START equals to Null )
    * START = NewNode
6. Else
    * TEMP = START
    * while ( TEMP -> Next not equal to Null )
      * TEMP = TEMP -> Next
    * TEMP -> Next = NewNode
7. End

