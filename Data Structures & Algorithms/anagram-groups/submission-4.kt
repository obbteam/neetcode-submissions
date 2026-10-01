class Solution {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val anagramGroups = hashMapOf<List<Int>, MutableList<String>>()

        for (s in strs) {
            val key = MutableList(26) {0}

            for (i in s) {
                key[i-'a']++
            }

            if (anagramGroups.containsKey(key)) anagramGroups[key]!!.add(s)
            else anagramGroups[key] = mutableListOf(s)
        }

        return anagramGroups.values.toList()
    }
}
