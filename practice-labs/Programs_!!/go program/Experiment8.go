package main

import (
	"fmt"
	"time"
)

func print_numbers() {
	for i := 1; i <= 5; i++ {
		time.Sleep(400 * time.Millisecond)
		fmt.Println("Number:", i)
	}
}

func print_letters() {
	for ch := 'A'; ch <= 'E'; ch++ {
		time.Sleep(400 * time.Millisecond)
		fmt.Printf("Letter: %c\n", ch)
	}
}

func printOdd() {
	for i := 0; i <= 5; i++ {
		if i%2 != 0 {
			fmt.Println("Odd:", i)
		}
	}
}

func printEven() {
	for i := 0; i <= 5; i++ {
		if i%2 == 0 {
			fmt.Println("Even:", i)
		}
	}
}

func main() {

	printOdd()
	printEven()

	go print_numbers()
	go print_letters()

	time.Sleep(3 * time.Second)
	fmt.Println("Done!")
}
