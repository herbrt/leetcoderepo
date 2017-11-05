int maxArea(int* height, int heightSize) {
    int i;
    int left = 0,right = heightSize-1;
    int rsl = 0, tmp;
    while(left != right)
    {
        tmp = (height[left] < height[right]?height[left]*(right-left):height[right]*(right-left));
        rsl = tmp > rsl?tmp:rsl;
        height[left] < height[right]?left++:right--;
    }
    
    
    return rsl;
}
