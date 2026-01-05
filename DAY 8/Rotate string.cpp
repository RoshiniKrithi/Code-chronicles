bool canRotate(const string &s, const string &goal) {
    if (s.length() != goal.length()) return false;
    string doubled = s + s; // Concatenate s with itself
    return doubled.find(goal) != string::npos;
}