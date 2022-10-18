const printRightTriangle = (num: number): void => {
    for (let i = 0; i < num; i += 1) {
        let printString = "";
        for (let j = 0; j < i + 1; j += 1) {
            printString += "* ";
        }

        console.log(printString);
    }
};

printRightTriangle(5);