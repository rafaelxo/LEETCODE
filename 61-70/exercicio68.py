class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        resp = []
        i = 0
        while i < len(words):
            lWords = []
            lLen = 0
            while i < len(words) and lLen + len(words[i]) + len(lWords) <= maxWidth:
                lWords.append(words[i])
                lLen += len(words[i])
                i += 1
            if i == len(words) or len(lWords) == 1:
                line = " ".join(lWords)
                line += " " * (maxWidth - len(line))
                resp.append(line)
                continue
            tSpaces = maxWidth - lLen
            gaps = len(lWords) - 1
            sEach = tSpaces // gaps
            eSpaces = tSpaces % gaps
            line = ""
            for j in range(gaps):
                line += lWords[j]
                line += " " * (sEach + (1 if j < eSpaces else 0))
            line += lWords[-1]
            resp.append(line)
        return resp
