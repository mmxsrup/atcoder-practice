package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	set := make(map[string]int)
	for i := 0; i < n; i++ {
		var s string
		fmt.Scan(&s)
		set[s] = 1
	}
	fmt.Println(len(set))
}
