
        function SelectionSort (input)
        {
            for( var i = 0 ; i < input.length ; i++ )
            {
                for ( var j = (i+1) ; j < input.length  ; j ++ )
                {
                    if( input[j] < input[i] )
                    {
                        var temp = input[i] ;
                        input[i] = input[j] ;
                        input[j] = temp  ;
                    }
                }
            }
            return input ;
        }

        var test = [ 3 , 6 , 2 , 6 , 3, 23 , 6  ,1 , 80]
        console.log(SelectionSort(test)) ;

 