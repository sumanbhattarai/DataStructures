

        var InsertionSort = function( arr )
        {
            for( var i  = 1 ; i < arr.length ; i++ )
            {
                for( var j = 0 ; j < i ; j++ )
                {
                    if( arr[i] < arr[j] )
                    {
                        var temp = arr.splice( i ,1 ) ;
                        arr.splice( j , 0 , temp[0] ) ;
                    }
                }
            }
            return arr ;

        }

        var test = [ 5, 2 , 7 , 6 , 4, 6 ,19, 3 , 6 , 45 ] ; // test array 
        console.log(InsertionSort(test)) ; // It will print the sorted data in console.
    
    
