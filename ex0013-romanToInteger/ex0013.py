# Roman to Integer

class Solution:

    def romanToInt(self, s: str) -> int:
        num_inteiro = 0
        romans = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        char_ant = 'M'

        for index, char in enumerate(s):
            if romans[char_ant] < romans[char]:
                num_inteiro += romans[char] - 2*romans[char_ant]
            else:
                num_inteiro += romans[char]
            char_ant = char

        return num_inteiro