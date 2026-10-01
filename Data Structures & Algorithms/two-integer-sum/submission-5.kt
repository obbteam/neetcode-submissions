class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val numIdx = mutableMapOf<Int, Int>()

        for ((i, num) in nums.withIndex()) {
            numIdx[target - num]?.let {
                return intArrayOf(it, i)
            }
            
            numIdx[num] = i
        }

        return intArrayOf()
    }
}
