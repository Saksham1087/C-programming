package main

import "fmt"

// We must define 'grade' as a type before using it
type grade float64

func main() {
	var x int = 10
	var y grade = 12.12
	name := "saksham"
	ispresent := true // Simplified declaration

	// %T (capital T) is used for Type, %v is for Value
	fmt.Printf("variable x: %v, type: %T\n", x, x)

	// Printing other variables to avoid "unused variable" errors
	fmt.Printf("Name: %s, Present: %t, Grade: %v\n", name, ispresent, y)
}
