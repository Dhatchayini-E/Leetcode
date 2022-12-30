int trap(int* height, int heightSize){
    int left,right,leftmax,rightmax,res;
    left=0;
    right=heightSize-1;
    leftmax=0;
    rightmax=0;
    res=0;
    
    while(left<right){
        if(height[left]<height[right]){
            if(height[left]>leftmax){
                leftmax=height[left];
            }else{
                res += leftmax-height[left];
            }
            left++;
        }
        else{
            if(height[right]>rightmax){
                rightmax=height[right];
            }
            else{
                res += rightmax-height[right];
            }
            right--;
        }
    }
    return res;
    

}
