### Описание функций
| No  | Функция                                              | Прототип | Описание  |
| :-: | :------------ | :-------: | :----: |
| 1   | ft_bzero      | void ft_bzero(void *s, size_t n);| Функция bzero устанавливает первые n байт области, начинающейся с s, в ноль (байты, содержащие '\0').  |   
| 2   | ft_memset     | void *ft_memset(void *b, int c, size_t len); | Функция memset заполняет первые len байт области памяти, на которую указывает аргумент b, символом, код которого указывается аргументом c.  |
| 3   | ft_memcpy     | void *ft_memcpy(void *dst, const void *src, size_t n); | Функция memcpy копирует n байт из массива (области памяти), на который указывает аргумент src, в массив (область памяти), на который указывает аргумент dst. Если массивы перекрываются, результат копирования будет не определен. |
| 4   | ft_memccpy    | void *ft_memccpy(void *dst, const void *src, int c, size_t n); | Функция memcpy копирует данные из массива (области памяти), на который указывает аргумент src, в массив (область памяти), на который указывает аргумент dst пока не встретится символ, код которого соответствует указанному в аргументе c или пока не будет скопировано n байт данных. |
| 5   | ft_memmove    | void *ft_memmove(void *dst, const void *src, size_t len); | Функция memmove копирует n байт из массива (области памяти), на который указывает аргумент src, в массив (область памяти), на который указывает аргумент dst. При этом массивы (области памяти) могут пересекаться. |
| 6   | ft_memchr     | void *ft_memchr(const void *s, int c, size_t n); | Функция memchr ищет вхождение в массив (область памяти) символа, код которого задан аргументом c, сравнивая каждый байт массива (области памяти) определенный как unsigned char с кодом искомого символа. Если искомый символ найден, то возвращается адрес найденного символа и сравнение завершается. Если, после проверки n байтов, искомый символ не найден, то сравнение прекращается и функция возвращает NULL. |
| 7   | ft_memcmp     | int ft_memcmp(const void *s1, const void *s2, size_t n); | Функция memcmp побайтно сравнивает два массива (области памяти), на которые указывают аргументы s1 и s2. Каждый байт массива определяется типом unsigned char. Сравнение продолжается, пока не будут проверено n байт или пока не встретятся отличающиеся байты. |
