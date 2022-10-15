const A = [
    [12, 7, 3],
    [4, 5, 6],
    [7, 8, 9]
];

const B = [
    [5, 8, 1, 2],
    [6, 7, 3, 0],
    [4, 5, 9, 1]
];

const multiply = (A: number[][], B: number[][]): number[][] => {
    const res: number[][] = [];

    for (let i = 0; i < A.length; i += 1){
        const temp:number[] = []
        for (let j = 0; j < B[0].length; j += 1) {
            temp.push(0);
        }
        res.push(temp);
    }

    for (let i = 0; i < A.length; i += 1) {
        for (let j = 0; j < B[0].length; j += 1) {
            for (let k = 0; k < B.length; k += 1) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return res;
};

const res = multiply(A, B);

console.log(res);