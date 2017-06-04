// RUN: %clang_cc1 -triple x86_64-win32-macho -verify -fdeclspec %s

// selectany is not supported for macho object files.
__declspec(selectany) int x1; // expected-warning{{__declspec attribute 'selectany' is not supported}}
