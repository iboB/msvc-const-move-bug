# MSVC const move bug

MSVC can be made to move a const variable and take its contents as if it is not const with no errors or even warnings whatsoever.

A demo and CI which showcase the bug are included in this repo.

## Notes

This is only reproducible with `/permissive` which is the default if `/permissive-` is not specified. For example for projects generated by CMake.

Specifying `/permissive-` (which is the default for projects generated by Visual Studio) works as expected and doesn't display the bug.

The open issue on Microsoft Developer Community is [here](https://developercommunity.visualstudio.com/t/a-const-variable-can-be-moved-losing-its-contents/1540939)
