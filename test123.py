import cv2
import numpy as np

print("=" * 50)
print("OpenCV Python - Drawing Test")
print("=" * 50)

# Tạo ảnh trắng
img = np.zeros((400, 600, 3), dtype=np.uint8)
img[:] = (255, 255, 255)

# Vẽ hình chữ nhật (màu đỏ)
cv2.rectangle(img, (50, 50), (250, 200), (0, 0, 255), 3)

# Vẽ hình tròn (màu xanh lá)
cv2.circle(img, (450, 125), 80, (0, 255, 0), -1)

# Vẽ đường thẳng (màu xanh dương)
cv2.line(img, (50, 250), (550, 250), (255, 0, 0), 5)

# Vẽ text
cv2.putText(img, "Python OpenCV", (150, 330), 
            cv2.FONT_HERSHEY_SIMPLEX, 1.5, (0, 0, 0), 3)

cv2.imshow("Python Drawing", img)
print("Press any key to close...")
cv2.waitKey(0)
cv2.destroyAllWindows()
print("✓ Done!")