package main

import (
	"encoding/json"
	"net/http"
)

// User struct
type User struct {
	Name string `json:"name"`
	Age  int    `json:"age"`
}

var users = []User{
	{Name: "Saksham", Age: 20},
	{Name: "Mukund", Age: 22},
}

// ✅ CORS Middleware
func enableCORS(w http.ResponseWriter) {
	w.Header().Set("Access-Control-Allow-Origin", "*")
	w.Header().Set("Access-Control-Allow-Methods", "GET, POST, OPTIONS")
	w.Header().Set("Access-Control-Allow-Headers", "Content-Type")
}

func getUsers(w http.ResponseWriter, r *http.Request) {

	enableCORS(w)

	// ✅ Handle preflight request
	if r.Method == "OPTIONS" {
		w.WriteHeader(http.StatusOK)
		return
	}

	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(users)
}

func main() {
	http.HandleFunc("/users", getUsers)

	println("Server running at http://localhost:8080")
	http.ListenAndServe(":8080", nil)
}
