function findBound(nums: number[], target: number, isFirst: boolean): number {
    let left = 0;
    let right = nums.length - 1;
    let bound = -1;
    while (left <= right) {
        const mid = Math.floor((left + right) / 2);
        if (nums[mid] === target) {
            bound = mid;
            if (isFirst) right = mid - 1;
            else left = mid + 1;
        } else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return bound;
}

function searchRange(nums: number[], target: number): number[] {
	const first = findBound(nums, target, true);
    if (first === -1) return [-1, -1];
    const last = findBound(nums, target, false);
    return [first, last];
};
