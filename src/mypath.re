[@bs.val] [@bs.module "path"]
external basename : (string, ~ext: string=?, unit) => string = "";

[@bs.val] [@bs.module "path"] external delimiter : string = "";

[@bs.val] [@bs.module "path"] external dirname : string => string = "";

[@bs.val] [@bs.module "path"] external extname : string => string = "";

type pathObject = {
  .
  "dir": string,
  "root": string,
  "base": string,
  "name": string,
  "ext": string
};

[@bs.val] [@bs.module "path"] external format : pathObject => string = "";

[@bs.obj]
external makePathObject :
  (
    ~dir: string=?,
    ~root: string=?,
    ~base: string=?,
    ~name: string=?,
    ~ext: string=?,
    unit
  ) =>
  pathObject =
  "";

[@bs.val] [@bs.module "path"] external isAbsolute : string => bool = "";

[@bs.splice] [@bs.module "path"] external join : array(string) => string = "";

[@bs.val] [@bs.module "path"] external normalize : string => string = "";

[@bs.val] [@bs.module "path"] external parse : string => pathObject = "";

[@bs.val] [@bs.module "path"] external relative : string => string => string = "";

[@bs.splice] [@bs.module "path"] external resolve : array(string) => string = "";

[@bs.val] [@bs.module "path"] external sep : string = "";

[@bs.val] [@bs.module "path"] external toNamespacedPath : string => string = "";