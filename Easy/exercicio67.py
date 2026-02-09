class Solution:
    def addBinary(self, a: str, b: str) -> str:
        i = len(a) - 1
        j = len(b) - 1
        carry = 0
        resp = []
        while i >= 0 or j >= 0 or carry:
            soma = carry
            if i >= 0:
                soma += int(a[i])
                i -= 1
            if j >= 0:
                soma += int(b[j])
                j -= 1
            resp.append(str(soma % 2))
            carry = soma // 2
        return ''.join(reversed(resp))
