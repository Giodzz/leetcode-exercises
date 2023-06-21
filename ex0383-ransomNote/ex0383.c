bool canConstruct(char * ransomNote, char * magazine){
    int i, j;
    int tamNote = strlen(ransomNote);
    int tamMagazine = strlen(magazine);

    for(i=0; i<tamNote; i++) {
        for(j=0; j<tamMagazine; j++) {
            if(ransomNote[i] == magazine[j]) {
                magazine[j] = '0';
                break;
            }

            if(j == tamMagazine - 1) {
                return false;
            }
        }
    }

    return true;
}