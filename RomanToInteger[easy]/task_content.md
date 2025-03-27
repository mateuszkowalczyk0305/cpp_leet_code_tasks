# 13. Roman to Integer [Easy]

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

For example:  
`II = 2`, `XII = 12`, `XXVII = 27`

Roman numerals are usually written from largest to smallest from left to right.  
But some numbers use subtraction:

- `IV = 4` (5 - 1)  
- `IX = 9` (10 - 1)  
- `XL = 40` (50 - 10)  
- `XC = 90` (100 - 10)  
- `CD = 400` (500 - 100)  
- `CM = 900` (1000 - 100)

---

## 🧪 Examples

### Example 1:
**Input:**  
`s = "III"`  
**Output:**  
`3`  

---

### Example 2:
**Input:**  
`s = "LVIII"`  
**Output:**  
`58`  
**Explanation:**  
L = 50, V = 5, III = 3 → 50 + 5 + 3 = 58

---

### Example 3:
**Input:**  
`s = "MCMXCIV"`  
**Output:**  
`1994`  
**Explanation:**  
M = 1000, CM = 900, XC = 90, IV = 4 → 1000 + 900 + 90 + 4 = 1994

---

## 📌 Constraints
- 1 ≤ `s.length` ≤ 15  
- `s` contains only characters: `('I', 'V', 'X', 'L', 'C', 'D', 'M')`  
- It is guaranteed that `s` is a valid Roman numeral representing a number in the range [1, 3999]

---

## 🔗 Source  
[LeetCode Problem #13 – Roman to Integer](https://leetcode.com/problems/roman-to-integer/)

## Result  
![LeetCode Result](../assets/romanToInteger.png)
