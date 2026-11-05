# nama = "Fauzan"
# panggil = "Halo namaku "
# print(panggil + nama)

# usia = "Usai saya adalah "
# usai = 18
# print(usia + str(usai) + " tahun")

# namaLo = input("Nama lu siapa: ")
# print(namaLo)
# namasaya = "Johannes"
# print(namasaya.find("n"))
# length = len(namasaya)
# print(length)
# print("s" in namasaya)
# print(namasaya.count("n"))

# # count, upper, find, capitalize
# angka = 10
# if angka == 10:
#     print("anjay")
# else:
#     print("mantap")

# angka_semua = ["1", "2", "5"]
# for angka in angka_semua:
#     print(angka)

# angka1 = 1
# while angka1 <= 5:
#     print(angka1)
#     angka1 += 1

hutang = 50_000
print(hutang)
deposit = input("Masukkan uang yang mau dibayar: ")
while int(deposit) < hutang:
    deposit = input("Uang anda kurang. Masukkan ulang: ")
print("Yayyy! Anda lolos hutang! Makanya jangan ngutang gob-")