/* Website: Arrayed.Net
 * You decide to test if your oddly-mathematical heating company is fulfilling its All-Time Max, Min, Mean and Mode Temperature Guarantee™.
 * Write a class TempTracker with these methods:
 * 
 * insert()—records a new temperature
 * get_max()—returns the highest temp we've seen so far
 * get_min()—returns the lowest temp we've seen so far
 * get_mean()—returns the mean of all temps we've seen so far
 * get_mode()—returns the mode of all temps we've seen so far
 * Optimize for space and time. Favor speeding up the getter functions (get_max(), get_min(), get_mean(), and get_mode()) 
 * over speeding up the insert() function.
 * 
 * get_mean() should return a float, but the rest of the getter functions can return integers. 
 * Temperatures will all be inserted as integers. We'll record our temperatures in Fahrenheit, so we can assume they'll 
 * all be in the range 0..110.
 * 
 * If there is more than one mode, return any of the modes.
 *  https://www.interviewcake.com/question/python/temperature-tracker
 */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void insertTemperature(int temp[],int n){
    printf("Enter the temperatures:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&temp[i]);
    }
    // return temparr;
}
int getMax(int temp[],int n){
    int max=INT_MIN;
    for (int i=0;i<n;i++){
       if(max<temp[i]){
          max=temp[i];}
    }
    return max;
}
int getMin(int temp[],int n){
    int min=INT_MAX;
    for (int i=0;i<n;i++){
       if(min>temp[i]){
          min=temp[i];}
    }
    return min;
}
double getMean(int temp[],int n){
    int i, sum=0;
    for(i=0;i<n;i++){
        sum=sum+temp[i];
    }
    double mean=(double)sum/(double)n;
return mean;
}
int getMode(int temp[],int n){
     int i, j, maxElement, count;
     int maxCount = 0;
    for(i = 0; i< n; i++)  
    {
        count = 1;
        for(j = i+1; j < n; j++)  
            if(temp[j] == temp[i])
            {
                count++;    
                if(count > maxCount)
                {
                    maxElement = temp[j];
                }
            }
        }
    
    return maxElement;
}
int main(){
    int i , n;
    printf("Enter the no of temp: \t");
    scanf("%d",&n);
    int temp[n];
    insertTemperature(temp,n);
    int max=getMax(temp,n);
    int min=getMin(temp,n);
    double mean=getMean(temp,n);
    int mode =getMode(temp,n);
    printf("Maximum temp:%d\n",max);
    printf("Minimum temp:%d\n",min);
    printf("Mean temp:%.2lf\n",mean);
    printf("Mode:%d\n",mode);
}