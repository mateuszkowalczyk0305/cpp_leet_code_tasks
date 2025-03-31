# 20. Valid Parentheses [Easy]

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is **valid**.

An input string is valid if:

- Open brackets must be closed by the **same type of brackets**.
- Open brackets must be closed in the **correct order**.
- Every close bracket has a corresponding open bracket of the same type.

---

## 🧪 Examples

### Example 1:
**Input:**  
`s = "()"`  
**Output:**  
`true`  

---

### Example 2:
**Input:**  
`s = "()[]{}"`  
**Output:**  
`true`  

---

### Example 3:
**Input:**  
`s = "(]"`  
**Output:**  
`false`  

---

### Example 4:
**Input:**  
`s = "([])"`  
**Output:**  
`true`  

---

## 📌 Constraints
- 1 ≤ `s.length` ≤ 10⁴  
- `s` consists of parentheses only `'()[]{}'`  

---

## 🔗 Source  
[LeetCode Problem #20 – Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)

## Result  
![LeetCode Result](../assets/validParentheses.png)
