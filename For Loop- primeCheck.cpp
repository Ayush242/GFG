What do you do when you need to execute certain statements more than once? You put them in a loop. Loops are very powerful. Majority of coding questions need loops to work. You can't even input testcases without loops!
Here, we will use for loop and check if the given number n is prime or not.
Note: A number is prime if it's divisible ONLY by itself and 1 and not any other number. Also, 1 is not prime.

Example 1:
Input:
n = 1
Output:
No

Example 2:
Input:
n = 2
Output:
Yes
User Task:
Your task is to complete the provided function isPrime() which should return a string "Yes" if n is prime and "No" if not.

Constraints:
1 ≤ n ≤ 1000

string isPrime(int n) {
  if(n==1) return "No";
  for (int i = 2; i <= sqrt(n); i++) {
      // Write your logic here
      // Return "Yes" if n is prime, else return "No"
      /*n is prime only if it is not divisible by any i.
      We will not reach till n and 1 is already discarded*/
      if(n%i==0){
          return "No";
      }
  }
  return "Yes";
}
