package main

import "fmt"

func main(){
    // Variables and basic data types in Go
    var x int=10
    var y float64 = 20.5
    name := "Saksham" // Short Variable declaration (type inferred)
    var isPresent bool = true
    fmt.Printf("Variable X: %v, Type: %T\n", x,x)
    fmt.Printf("Variable y: %v, Type: %T\n", y,y)
    fmt.Printf("Variable name: %v, Type: %T\n", name, name)
    fmt.Printf("Variable isPresent: %v, Type: %T\n", isPresent, isPresent)
}