// check good integer
// Pattern: Digit Extraction

 bool checkGoodInteger(int n) {
        
         int temp = n;
         int digitSum = 0;
         int squareSum = 0;

         while(temp > 0){

            int digit = temp%10;
            digitSum += digit;

            int squareDigit = pow(digit,2);
            squareSum += squareDigit;

            temp /= 10;
         }

          return (squareSum - digitSum >= 50);


    }

    /*
    Complexity : D : DIGITS 
    time : O(d) 
    space : O(1)
    */

    /*
    Review : 
    -avoid more variable
    -avoid build like pow
    */