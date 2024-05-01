[Preious page](../README.md)

## Reverse string

```c++
string s = "apple";
int index = 2;
reverse(s.begin(), s.end());
reverse(s.begin(), s.begin() + index + 1);
```

```python
s = "apple"
index = 2
s = s[::-1]
s = s[:index+1][::-1] + s[index+1:]
```