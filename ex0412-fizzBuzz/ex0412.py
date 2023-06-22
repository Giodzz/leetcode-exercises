class Solution:
    def fizzBuzz(self, n: int):
        strArr = list();

        for i in range(n):
            if (i+1)%3 == 0 and (i+1)%5 == 0:
                strArr.append("FizzBuzz")
            
            elif (i+1)%3 == 0:
                strArr.append("Fizz")
            
            elif (i+1)%5 == 0:
                strArr.append("Buzz")

            else:
                strArr.append(str(i+1))

        return strArr