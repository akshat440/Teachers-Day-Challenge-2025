 Problem Statement
A string is called a valid palindrome if it reads the same backward as forward, ignoring:

non-alphanumeric characters (spaces, punctuation)

character case (A ≠ a, but we treat them equal here)

🚀 Logic & Approach
The problem is about cleaning the string and then checking if it's the same as its reverse.

🔧 Steps:
Filter: Ignore non-alphanumeric characters using isalnum() and convert all to lowercase.

Two-pointer: Use one pointer from the front and one from the back to compare characters.

Early exit if mismatch found.

🔍 Why This Works
isalnum() filters out anything that’s not a letter or digit.

tolower() standardizes comparison.

Efficient: Only one pass over the string (O(n)) and no extra space required.

🌟 Learning Outcome
Mastered string cleansing techniques.

Hands-on with two-pointer strategy.

Learned how to ignore formatting and check pure logic.

