var isValid = function (s) {
    if (s.length % 2 !== 0) return false;
    let resp = [];
    for (let c of s) {
        if (c === '(') resp.push(')');
        else if (c === '{') resp.push('}');
        else if (c === '[') resp.push(']');
        else if (resp.pop() !== c) return false;
    }
    return resp.length === 0;
};
