import numpy as np

v1=np.array([1,0,0])
v2=np.array([1,1,0])

dot=np.dot(v1,v2)
print(f"v1.v2={dot}")

cross=np.cross(v1,v2)
print(f"v1*v2={cross}")

norm_v1=np.linalg.norm(v1)
print(f"||v1||={norm_v1}")

unit_v2=v2/np.linalg.norm(v2)
print(f"unit(v2)={unit_v2}")

cos_angle=np.dot(v1,v2)/(np.linalg.norm(v1)*np.linalg.norm(v2))
angle=np.arccos(cos_angle)
angle_deg=np.degrees(angle)
print(f"Angle between v1 and v2:{angle_deg}")