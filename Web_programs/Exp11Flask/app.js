function addUser() {
    var nameInput = document.getElementById("name");
    fetch("http://127.0.0.1:5000/add", {
        method: "POST",
        headers: {
            "Content-Type": "application/json"
        },
        body: JSON.stringify({ name: nameInput.value })
    })
        .then(function (res) { return res.json(); })
        .then(function (data) {
        alert(data.message);
    });
}
// GET Request
function getUsers() {
    fetch("http://127.0.0.1:5000/get")
        .then(function (res) { return res.json(); })
        .then(function (data) {
        var result = document.getElementById("result");
        result.innerHTML = "";
        data.forEach(function (user) {
            result.innerHTML += "<li>".concat(user.name, "</li>");
        });
    });
}
