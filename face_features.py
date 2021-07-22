import numpy as np
import cv2

import types.window

Window colored_window = Window(800, 600, False, 'Color')
Window grayscale_window = Window(800, 600, True, 'Grayscale')

# Run both windows
colored_window.run_window()
grayscale_window.run_window()
