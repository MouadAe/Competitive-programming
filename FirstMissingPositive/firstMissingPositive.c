// leetCode.com Problem n'41
int firstMissingPositive(int* nums, int numsSize){
    int i=1,j=0;
    while(j < numsSize){
        if(nums[j]==i){
            j=0;
            i++;
        }
        else j++;
    }
    return i;
}
