# **1. Kiểu và biến**
## **a. Kiểu dữ liệu**
Kiểu dữ liệu giống như là các thùng chứa, vật dụng để đựng đồ dùng của chúng ta. VD ca uống nước để đựng nước, cái rổ để đựng rau,…

Mỗi loại dữ liệu có kích thước khác nhau và tương ứng với miền giá trị và loại giá trị mà nó có thể thực hiện. VD kiểu int chiếm 2 byte bộ nhớ và để chứa các số nguyên,…

TT | Kiểu dữ liệu | Kích thước | Miền giá trị
---|--------------|------------|-------------
1|unsigned char|1 byte| 0 đến 255
2|char|1 byte|-128 đến 127
3|enum|2 byte|-32.768 đến 32.767
4|unsigned int|2 byte|0 đến 65.535
5|short int|2 byte|-32.768 đến 32.767
6|int|2 byte|-32.768 đến 32.767
7|unsigned long|4 byte| 0 đến 4.294.967.295
8|long|4 byte|-2.147.483.648 đến 2.147.483.647
9|float|4 byte|3.4x10^-38 đến 3.4x10^38
10|double|8 byte|1.7x10^-308 đến 1.7x10^308
11|long double|10 byte|3.4x10^-4932 đến1.1x10^4932

## **b. Biến - hằng**
Tương tự với mỗi kiểu dữ liệu chung ta có các biến, hằng thuộc kiểu dữ liệu đó và miền dữ liệu tương ứng như trên dùng để lưu giá trị. Cần phân biệt kiểu và biến.
Biến có thể thay đổi trong quá trình thực hiện chương trình còn hằng thì không thể.

### **Cách khai báo biến:**
```C
<kiểu dữ liệu> <tên biến>;
```
>Ví dụ: Khai báo biến dữ liệu.
```C
int a;
int b,c;
unsigned char d = 10;
char e = 20, f = 50;
```
### **Các khai báo hằng:**
```C
const <kiểu dữ liệu> <tên biến>;
```
>Ví dụ: Khai báo hằng.
```C
#define AT  "AT\n\r"
#define PI  3.14159265359

const int a;
const int b, c;
const unsigned char d = 10;
const char e = 20, pi = 3.14;
```
### Chú ý
Tên biến hợp lệ là một chuổi ký tự liên tục gồm: Ký tự chữ, số và dấu gạch dưới. Ký tự đầu của tên bến không được là số. Khi đặt tên không đươc trùng với các biến đã đặt trước đó hoặc từ khóa.

>Ví dụ:

```C
/* Khai báo tên đúng */
int chieu_dai;
int _12A3;

/* Khai báo tên sai */
int chieu rong;
double dien-tich;
int 12A3;
```
### **Vị trí khai báo biến**
Khi lập trình, bạn phải nắm rõ phạm vi của biến. Nếu khai báo và sử dụng không đúng, không rõ ràng sẽ dẫn đến sai sót khó kiểm soát được, vì vậy bạn cần phải xác định đúng vị trí, phạm vi sử dụng biến trước khi sử dụng biến.
+ Khai báo biến ngoài (biến toàn cục): Vị trí biến đặt bên ngoài tất cả các hàm, cấu trúc… Các biến này có ảnh hưởng đến toàn bộ chương trình. Chu trình sống của nó là bắt đầu chạy chương trình đến lúc kết thúc chương trình.

+ Khai báo biến trong (biến cục bộ): Vị trí biến đặt bên trong hàm, cấu trúc…. Chỉ ảnh hưởng nội bộ bên trong hàm, cấu trúc đó…. Chu trình sống của nó bắt đầu từ lúc hàm, cấu trúc được gọi thực hiện đến lúc thực hiện xong.

## **c. Biểu diễn dữ liệu**
### **Số thực:**

Số thực bao gồm các giá trị kiểu `float`, `double`, `long double` thể hiện theo 2 cách sau:

* Cách 1: Sử dụng các viết thông thường mà chúng ta đã sử dụng trong các môn Toán, Lý,... Điều cần lưu ý dấu thập phân phải là dấu chấm ( . ).<br>
>Ví dụ: &nbsp;&nbsp;&nbsp; 123.34 &nbsp;&nbsp;&nbsp; -223.333 &nbsp;&nbsp;&nbsp; 3.00 &nbsp;&nbsp;&nbsp; -56.0

* Cách 2: Sử dụng cách viết theo số mũ hay số khoa học. Một số thực được tách làm 2 phần, cách nhau bằng ký tự `e` hay `E`.

**Phần giá trị**: là một số nguyên hay số thực được viết theo cách 1.<br>
**Phần mũ**: là phần số nguyên.

>Ví dụ:
```C
1234.56e-3 = 1.23456 (là số 1234.56*10^-3)
-123.45E4  = -1234500 (là số -123.45 *10^4)
```
### **Hằng số nguyên:**

Số nguyên gồm các kiểu int (2 byte), long (4 byte) được thể hiện theo các khác nhau.

-*Hệ nhị phân*: Là hệ số được biển diễn bằng ký tự 0 và 1

Các biễu diễn
```C
0b<giá trị nhị phân>
```
> Ví dụ
```C
a = 0b0010011;
a = 0b0011;
```

- *Hệ bát phân*: Là kiểu số nguyên sử dụng 8 ký tự số từ 0 đến 7 để biển diễn giá trị.

Các biễu diễn:
```C
0<giá trị bát phân>
```
> Ví dụ:
```C
a = 0352;
b = -020;
```

- *Hệ thập phân*: Là kiểu số mà chúng ta sử dụng thông thường, hệ thập phân sử dụng các ký tự từ 0 đến 9 để biểu diễn giá trị nguyên.
>Ví dụ:
```C
a = 123;
b = -243;
c = 256;
d = 1023;
```
- *Hệ thập lục phân*: Là kiểu số mà chúng ta sử dụng thông thường, hệ thập lục phân sử dụng các ký tự từ 0 đến 9 và 6 lý tự `A, B, C, D, E, F` hay `a, ,b, c, d, e, f` để biểu diễn giá trị nguyên.

Cách biễu diễn
```C
0x<giá trị thập lục phân>
```
> Ví dụ:
```C
a = 0xaa;
b = 0x03df;
c = 0x0fff;
d = 0x12AB;
```
- *Hằng số nguyên 4 byte*: Kiểu `long` được biểu diễn như số `int` trong hệ thập phân và kèm theo ký tự `l` hay `L`. Kiểu`unsigned long` được biểu diễn như `int` trong hệ thập phân và kèm theo ký tự `ul` hay `UL`

Cách biểu diễn:
```C
<giá trị long>L
<giá trị unsigned long>UL
```
> Ví dụ:
```C
a = 160000L;
b = 80000UL;
```

- *Hằng ký tự*:
Hằng ký tự là một ký tự riêng biệt được viết trong cặp dấu nháy đơn (‘). Mỗi một ký tự tương ứng với một giá trị trong bảng mã ASCII. Hằng ký tự cũng được xem như trị số nguyên.
>Ví dụ:
```C
a = 'a';
b = 'B';
c = '5';
```
- *Hằng chuỗi ký tự*: Hằng chuỗi ký tự là một chuỗi hay một xâu ký tự được đặt trong cặp dấu nháy kép (").
>Ví dụ:
```C
class_name = "Lap trinh C can ban";
class_time = "2nd";
```
**Chú ý**

1. Một chuỗi không có nội dung `""` được gọi là chuỗi rỗng.
2. Khi lưu trữ trong bộ nhớ, mỗi chuỗi được kết thúc bằng lý từ `NULL` (`0x00`, `\0`, ASCII là `0`)
3. Để biểu diễn ký tự đặc biệt bên trong chuỗi ta phải thêm dấu `\` phía trước ký tự
> Ví dụ:
```C
printf("I\'m student\n");
printf("Say: \"I\'m fine!\"");

Kết quả:
I'm student
Say: "I'm fine!"
```

**ASCII TABLE**

![ASCII TABLE](asciifull.gif)

**EXTENDED ASCII CODES**

![ASCII TABLE](ascii-extend.gif)

# **2. Biến và biểu thức**

## **a. Toán tử toán học**
Trong ngôn ngữ C, các toán tử `+, -, *, /` là việc tương tự như khi chúng là việc trong các ngôn ngữ khác. Ta có thể áp dụng cho đa số các kiểu dữ liệu có sẳn được cho phép bởi C. Khi ta áp dụng phép `/` cho một số nguyên hay một ký tự, bất kỳ phần nguyên nào cũng bị cắt bỏ. Chẳng hạn 5/2 bằng 2 trong phép chia nguyên.

Toán tử | Ý nghĩa | Ví dụ | Kết quả
-|-|-|-
+|Cộng|3+4|7
-|Trừ|10.5-3|7.5
*|Nhân|2*3|6
/|Chia lấy phần nguyên|6/3|2
%|Chia lấy phần dư|8%3|2

>Ví dụ:
```C
#include <stdio.h>
 
int main()
{
    int a = 5, b = 7;
    double c = 4.5, d = 6;
 
    printf("%d + %f = %f \n", a, c, a + c);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %f = %f \n", b, d, b * d);
 
    /* Lưu ý phép chia */
 
    printf("%d / %d = %d \n", b, a, b / a);
    printf("%f / %d = %f \n", c, a, c / a);
    printf("%f / %f = %f \n", c, d, c / d);
 
    printf("%d %% %d = %d \n", b, a, b % a);
 
    return 0;
}
```

* Toán tử lấy phần dư (%) yêu cầu cả hai toán hạng là số nguyên. Nó trả về phần dư còn lại của phép chia.
>Ví dụ:
```C
7 % 5 được tính toán bằng cách chia số nguyên 7 cho 5 để được 1 và phần dư là 2; vì thế kết quả là 2.
```
* Thông thường, nếu cả hai toán hạng là số nguyên sau đó kết quả sẽ là một số nguyên. Tuy nhiên, một hoặc cả hai toán hạng là số thực thì sau đó kết quả sẽ là một số thực.

* Khi cả hai toán hạng của toán tử chia là số nguyên thì sau đó phép chia được thực hiện như là một phép chia số nguyên và không phải là phép chia thông thường mà chúng ta sử dụng. Phép chia số nguyên luôn cho kết quả là phần nguyên của thương. ```Ví dụ: 7 / 5 = 1 chứ không phải 7 / 5 = 1.4```. Để khắc phục lỗi này thì ta có thể chuyển một số hoặc cả 2 số sang kiểu thực rồi thực hiện phép chia. Cách chuyển kiểu (hay ép kiểu) ta như sau:
```C
#include <stdio.h>

int main()
{
    int a = 5, b = 7;
    double c;
 
    printf("%d / %d = %d \n", b, a, b/a);
 
    /* Chuyển giá trị tức thời của b sang kiểu số thực */
    printf("%d / %d = %f \n", b, a, (double)b/a);
 
    /* Chuyển giá trị tức thời của a sang kiểu số thực */
    printf("%d / %d = %f \n", b, a, b/(double)a);
 
    /* Ép kiểu cả biểu thức */
    printf("%d / %d = %f \n", b, a, (double)(b/a));
 
    return 0;
}
```
Kết quả:
```C
7 / 5 = 1
7 / 5 = 1.400000
7 / 5 = 1.400000
7 / 5 = 1.000000
```

>**Lưu ý** khi ép kiểu thế này thì kiểu của các biến ban đầu không thay đổi mà chỉ là giá trị tức thời (tại thời điểm đó thay đổi sang kiểu mới). Để lưu lại giá trị tức thời này bạn cần khai báo thêm một biến mới có kiểu cần chuyển và gán giá trị đó lại. Ví dụ cho dễ.

## **b. Toán tử quan hệ**

Ngôn ngữ C cung cấp 6 toán tử quan hệ để so sánh các số. Các toán tử quan hệ có giá trị 1 (khi kết quả đúng) hoặc 0 (khi kết quả sai).

STT | Toán tử | Tên | Ví dụ | Kết quả
----|---------|-----|-------|--------
1|`==`|So sánh bằng|5 `==` 5|true
2|`!=`|So sánh khác|5 `!=` 5|false
3|`>`|So sánh lớn|5 `>` 4|true
4|`<`|So sánh bé|5 `<` 4|false
5|`>=`|So sánh lớn hơn bằng|5 `>=` 4|true
6|`<=`|So sánh nhỏ hơn bằng|5 `<=` 4|false

Chúng ta sử dụng các toán tử này để so sánh các giá trị, các ký tự,… tuy nhiên không so sánh các xâu với nhau vì điều này sẽ dẫn đến các địa chỉ của chuỗi được so sánh chứ không phải là nội dung chuỗi. Chúng ta có các hàm so sánh chuỗi ở thư viện string và sẽ tìm hiểu sau. Khi so sánh các ký tự với nhau thì bản chất ta có thể hiểu là máy so sánh các mã ASCII của các ký tự với nhau. 

>Ví dụ:
```C
#include <stdio.h>

int main(){
    if('A' > 'B')
        printf("true");
    else
        printf("false");
    return 0;
}
```
Kết quả:
```C
false
```

Bởi vì giá trị kí tự 'A' là là 65 còn 'B' là 66.

## **c. Toán tử luận lý**
Ngôn ngữ C cung cấp 3 toán tử luận lý cho việc kết nối các biểu thức luận lý. Giống như các toán tử quan hệ, các toán tử luận lý có giá trị là 1 hoặc 0.

STT|Toán tử|Tên|Ví dụ|Kết quả
---|-------|---|-----|-------
1|`!`|Phủ định|`!`(5>4)|false
2|`&&`|Và|5>4 `&&` 5>6|false
3|`||`|Hoặc|5>4 `||` 5>6 |true

## **d. Toán tử tăng giảm**
Các toán tử tăng một (++) và giảm một (- -) cung cấp các tiện lợi tương ứng cho việc cộng thêm 1 vào một biến số hay trừ đi 1 từ một biến số.

```C
#include <stdio.h>
 
int main()
{
    int i, k;
 
    i = 5;
    k = i++;
    printf("i = %d, k = %d\n", i, k);
 
    i = 5;
    k = ++i;
    printf("i = %d, k = %d\n", i, k);
 
    i = 5;
    k = i--;
    printf("i = %d, k = %d\n", i, k);
 
    i = 5;
    k = --i;
    printf("i = %d, k = %d\n", i, k);
 
    return 0;
}
```