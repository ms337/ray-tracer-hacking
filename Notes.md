Way to see an Image

Most straightforward way to write it to a file.

## Basic PPM file

```
P3


# The P3 means colors are in ASCII, then 3 cols and 2 rows, then 255 for max color, then RGB triplets


3 2
255
255 0   0     0   255  0       0   0  255
255 255 0     255 255  255     0   0  0


```


Antialiasing


Diffuse Materials

"One question is whether we mix and match geometry and materials (so we can assign a material to multiple spheres, or vice versa) or if geometry and material are tightly bound (that could be useful for procedural objects where the geometry and material are linked). We’ll go with separate — which is usual in most renderers — but do be aware of the limitation."


Positionable Camera