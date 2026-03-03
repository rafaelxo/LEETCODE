int majorityElement(int* nums, int numsSize) {
    int resp = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) resp = nums[i];
        if (nums[i] == resp) count++;
        else count--;
    }
    return resp;
}
