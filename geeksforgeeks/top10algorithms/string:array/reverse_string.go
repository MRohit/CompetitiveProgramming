// Reverse an array without affecting special characters
// Time Complexity:  O(n)
package main

import ("fmt"
  "unicode")

func main () {
  var str string = "a!!!b.c.d,e'f,ghi"
  l := 0;
  r := len(str)-1;

  fmt.Printf("Length:%d",r)

  for l < r {

    if(!unicode.IsSymbol(str[l])) {
      l++;
    }else if(!unicode.IsSymbol(str[r])) {
      r--;
    }else {
      temp:=str[l];
      str[l] = str[r];
      str[r] = temp;
      l++;
      r--;
    }
  }
}
