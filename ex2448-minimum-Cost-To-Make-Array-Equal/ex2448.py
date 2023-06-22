class Solution:
    def minCost(self, nums, cost) -> int:
        menor_cost = 0
        max_nums = max(nums)
        min_nums = min(nums)
        max_cost = max(cost)
        indice_max = cost.index(max_cost)

        if max_nums == min_nums:
            return 0

        base = nums[indice_max]
        soma = 0
        for i, num in enumerate(nums):
            if num == base:
                continue
            diff = abs(num - base)
            soma += diff * cost[i]
        

        menor_cost = soma

        return menor_cost


print(Solution().minCost([1,3,5,2], [2,3,1,14]))
