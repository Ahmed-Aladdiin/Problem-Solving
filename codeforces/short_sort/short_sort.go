package main

import (
	"fmt"
)

func main() {
	var it int
	var inputString string

	fmt.Scanln(&it)

	for it > 0 {
		fmt.Scanln(&inputString)
		solve(inputString)
		it--
	}
}

func solve(s string) {
	if s == "cab" || s == "bca" {
		fmt.Println("NO")
	} else {
		fmt.Println("YES")
	}
}
