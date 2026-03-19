package main

import "fmt"

func main() {

	// Variable declarations
	var studentName string = "Mukund"

	var age int = 20
	var percentage float64 = 85.75
	var isPassed bool = true

	// Display variable values
	fmt.Println("Student Name:", studentName)
	fmt.Println("Age:", age)
	fmt.Println("Percentage:", percentage)
	fmt.Println("Passed:", isPassed)

	fmt.Println("\nMarks in 5 Subjects:")

	// Looping construct
	marks := []int{78, 82, 90, 88, 85}
	total := 0

	for i := 0; i < len(marks); i++ {
		fmt.Println("Subject", i+1, ":", marks[i])
		total = total + marks[i]
	}

	// Calculate average
	average := float64(total) / float64(len(marks))

	fmt.Println("\nTotal Marks:", total)
	fmt.Println("Average Marks:", average)
}
