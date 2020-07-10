package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	cnt := make([]int, n)
	for i := 1; i < n; i++ {
		var a int
		fmt.Scan(&a)
		cnt[a - 1]++;
	}

	for i := 0; i < n; i++ {
		fmt.Println(cnt[i])
	}
}
