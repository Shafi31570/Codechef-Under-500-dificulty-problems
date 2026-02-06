# Codechef-Under-500-dificulty-problems
There are some cpp files with some specific problem solution from chodechef site.
## Clear Day
Chef classifies a day to be either rainy, cloudy, or clear. In a particular week, Chef finds X days to be rainy and Y days to be cloudy. Find the number of clear days in the week.

Input Format
The first and only line of input will contain two space-separated integers X and Y, denoting the number of rainy and cloudy days in the week.

Output Format
Output the number of clear days in the week.

Sample 1:  
Input  
2 3  
2  
Output  

### Explanation:
There are 7 days in a week. If there are 2 rainy days and 3 cloudy days, then the remaining 7−2−3=2 days are clear.

Sample 2:  
Input  
3 4  
0  
Output  
If there are 3 rainy days and 4 cloudy days, then the remaining 7−3−4=0 days are clear.

## Double Rent
Chefina decided to move into Chef's apartment. Chef was initially paying a rent of X rupees. Since Chefina is moving in, the owner decided to double the rent.  
Find the final rent Chef needs to pay.

Input Format  
The input consists of a single integer X, denoting the rent Chef was initially paying.

Output Format  
Output on a new line, the final rent Chef needs to pay.

Sample 1:  
Input  
2  
Output  
4  
### Explanation:
Chef was initially paying 2 rupees. After Chefina moves in, he needs to pay 2-2=4 rupees.

Sample 2:  
Input  
3
Output  
6
### Explanation:
Chef was initially paying 3 rupees. After Chefina moves in, he needs to pay 2-3=6 rupees.

Sample 3:
Input  
10  
Output  
20  
### Explanation:
Chef was initially paying 10 rupees. After Chefina moves in, he needs to pay 2*10=20 rupees.

## Saving Taxes
In Chefland, everyone who earns strictly more than Y rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it.

You have earned (X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.

Input Format  
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input consisting of two space separated integers X and Y denoting the amount you earned and the amount above which you will have to pay taxes.  
Output Format  
For each test case, output a single integer, denoting the minimum amount you need to invest.

Sample 1:  
Input  
4  
4 2  
8 7  
5 1  
2 1  
Output  
2  
1  
4  
1  
### Explanation:
Test case 1: The amount above which you will have to pay taxes is 2. Since you earn 4 rupees, you need to invest at least 2 rupees. After investing 2 rupees, you will remain with an effective income 4−2=2 rupees which will not be taxed.  
Test case 2: The amount above which you will have to pay taxes is 7. Since you earn 8 rupees, you need to invest at least 1 rupees.  
Test case 3: The amount above which you will have to pay taxes is 1. Since you earn 5 rupees, you need to invest at least 4 rupees.  
Test case 4: The amount above which you will have to pay taxes is 1. Since you earn 2 rupees, you need to invest at least 1 rupees.

## Masterchef finals Statement:
Chef has been working hard to compete in MasterChef. He is ranked X out of all contestants. However, only 10 contestants would be selected for the finals.  
Check whether Chef made it to the top 10 or not?  

Input Format  
The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of one integers X — the current rank of Chef.

Output Format  
For each test case, output on a new line, YES, if Chef made it to the top 10 and NO otherwise.

Sample 1:  
Input  
4  
15  
10  
1  
50  

Output  
NO  
YES  
YES  
NO

### Explanation:
Test case 1: Chef's rank is 15 which is greater than 10. Thus, Chef did not make it to the top  10.  
Test case 2: Chef's rank is 10 which is equal to 10. Thus, Chef made it to the top 10.  
Test case 3: Chef made it to the top 10, as his rank is 1.  
Test case 4: Chef did not make it to the top 10 as his rank is 50.  
