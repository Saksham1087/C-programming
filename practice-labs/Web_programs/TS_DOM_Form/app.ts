
function showDetails(): void {

    let nameInput = document.getElementById("name") as HTMLInputElement;
    let ageInput = document.getElementById("age") as HTMLInputElement;
    let courseInput = document.getElementById("course") as HTMLInputElement;

    let result = document.getElementById("result") as HTMLElement;

    let name: string = nameInput.value;
    let age: number = Number(ageInput.value);
    let course: string = courseInput.value;

    result.innerHTML = `
    Student Details:<br>
    Name: ${name}<br>
    Age: ${age}<br>
    Course: ${course}
    `;
}