

void main() {
    _TCHAR a[] = _TEXT("ERNEST SYSTEM ALTOVSKYI DDKE");
    wcout << "Start: " << a << endl;
    for (int i = 0; i < _tcslen(a); i++) {
        if (a[i] == _TEXT(' '))
            a[i] = _TEXT('\t');
    }
    wcout << "Result: " << a << endl;
    system("pause");
}



void main() {
    _TCHAR a[] = _TEXT("ERNEST2123SYS||@@M43566@@@5ALTOVSKYI/9876DDKE1234");
    wcout << "Start: " << a << endl;
    int bukvy = 0, tsifry = 0, simvoly = 0;
    for (size_t i = 0; i < _tcslen(a); i++) {
        if (a[i] > 48 && a[i] < 57)
            tsifry++;
        else if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
            bukvy++;
        else
            simvoly++;
    }
    wcout << "bukvy: " << bukvy << endl << "tsifry: " << tsifry << endl << "simvoly: " << simvoly << endl;
    system("pause");
}




void main() {
    _TCHAR a[] = _TEXT("The meaning of life is like an abstraction in OOP, but in reality.");
    wcout << "Start: " << a << endl;
    int сount = 0;
    bool inWord = false;
    for (int i = 0; i < _tcslen(a); i++) {
        if (iswalpha(a[i])) {
            if (!inWord) {
                inWord = true;
                сount++;
            }
        }
        else {inWord = false;}
    }
    wcout << "Word count: " << сount << endl;
    system("pause");
}




void main() {
    setlocale(LC_ALL, "Russian");
    _TCHAR a[] = _TEXT("Акакака");
    wcout << "Start: " << a << endl;
    int count = 0;
    for (size_t i = 0; i < _tcslen(a); i++) {
        _TCHAR b = _totlower(a[i]);
        if (b == _TEXT('а') || b == _TEXT('е') || b == _TEXT('ё') || b == _TEXT('и') || b == _TEXT('о') || 
            b == _TEXT('у') || b == _TEXT('ы') || b == _TEXT('э') || b == _TEXT('ю') ||
            b == _TEXT('я')) {++count;}
    }
    wcout << "Count: " << count << endl;
    system("pause");
}





bool isPalindrome(const _TCHAR*);

int main() {
    _TCHAR a[] = _TEXT("DOKOD");
    wcout << "Start: " << a << endl;
    if (isPalindrome(a))
        wcout << "It's a palindrome!" << endl;
    else
        wcout << "It's not a palindrome!" << endl;

    system("pause");
    return 0;
}

bool isPalindrome(const _TCHAR* c) {
    int length = _tcslen(c);
    for (int i = 0; i < length / 2; ++i) {
        if (c[i] != c[length - 1 - i])
            return false;
    }
    return true;
}




void removeSymbol(_TCHAR*, size_t);

int main() {
    TCHAR a[] = _TEXT("The meaning of life is ...");
    wcout << "Start: " << a << endl;
    size_t posRemove = 0;
    removeSymbol(a, posRemove);
    wcout << "Removing position is " << posRemove << ", result: " << a << endl;
    system("pause");
    return 0;
}

void removeSymbol(_TCHAR* c, size_t l) {
    if (l >= _tcslen(c))
        return;
    for (size_t i = l; i < _tcslen(c); i++)
        c[i] = c[i + 1];
}




void removeAllElems(_TCHAR* c, _TCHAR toRemove) {
    size_t length = _tcslen(c);
    size_t ind = 0;
    for (size_t i = 0; i < length; i++) {
        if (c[i] != toRemove) {
            c[ind] = c[i];
            ind++;
        }
    }
    c[ind] = _TEXT('\0');
}

void main() {
    _TCHAR a[] = _TEXT("The meaning of life is ...");
    _TCHAR r = _TEXT('e');
    wcout << "Start: " << a << endl;
    removeAllElems(a, r);
    wcout << "Removing elem is " << r << ", result: " << a << endl;
    system("pause");
}



void insertCharacter(_TCHAR* c, size_t pos, _TCHAR ins) {
    int length = _tcslen(c);
    if (pos >= 0 && pos <= length) {
        for (int i = length; i > pos; i--) {
            c[i] = c[i - 1];
        }
        c[pos] = ins;
    }
}

void main() {
    _TCHAR a[] = _TEXT("The meaning of life is ...");
    wcout << "Start: " << a << endl;
    _TCHAR insElem = _T('E'); 
    size_t posIns = 10;
    insertCharacter(a, posIns, insElem);
    wcout << "Integrated elem is " << insElem << ", result: " << a << endl;
}
