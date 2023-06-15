import cv2 as cv
import numpy as np 

blank=np.zeros((500,500)dtype='uint8')

rect=cv.rectangle(blank.copy(),(30,30),(370,370))
cv.imshow(rect)


