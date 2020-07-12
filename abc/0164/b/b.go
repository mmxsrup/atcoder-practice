package main

import (
	"fmt"
)

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)
	i := 0
	for a > 0 && c > 0 {
		if i % 2 == 0 {
			c -= b
		} else {
			a -= d
		}
		i++
	}
	if a <= 0 {
		fmt.Println("No")
	} else {
		fmt.Println("Yes")
	}
}
