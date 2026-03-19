function showDetails() {
    var nameInput = document.getElementById("name");
    var ageInput = document.getElementById("age");
    var courseInput = document.getElementById("course");
    var result = document.getElementById("result");
    var name = nameInput.value;
    var age = Number(ageInput.value);
    var course = courseInput.value;
    result.innerHTML = "\n    Student Details:<br>\n    Name: ".concat(name, "<br>\n    Age: ").concat(age, "<br>\n    Course: ").concat(course, "\n    ");
}
