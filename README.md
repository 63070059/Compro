# Compro
บทคัดย่อ

โปรเจคเกม Hangman
เป็นการนำความรู้ที่ได้จากการเรียน ภาษา C มาทำเกม Hangman โดยเริ่มต้นจากการทำใช้ตัวอักษรพิเศษต่างๆประกอบกันเป็นรูปตัว Hangman
คิดโจทย์ โดยในที่มีโจทย์คือคำภาษาอังกฤษนำวน 5 คำ คือ "apple" "banana" "orange" "cherry" "strawberry"
โดยตั้งเป็นตัวแปรเก็บไว้ใน fruit
แสดงหน้าต่างเกมโดยใช้ตัวหนังสือ ขีดเป็นตัวเสาผูก
ให้ผู้เล่นสามารถเลือกได้ว่าจะออกจากเกมหรือไม่ โดยถ้าต้องการออกจากเกมให้พิมพ์เลข 0 ถ้าต้องการเล่นให้พิมพ์เลข 1
หลังจากนั้นให้ข้อมูลกับผู้เล่นว่า There are 5 Question! คือมี 5 คำถาม
Choose Question! : ให้ผู้เล่นลือกระหว่างตัวเลข 1-5 เพื่อเลือกข้อที่อยากเล่น
เมื่อผู้เล่นเลือกแล้วจะขึ้น ช่องว่าง _ _ _ _ _ _ ตามจำนวนตัวอักษรของข้อนั้นๆ
ขึ้น Enter any alphabet : ให้ผู้เล่นใส่ตัวอักษรภาษาอังกฤษ พิมพ์เล็กหรือพิมพ์ใหญ่ก็ได้ 1 ตักษร
ถ้าตอบถูก คือมีตัวอักษรนั้นอยู่ในคำ จะนำตัวอักษรนั้นใส่ลงไปในช่องว่าง ตามตำแหน่งของตัวอักษรนั้นๆ ในทุกตำแหน่ง
ถ้าตอบผิด จะเริ่มแสดงตัวละคร ค่อยๆปรากฏขึ้นข้างๆเสาผูก ยิ่งตอบผิด จะยิ่งค่อยๆเผยออกมาจนครบ
ถ้าตอบผิดครบ 5 ครั้งจะตัวละครจะออกมาครบและจะถือว่า Game Over และจะมีทางเลือกให้กลับไปเล่นอีกรอบคือ กด 0 หรือเลิกเล่นคือ กด 1
ถ้าตอบถูกหมดผู้เล่นจะชนะ และจะมีทางเลือกให้กลับไปเล่นอีกรอบคือ กด 1 หรือเลิกเล่นคือ กด 0
