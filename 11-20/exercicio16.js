var threeSumClosest = function (nums, target) {
    nums.sort((a, b) => a - b);
    let resp = nums[0] + nums[1] + nums[2];
    for (let i = 0; i < nums.length - 2; i++) {
        let left = i + 1, right = nums.length - 1;
        while (left < right) {
            let sum = nums[i] + nums[left] + nums[right];
            if (Math.abs(sum - target) < Math.abs(resp - target)) resp = sum;
            if (sum === target) return target;
            else if (sum < target) left++;
            else right--;
        }
    }
    return resp;
};
