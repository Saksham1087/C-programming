package main

import (
	"fmt"
	"time"
)

// Task function
func task(name string) {
	for i := 1; i <= 3; i++ {
		fmt.Println(name, "is running - step", i)
		time.Sleep(1 * time.Second)
	}
}
func main() {
	// Running tasks concurrently using goroutines
	go task("Safal's Task 2")
	go task("Safal's Task 1")
	go task("Safal'sTask 3")
	// Wait for goroutines to complete
	time.Sleep(5 * time.Second)
	fmt.Println("All tasks executed")
}
