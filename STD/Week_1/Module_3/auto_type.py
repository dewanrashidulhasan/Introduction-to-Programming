import cv2
cam=cv2.VideoCapture(r'D:\Phitron\Introduction-to-Programming\STD\Week_1\Module_3\porop sagor.mp4')
while True:
    ret,frame=cam.read()
    if not ret:
        print("camera not working!")
        break
    cv2.imshow('amar video', frame)
    if cv2.waitKey(25) & 0xFF==ord('q'):
        break
cam.release()
cv2.destroyAllWindows()
img=cv2.imread(r'D:\Phitron\Introduction-to-Programming\STD\Week_1\Module_3\1633.jpg')
if img is None:
    print("image nai!")
else:
    cv2.imshow('amar image',img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()  