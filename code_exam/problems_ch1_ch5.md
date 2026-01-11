# Chapter 1 — Basics and I/O

1. Print a phrase with quotes.
   - Task: Print: I learnt it from "helloworld_275"
   - Input: none
   - Output: one line with exact phrase.
   - Hint: escape quotes or use single quotes in code.

2. Hello with name (trim whitespace).
   - Task: Read a name (line) and print: Hello, NAME
   - Input: one line (name, may have spaces)
   - Output: single line greeting.

3. Repeat lines N times.
   - Task: Read an integer N and a string S. Print S on its own line N times.
   - Input: N (int), then one word S
   - Output: N lines, each contains S.
   - Note: handle N >= 0.

# Chapter 2 — Variables and simple expressions

1. Sum two numbers with types.
   - Task: Read two numbers (may be int or float) and print their sum respecting decimal if present.
   - Input: two numbers separated by space
   - Output: their sum

2. Swap two values.
   - Task: Read two integers and print them swapped.
   - Input: a b
   - Output: b a

3. Reverse five numbers.
   - Task: Read five integers and print them in reverse order separated by space.
   - Input: five integers
   - Output: reversed order

4. Average and rounding (intermediate).
   - Task: Read N (int) then N floats. Print average with two decimals.
   - Input: N then N floats
   - Output: average formatted to two decimal places.

5. Mini-project — Simple calculator.
   - Task: Read two doubles and an operator (+,-,*,/). Compute and print result. If division by zero, print "ERROR".
   - Input: a b op
   - Output: result or ERROR
   - Note: handle invalid operator with "INVALID".

# Chapter 3 — const, auto, endl vs \n

1. auto type demonstration.
   - Task: Declare variables using auto and print types via examples (print values).
   - Input: none
   - Output: printed values (no type introspection required).

2. const correctness.
   - Task: Define const int LIMIT = 10; attempt to add 1 to a variable and print both original and attempted change result (show original unchanged).
   - Input: none
   - Output: demonstrate value.

3. endl vs \n output behavior.
   - Task: Print two lines, one with '\n' and one with std::endl. (Observe not required in judge)
   - Input: none

4. Use auto and const together.
   - Task: Read a number, store it in a const auto variable and print it. Explain (in a comment) why it cannot be changed.
   - Input: one number
   - Output: the number


# Chapter 4 — Operators and precedence

1. Basic arithmetic.
   - Task: Read two floats and print sum, difference, product, quotient each on a new line.
   - Input: a b
   - Output: four lines: a+b, a-b, a*b, a/b (if b==0 print ERROR for quotient)

2. Relational outputs.
   - Task: Read two ints and print 6 relational results (== != > < >= <=) as 0 or 1 separated by spaces.
   - Input: a b
   - Output: six numbers

3. Logical table small task.
   - Task: Given two boolean inputs (0/1) print result of a&&b and a||b.
   - Input: a b
   - Output: two values

4. Operator precedence expression.
   - Task: Compute value of expression: a + b * c / d - (e % f) for integers, with safe division checks.
   - Input: a b c d e f
   - Output: single integer or "ERROR" if division by zero.


# Chapter 5 — Control flow basics

1. If-else sign detection.
   - Task: Read an integer and print "positive", "negative" or "zero".
   - Input: one integer

2. Check even/odd.
   - Task: Read one integer and print "even" or "odd".
   - Input: one integer

3. Nested if small task.
   - Task: Read age and hasID (0/1). Print "Enter" only if age>=18 and hasID==1 else print reason.
   - Input: age hasID

4. Multiple branches.
   - Task: Read three integers and print the largest. Do not use arrays or std::max.
   - Input: a b c
   - Output: largest integer

5. Mini-project — simple grade system.
   - Task: Read a score (0..100). Print grade: A(90+), B(75..89), C(60..74), D(40..59), F(<40). Also print "Pass" or "Fail".
   - Input: score
   - Output: two lines: grade, Pass/Fail
