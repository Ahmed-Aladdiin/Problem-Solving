def main():
    faces = {'Tetrahedron':4, 'Cube': 6, 'Octahedron': 8, 'Dodecahedron': 12, 'Icosahedron': 20}
    num = {'Tetrahedron':0, 'Cube': 0, 'Octahedron': 0, 'Dodecahedron': 0, 'Icosahedron': 0}
    
    shapes = int(input())
    while shapes > 0:
        shapes -= 1
        shape = input()
        num[shape] += 1
    count = 0 
    for shape in faces.keys():
        count += faces[shape]*num[shape]

    print(count)

if __name__ == '__main__':
    main()
