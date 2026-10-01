class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val numIdx = hashMapOf<Int, Int>()

        for (i in 0 until nums.size) {
            val cur = nums[i]
            val toFind = target - cur
            
            if (numIdx.containsKey(toFind)) return intArrayOf(numIdx[toFind]!!, i)

            numIdx[cur] = i
        }

        return intArrayOf(-1,-1)
    }
}
