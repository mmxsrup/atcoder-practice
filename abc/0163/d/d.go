package main

import (
	"fmt"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)

	ans := 0
	for i := k; i <= n + 1; i++ {
		// [n - i + 1, ... n]
		smax := i * (n - i + 1 + n) / 2
		// [0, ... i - 1]
		smin := i * (i - 1) / 2
		// fmt.Println(smax, smin)
		ans += smax - smin + 1
		ans %= int(1e9) + 7
	}

	fmt.Println(ans);
}
