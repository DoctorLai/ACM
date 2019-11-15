// https://helloacm.com/algorithm-to-find-duplicate-files-in-system-using-hash-map/
// https://leetcode.com/problems/find-duplicate-file-in-system/
// MEDIUM, HASH MAP

/**
 * @param {string[]} paths
 * @return {string[][]}
 */
var findDuplicate = function(paths) {
    let files = { };
    paths.map(function(p) {
        const arr = p.split(" ");
        const dir = arr[0];
        for (let i = 1; i < arr.length; ++ i) {
            let idx = arr[i].indexOf('(');
            const file = dir + "/" + arr[i].substring(0, idx);
            const content = arr[i].substring(idx);
            if (Array.isArray(files[content])) {
                files[content].push(file);
            } else {
                files[content] = [file];
            }
        }
    });
    let result = [];
    Object.values(files).map(function(x) {
        if (x.length > 1) {
            result.push(x);
        }
    });
    return result;
};
