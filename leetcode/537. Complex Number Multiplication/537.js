// https://helloacm.com/the-complex-number-multiplication-function/
// https://leetcode.com/problems/complex-number-multiplication/

/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var complexNumberMultiply = function(a, b) {
    const process = (x) => {
        x = x.split('+');
        const a = x[0];
        const b = x[1].slice(0, -1);
        return [a, b];
    }
    const aa = process(a);
    const bb = process(b);
    const xx = aa[0] * bb[0] - aa[1] * bb[1];
    const yy = aa[0] * bb[1] + aa[1] * bb[0];
    return `${xx}+${yy}i`;
};
