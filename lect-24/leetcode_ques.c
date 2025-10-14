#include <stdio.h>
int main()
{// maximum water containing problem
    int height[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int i = 0;
    int j = 8;
    int maxarea = 0;
    int h, width, area;
    while (i < j)
    {
        if (height[i] < height[j])
        {
            h = height[i];
        }
        else
        {
            h = height[j];
        }
        width = j - 1;

        area = h * width;
        if (area > maxarea)
        {
            maxarea = area;
        }
        if (height[i] < height[j])
        {
            i++;
        }
        else
            j--;
    }
    printf("%d", maxarea);
    return 0;
}