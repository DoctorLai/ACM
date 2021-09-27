// https://helloacm.com/how-to-filter-the-unique-email-addresses/
// https://leetcode.com/problems/unique-email-addresses/
// MEDIUM, HASH MAP

/**
 * @param {string[]} emails
 * @return {number}
 */
var numUniqueEmails = function(emails) {
    var data = new Set();
    emails.forEach(function(v) {
        var arr = v.split("@");
        arr[0] = arr[0].replace(/\./g, '');
        arr[0] = arr[0].replace(/(\+.*)/g, '');
        data.add(arr.join("@"));
    });
    return data.size;
};
