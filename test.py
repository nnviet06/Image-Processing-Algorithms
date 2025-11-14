import cv2
import numpy as np

print("=" * 50)
print("OpenCV Python Test")
print("=" * 50)

# 1. Kiểm tra version
print(f"OpenCV version: {cv2.__version__}")

# 2. Tạo ảnh test đơn giản
img = np.zeros((300, 400, 3), dtype=np.uint8)
img[:] = (100, 150, 200)  # BGR color
cv2.putText(img, "OpenCV Works!", (50, 150), 
            cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 255, 255), 2)

# 3. Hiển thị ảnh
cv2.imshow("Python Test", img)
print("Press any key to close the window...")
cv2.waitKey(0)
cv2.destroyAllWindows()

print("✓ OpenCV Python working correctly!")