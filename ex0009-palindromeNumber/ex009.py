class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        tam = len(x)
        for i, c in enumerate(x):
            if x[i] != x[tam-1-i]:
                return False
        
        return True
    
print(Solution().isPalindrome(1231))