# Extreme Compression

Contributors:

If we decide to downlink the raw image data, we'll be inhibited by slow download speeds and spotty connection. One mitigation for this could be developing an customized compression algorithm that significantly reduces the video quality but leaves key data relevant to the experiment intact. The algorithm will consist of something like: reading the video file: making it grayscale, reducing the bit depth, reducing the resolution, increasing the contrast, further reducing the bit depth, compressing it to the tar format, etc. The first task will be to read an image file, translate it to grayscale, then write it back out.
