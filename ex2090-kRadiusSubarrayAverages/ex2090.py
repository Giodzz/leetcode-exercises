class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        avarages = list()
        somas = list()

        soma = 0
        for num in nums:
            soma += num
            somas.append(soma)

        for i, num in enumerate(nums):
            if (i-k < 0 or i+k >= len(nums)):
                avarages.append(-1)
                continue
            
            if(i-k-1 < 0):
                media = somas[i+k] // (2*k + 1)
            else:
                media = (somas[i+k] - somas[i-k-1]) // (2*k + 1)

            avarages.append(media)
            
        return avarages