void findLargestOddSubstring(string num) {
    int i;
    for (i = num.length() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 != 0) {
            break;
        }
    }

    if (i == -1) {
        cout << "-1" << endl;
    } else {
        cout << num.substr(0, i + 1) << endl;
    }
}
