/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getAverages(int* nums, int numsSize, int k, int* returnSize){
    int i;
    unsigned long long int soma = 0, media;
    unsigned long long int soma_ant[numsSize];
    int * avarages = calloc(numsSize, sizeof(long int));
    
    soma = 0;
    for(i=0; i<numsSize; i++) {
        soma += nums[i];
        soma_ant[i] = soma;
    }

    for(i=0; i<numsSize; i++) {
        if(i-k < 0 || i+k >= numsSize) {
            avarages[i] = -1;
            continue;
        }

        if(i-k-1 < 0) media = soma_ant[i+k] / (2*k + 1);
        else media = (soma_ant[i+k] - soma_ant[i-k-1]) / (2*k + 1);
        avarages[i] = (int) media;
    }
    

    *returnSize = numsSize;
    return avarages;
}