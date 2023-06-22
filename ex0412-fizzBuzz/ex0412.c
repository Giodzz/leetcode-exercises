/**
* Note: The returned array must be malloced, assume caller calls free().
*/
char ** fizzBuzz(int n, int* returnSize){
    int i, j;

    // Alocar memória da matriz
    char ** strArr = (char **) malloc(n*sizeof(char *));
    for(i=0; i<n; i++) {
        strArr[i] = (char *) malloc(9*sizeof(char));
    }

    for(i=0; i<n; i++) {
        if ((i+1)%3 == 0 && (i+1)%5 == 0) {
            strArr[i] = "FizzBuzz";

        } else if ((i+1)%3 == 0) {
            strArr[i] = "Fizz";
        
        } else if ((i+1)%5 == 0) {
            strArr[i] = "Buzz";
        
        } else {
            sprintf(strArr[i], "%d", (i+1));
        }
    }
    
    *returnSize = n;
    return strArr;
}