# tree-sitter-multicursor

`.multicursor` is a file type that allows rendering multiple cursors. It was created for the [Helix Editor](https://github.com/multicursor-editor/multicursor)

It supports 4 types of selections:

- Primary selection, with cursor on the left

  ```multicursor
  hello #[|world]#
  ```

- Primary selection, with cursor on the right

  ```multicursor
  hello #[world|]#
  ```

- Non-primary selection, with cursor on the left

  ```multicursor
  hello #(|world)#
  ```

- Non-primary selection, with cursor on the right

  ```multicursor
  hello #(world|)#
  ```

A file with the following content:

```multicursor
hello #[|world]#
hello #[world|]#
hello #(|world)#
hello #(world|)#
```

Generates the following tree:

```scm
(source_file [0, 0] - [4, 0]
; hello #[|world]#
  (text [0, 0] - [0, 6]) ; hello
  (left_primary [0, 6] - [0, 16] ; #[|world]#
    (start_left_primary [0, 6] - [0, 9]) ; #[|
    (cursor_primary [0, 9] - [0, 10]) ; w
    (char [0, 10] - [0, 11]) ; o
    (char [0, 11] - [0, 12]) ; r
    (char [0, 12] - [0, 13]) ; l
    (char [0, 13] - [0, 14]) ; d
    (end_left_primary [0, 14] - [0, 16]))  ; ]#
  (text [0, 16] - [1, 6])
  (right_primary [1, 6] - [1, 16]
    (start_right_primary [1, 6] - [1, 8])
    (char [1, 8] - [1, 9])
    (char [1, 9] - [1, 10])
    (char [1, 10] - [1, 11])
    (char [1, 11] - [1, 12])
    (cursor_primary [1, 12] - [1, 13])
    (end_right_primary [1, 13] - [1, 16]))
  (text [1, 16] - [2, 6])
  (left [2, 6] - [2, 16]
    (start_left [2, 6] - [2, 9])
    (cursor [2, 9] - [2, 10])
    (char [2, 10] - [2, 11])
    (char [2, 11] - [2, 12])
    (char [2, 12] - [2, 13])
    (char [2, 13] - [2, 14])
    (end_left [2, 14] - [2, 16]))
  (text [2, 16] - [3, 6])
  (right [3, 6] - [3, 16]
    (start_right [3, 6] - [3, 8])
    (char [3, 8] - [3, 9])
    (char [3, 9] - [3, 10])
    (char [3, 10] - [3, 11])
    (char [3, 11] - [3, 12])
    (cursor [3, 12] - [3, 13])
    (end_right [3, 13] - [3, 16]))
  (text [3, 16] - [4, 0]))
```
