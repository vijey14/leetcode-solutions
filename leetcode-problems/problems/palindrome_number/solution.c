bool isPalindrome(int n) {
    int original, remainder;
    long long reverse = 0;
    original = n;

    if(n < 0){
        return false;
    }

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse) {
        return true;
    }
    else {
        return false;
    }
}