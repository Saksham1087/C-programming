function add(): void {
    let a = Number((document.getElementById("num1") as HTMLInputElement).value);
    let b = Number((document.getElementById("num2") as HTMLInputElement).value);
    document.getElementById("result")!.innerHTML = "Result: " + (a + b);
}

function subtract(): void {
    let a = Number((document.getElementById("num1") as HTMLInputElement).value);
    let b = Number((document.getElementById("num2") as HTMLInputElement).value);
    document.getElementById("result")!.innerHTML = "Result: " + (a - b);
}

function multiply(): void {
    let a = Number((document.getElementById("num1") as HTMLInputElement).value);
    let b = Number((document.getElementById("num2") as HTMLInputElement).value);
    document.getElementById("result")!.innerHTML = "Result: " + (a * b);
}

function divide(): void {
    let a = Number((document.getElementById("num1") as HTMLInputElement).value);
    let b = Number((document.getElementById("num2") as HTMLInputElement).value);

    if (b === 0) {
        document.getElementById("result")!.innerHTML = "Cannot divide by zero";
    } else {
        document.getElementById("result")!.innerHTML = "Result: " + (a / b);
    }
}