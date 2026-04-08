class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        mapping = {
            "2" : ["a", "b", "c"],
            "3" : ["d", "e", "f"],
            "4" : ["g", "h", "i"],
            "5" : ["j", "k", "l"],
            "6" : ["m", "n", "o"],
            "7" : ["p", "q", "r","s"],
            "8" : ["t", "u", "v"],
            "9" : ["w", "x", "y", "z"]
        }

        res = []
        curr_str = ""
        
        def backtrack(i, curr_str):

            if len(curr_str) == len(digits):
                res.append(curr_str)
                return


            for char in mapping[digits[i]]:
                backtrack(i+1, curr_str+char)


        if len(digits):
            backtrack(0, curr_str)

        return res

        