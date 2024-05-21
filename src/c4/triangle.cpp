//4.3
#include "stdio.h"

void triangle(double edge1, double edge2, double edge3){
    if(edge1 <= 0 || edge2 <= 0 || edge3 <= 0
    || edge1 + edge2 <= edge3 || edge1 + edge3 <= edge2 || edge2 + edge3 <= edge1){
        printf("Not a triangle!\n");
    } else if((edge1 == edge2 && edge1 != edge3)
    || (edge2 == edge3 && edge1 != edge3)
    || (edge1 == edge3 && edge2 != edge3)){
        printf("isosceles triangle!\n");
    } else if(edge1 == edge2){
        printf("equilateral triangle!\n");
    } else if(edge1 * edge1 + edge2 * edge2 == edge3 * edge3
    || edge2 * edge2 + edge3 * edge3 == edge1 * edge1
    || edge1 * edge1 + edge3 * edge3 == edge2 * edge2){
        printf("right triangle!\n");
    } else{
        printf("normal triangle!\n");
    }
}

int main(){
    double nums[3];
    for (double & num : nums) {
        scanf("%lf", &num);
    }
    triangle(nums[0], nums[1], nums[2]);
    return 0;
}