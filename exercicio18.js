var fourSum = function (nums, target) {
    const resp = [];
    const n = nums.length;
    if (n < 4) return resp;
    nums.sort((a, b) => a - b);
    for (let i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] === nums[i - 1]) continue;
        let min1 = nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3];
        if (min1 > target) break;
        let max1 = nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3];
        if (max1 < target) continue;
        for (let j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] === nums[j - 1]) continue;
            let min2 = nums[i] + nums[j] + nums[j + 1] + nums[j + 2];
            if (min2 > target) break;
            let max2 = nums[i] + nums[j] + nums[n - 1] + nums[n - 2];
            if (max2 < target) continue;
            let left = j + 1;
            let right = n - 1;
            while (left < right) {
                let sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum === target) {
                    resp.push([nums[i], nums[j], nums[left], nums[right]]);
                    left++, right--;
                    while (left < right && nums[left] === nums[left - 1]) left++;
                    while (left < right && nums[right] === nums[right + 1]) right--;
                }
                else if (sum < target) left++;
                else right--;
            }
        }
    }
    return resp;
};
