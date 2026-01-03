class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs: return ""
        resp = strs[0]
        for s in strs[1:]:
            while not s.startswith(resp):
                resp = resp[:-1]
                if resp == "": return ""
        return resp
