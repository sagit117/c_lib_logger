**обязательно для добавления перед сбокой проекта**

```c
Logger logger; // глобальная переменная
```


** Установка переменных логгера. **
```c
// в функции main
logger.level = ALL;
logger.max_size = 255;
logger.out = stdout;
```
