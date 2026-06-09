function getUsers() {
    fetch("http://localhost:8080/users")
        .then(function (response) {
            return response.json();
        })
        .then(function (data) {
            var result = document.getElementById("result");
            result.innerHTML = "";

            data.forEach(function (user) {
                result.innerHTML += "<li>" + user.name + " - Age: " + user.age + "</li>";
            });
        })
        .catch(function (error) {
            console.log("Error:", error);
        });
}