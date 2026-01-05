var letterCombinations = function (digits) {
    if (!digits || digits.length === 0) return [];
    const map = {
        '2': 'abc',
        '3': 'def',
        '4': 'ghi',
        '5': 'jkl',
        '6': 'mno',
        '7': 'pqrs',
        '8': 'tuv',
        '9': 'wxyz'
    };
    const resp = [];
    function backtrack(i, p) {
        if (i === digits.length) {
            resp.push(p);
            return;
        }
        const letters = map[digits[i]];
        for (let c of letters) backtrack(i + 1, p + c);
    }
    backtrack(0, "");
    return resp;
};
