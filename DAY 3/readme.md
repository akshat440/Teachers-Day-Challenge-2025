📘 Day 2 - FizzBuzz | Teachers' Day LeetCode Challenge
"Programming isn't just about solving problems. It's about solving them elegantly."
— Day 2 Motto

🚩 Problem Statement:
Given an integer n, return a string array answer (1-indexed) such that:

answer[i] == "FizzBuzz" if (i + 1) is divisible by 3 and 5.

answer[i] == "Fizz" if (i + 1) is divisible by 3.

answer[i] == "Buzz" if (i + 1) is divisible by 5.

answer[i] == to_string(i + 1) otherwise.

💡 Intuition & Approach
FizzBuzz is the "Hello World" of logical problems — simple yet full of lessons.

We loop from 1 to n, and for each number:

Check divisibility by both 3 and 5 first (num % 15 == 0) – because it's the most specific condition.

Then check for 3 only.

Then check for 5 only.

If none match, convert number to string.

✅ We used ++i (pre-increment) to keep things efficient and expressive.

✍️ What I Learned
Logical condition order matters — always go most specific to least specific.

Even the simplest problems are a chance to code like a pro.

Clarity > Cleverness. Always.