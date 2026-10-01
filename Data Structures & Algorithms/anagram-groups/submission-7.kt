class Solution {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val anagramGroups = hashMapOf<String, MutableList<String>>()

        for (s in strs) {
            val key = CharArray(26)

            for (i in s) {
                key[i-'a']++
            }

            anagramGroups.getOrPut(String(key)) {mutableListOf()}.add(s)
        }

        return anagramGroups.values.toList()
    }
}
