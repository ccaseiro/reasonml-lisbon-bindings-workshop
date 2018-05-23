open Jest;

open ExpectJs;

test("dirname()", () =>
  expect(Mypath.dirname("/Users/reason-user")) |> toEqual("/Users")
);
/*
 test("basename()", () =>
   expect(Mypath.basename("/foo/bar/baz/asdf/quux.html", ()))
   |> toEqual("quux.html")
 );

 test("basename() with extension", () =>
   expect(Mypath.basename("/foo/bar/baz/asdf/quux.html", ~ext=".html", ()))
   |> toEqual("quux")
 );

 test("delimiter", () =>
   expect(Mypath.delimiter) |> toEqual(":")
 );

 test("dirname()", () =>
   expect(Mypath.dirname("/Users")) |> toEqual("/")
 );

 test("extname()", () =>
   expect(Mypath.extname("file.html")) |> toEqual(".html")
 );

 test("format() ", () =>
   expect(
     Mypath.(
       format(
         pathObject(
           ~root="/ignored",
           ~dir="/home/user/dir",
           ~base="file.txt",
           (),
         ),
       )
     ),
   )
   |> toEqual("/home/user/dir/file.txt")
 );

 test("format() 2 ", () =>
   expect(
     Mypath.(
       format(pathObject(~root="/", ~base="file.txt", ~ext="ignored", ()))
     ),
   )
   |> toEqual("/file.txt")
 );

 test("isAbsolute()", () =>
   expect(Mypath.isAbsolute("/foo/bar")) |> toEqual(true)
 );

 test("join()", () =>
   expect(Mypath.join([|"Users", "davidgomes"|]))
   |> toEqual("Users/davidgomes")
 );

 test("normalize()", () =>
   expect(Mypath.normalize("/foo/bar//baz/asdf/quux/.."))
   |> toEqual("/foo/bar/baz/asdf")
 );

 test("parse()", () =>
   expect(Mypath.parse("/home/user/dir/file.txt"))
   |> toEqual(
        Mypath.pathObject(
          ~root="/",
          ~dir="/home/user/dir",
          ~base="file.txt",
          ~ext=".txt",
          ~name="file",
          (),
        ),
      )
 );

 test("relative()", () =>
   expect(Mypath.relative("/data/orandea/test/aaa", "/data/orandea/impl/bbb"))
   |> toEqual("../../impl/bbb")
 );

 test("resolve()", () =>
   expect(Mypath.resolve([|"/foo/bar", "/tmp/file"|]))
   |> toEqual("/tmp/file")
 );

 test("sep", () =>
   expect(Mypath.sep) |> toEqual("/")
 );
 */
