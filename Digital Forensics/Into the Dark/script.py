import cv2

image1 = cv2.imread('../World.png')
image2 = cv2.imread('Tor-logo-2011-flat.svg.png')

image2 = cv2.resize(image2, (225, 136))

result = image1 + image2


cv2.imshow('Result', result)
cv2.waitKey(0)
cv2.destroyAllWindows()
