ngay = int(input("Nhap ngay: "))
thang = int(input("Nhap thang: "))
nam = int(input("Nhap nam: "))


if thang in (1,3,5,7,8,10,12):
    if ngay in range(1,32):
        print("Ngay thang nam hop le!")
    else:
        print("Ngay thang nam khong hop le!")
elif thang in (4,6,9,11):
    if ngay in range(1,31):
        print("Ngay thang nam hop le!")
    else:
        print("Ngay thang nam khong hop le!")
elif thang == 2:
    if (nam%4 == 0 and nam%100 != 0) or nam%400 == 0:
        if ngay in range(1,30):
            print("Ngay thang nam hop le!")
        else:
            print("Ngay thang nam khong hop le!")
    else:
        if ngay in range(1,29):
            print("Ngay thang nam hop le!")
        else:
            print("Ngay thang nam khong hop le!")
else:
    print("Ngay thang nam khong hop le!")
