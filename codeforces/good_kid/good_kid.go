package main

import (
	"fmt"
)

func main() {
	var it int
	fmt.Scanln(&it)

	for it > 0 {
		solve()
		it--
	}
}

func solve() {
	leng, smallest, value := 0, 1, 0
	fmt.Scanln(&leng)
	myArr := make([]int, leng)

	for i := range myArr {
		myArr[i] = 1
	}

	for i := 0; i < leng; i++ {
		fmt.Scan(&value)
		for j := 0; j < leng; j++ {
			if i == j {
				myArr[j] *= (value + 1)
			} else {
				myArr[j] *= value
			}
		}
	}

	smallest = myArr[0]
	for i := 1; i < leng; i++ {
		if myArr[i] > smallest {
			smallest = myArr[i]
		}
	}

	fmt.Println(smallest)
}
