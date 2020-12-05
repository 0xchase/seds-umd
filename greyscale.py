# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 15:30:54 2020

@author: LordDio
"""
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image
import PIL as pil


fname = 'rgb.jpg'
'''
imageP = Image.open(fname).convert("P")
imageL = Image.open(fname).convert("L")
arrL = np.asarray(imageP)
arrP = np.asarray(imageL)
plt.imshow(arrP)
plt.imshow(arrL)
#plt.imshow(arrL, cmap='gray', vmin=0, vmax=255)
'''


img = Image.open(fname)
img1 = Image.open(fname).convert("LA") 
arr1 = np.asarray(img1)
plt.imshow(img1)
#plt.imshow(arr1, cmap='gray', vmin=0, vmax=1)
img1.show()
img1.save('bool.png')


