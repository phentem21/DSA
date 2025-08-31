class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d1 = {}
        d2 = {}
        for x, y in zip(s, t):
            if (x in d1 and y in d2 and d1[x] == y and d2[y] == x) or (x not in d1 and y not in d2):
                d1[x] = y
                d2[y] = x
            else:
                # print(d)
                return False
        
        return True