
# Algorithm to insert a new node at specified position

1. Input the DATA and the POS to be inserted at
2. Create NewNode
3. NewNode -> DATA = DATA
4. Initialize TEMP = START and i = 1 
5. while ( i <= POS -1 )
    * TEMP = TEMP -> Next
    * if ( TEMP -> Next equals to Null )
      * Print " Nodes is less than the position "
      * End 
    *  i = i + 1 

6. NewNode -> Prev = TEMP
7. NewNode -> Next = Temp -> Next
8. (TEMP -> Next) -> Prev = NewNode
9. TEMP -> Next = NewNode
10. End 
