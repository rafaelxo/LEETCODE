var generate = function(numRows) {
    const resp = [];
    for (let i = 0; i < numRows; i++) {
        const row = new Array(i + 1).fill(1);
        for (let j = 1; j < i; j++) row[j] = resp[i - 1][j - 1] + resp[i - 1][j];
        resp.push(row);
    }
    return resp;
};
