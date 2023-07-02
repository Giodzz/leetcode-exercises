bool isPalindrome(int x){
    char str[11];
    snprintf(str,  11, "%d", x);
    int tam = strlen(str) ;
    for (int i=0; i<tam; i++) {
        if(str[i] != str[tam-1-i]) return false;
    }

    return true;
}