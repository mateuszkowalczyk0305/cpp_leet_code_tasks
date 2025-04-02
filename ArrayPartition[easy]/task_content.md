# 561. Array Partition [Easy]

Given an integer array `nums` of `2n` integers, group these integers into `n` pairs `(a1, b1), (a2, b2), ..., (an, bn)` such that the sum of `min(ai, bi)` for all `i` is **maximized**. Return the maximized sum.

---

## 🧪 Examples

### Example 1:
**Input:**  
```
nums = [1,4,3,2]
```
**Output:**  
```
4
```
**Explanation:**  
When we pair (1, 2) and (3, 4), the sum of min(1, 2) + min(3, 4) = 1 + 3 = 4.

---

### Example 2:
**Input:**  
```
nums = [6,2,6,5,1,2]
```
**Output:**  
```
9
```
**Explanation:**  
When we pair (2, 1), (2, 5), and (6, 6), the sum of min(2, 1) + min(2, 5) + min(6, 6) = 1 + 2 + 6 = 9.

---

## 📌 Constraints
- `1 <= n <= 10⁴`
- `nums.length == 2 * n`
- `-10⁴ <= nums[i] <= 10⁴`

---

## 🔗 Source
[LeetCode Problem #561 – Array Partition](https://leetcode.com/problems/array-partition/)

## Result
![LeetCode Result](../assets/arrayPartion.png)

