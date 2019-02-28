
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


# Algorithm to delete a node 

1. Input the DATA to be deleted
2.  if ( START -> DATA = DATA )
   * TEMP = START
   * START = START -> Next
   * START -> Prev = Null
   * Set free the node TEMP , which is deleted
   * End

3. HOLD = START
4. while ( (HOLD -> Next -> Next) not equals to NULL )
    * if ( HOLD -> Next -> DATA equal to DATA )
        * TEMP = HOLD -> Next
        * HOLD -> Next = TEMP -> Next
        * TEMP -> Next -> Prev = HOLD
        * Set free the node TEMP , which is deleted
    * HOLD = HOLD -> Next

5. if ( HOLD -> Next -> DATA = DATA )
    * TEMP = HOLD -> Next
    * HOLD -> Next = NULL
    * Set free the node TEMP , which is deleted
    * End
   
6. Print " DATA not found in the list "
7. End