import cv2
import numpy as np

print("=" * 50)
print("OpenCV Python Test")
print("=" * 50)

# Check version
print(f"OpenCV version: {cv2.__version__}")

# Simple test
img = np.zeros((300, 400, 3), dtype=np.uint8)
img[:] = (100, 150, 200)  # BGR color
cv2.putText(img, "OpenCV Works!", (50, 150), 
            cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 255, 255), 2)

# Show image
cv2.imshow("Python Test", img) #imshow on Python, works fine
print("Press any key to close the window...")
cv2.waitKey(0)
cv2.destroyAllWindows()

print("OpenCV Python working correctly!")