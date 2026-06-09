function getUsers(): void {
    fetch("http://localhost:8080/users")
        .then(response => response.json())
        .then(data => {
            let result = document.getElementById("result") as HTMLElement;
            result.innerHTML = "";

            data.forEach((user: any) => {
                result.innerHTML += `<li>${user.name} - Age: ${user.age}</li>`;
            });
        })
        .catch(error => {
            console.log("Error:", error);
        });
}
