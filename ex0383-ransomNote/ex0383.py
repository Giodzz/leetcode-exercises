class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        lista = list(magazine)
        for char in ransomNote:
            if char not in lista:
                return False

            if char in lista:
                lista.remove(char)
        return True