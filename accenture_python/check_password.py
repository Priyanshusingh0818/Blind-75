def checkpassword(s):
    if len(s) < 4:
        return 0
    if s[0].isdigit():
        return 0

    has_digit = False
    has_capital = False

    for ch in s:

        if ch ==' ' or ch == '/':
            return 0

        if ch.isdigit():
            has_digit = True
        if ch.isupper():
            has_capital = True

    if has_digit and has_capital:
        return 1

    return 0