function addUser(): void {
    let nameInput = document.getElementById("name") as HTMLInputElement;

    fetch("http://127.0.0.1:5000/add", {
        method: "POST",
        headers: {
            "Content-Type": "application/json"
        },
        body: JSON.stringify({ name: nameInput.value })
    })
        .then(res => res.json())
        .then(data => {
            alert(data.message);
        });
}

// GET Request
function getUsers(): void {
    fetch("http://127.0.0.1:5000/get")
        .then(res => res.json())
        .then(data => {
            let result = document.getElementById("result") as HTMLElement;
            result.innerHTML = "";

            data.forEach((user: any) => {
                result.innerHTML += `<li>${user.name}</li>`;
            });
        });
}
