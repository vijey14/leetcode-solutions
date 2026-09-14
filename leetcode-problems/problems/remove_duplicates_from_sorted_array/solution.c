int removeDuplicates(int* nums, int numsSize) {
    int i , k = 0;
    int j = 0;
    for (i = 0 ; i < numsSize ; i++){
        if (i == 0){
            nums[j] = nums[i];
            k++;
            j++;
        }
        else{
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                k++;
                j++;
            }
        }
        
    }
    return k;
}