

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


# Insertion of node at the specified position

1. Input DATA and POS to be inserted
2. Create NewNode
3. NewNode -> DATA = DATA
4. Initialize TEMP = START and int i = 1 
5. While ( i <= POS-1 )
    * TEMP = TEMP -> Next
    *  if ( TEMP -> Next == Null )
       *  Print " Nodes in the list is less than the position"
       *  End
    *  i = i + 1 
6. NewNode -> Next = Temp -> Next
7. Temp -> Next = NewNode
8. End


# Display All Nodes

1. if ( START equals to Null )
   * Print " List is Empty "
   * End
2. TEMP = START
3. while ( TEMP -> Next != Null )
    * Print " TEMP -> Data "
    * TEMP = TEMP -> Next
4. End 


# Algorithm for Deleting a node

1. Input the DATA to be deleted
2.  if ( START -> DATA = DATA )
    * TEMP = START
    * START = START -> Next
    * Set free the node TEMP , which is deleted .
    * End
3. HOLD = START 
4. while ( HOLD -> Next -> Next not equal to Null )
    * if ( HOLD -> Next -> DATA = DATA )
        * TEMP = HOLD -> Next 
        * HOLD -> Next = Temp -> Next
        * Set free the TEMP node , which is deleted.
        * End
    * HOLD = HOLD-> Next

5. if ( HOLD -> Next -> DATA == DATA)
    * TEMP = HOLD -> Next
    * HOLD -> Next = Null
    * Set free the TEMP node , which is deleted
    * End

6. Print " DATA not found "
7. End 


# Algorithm for searching a node

1. Input the DATA to be searched
2. Initialize  TEMP = START and POS = 1
3. while ( TEMP not equals to Null )
    * if ( TEMP -> DATA equals to DATA)
      *  Print " DATA is found at POS position "
      *  End
   *  TEMP = TEMP -> Next
   *  POS = POS + 1

4.  Print " DATA not found in the list "
5.  End 