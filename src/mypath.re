[@bs.val] [@bs.module "path"] external dirname : string => string = "";

[@bs.module "path"]
external basename : (string, ~ext: string=?, unit) => string = "";

[@bs.module "path"] external delimiter : string = "";

[@bs.module "path"] external extname : string => string = "";

[@bs.deriving abstract]
type pathObject = {
  [@bs.optional]
  dir: string,
  [@bs.optional]
  root: string,
  [@bs.optional]
  base: string,
  [@bs.optional]
  name: string,
  [@bs.optional]
  ext: string,
};

[@bs.module "path"] external format : pathObject => string = "";

[@bs.module "path"] external isAbsolute : string => bool = "";

[@bs.module "path"] [@bs.splice] external join : array(string) => string = "";

[@bs.module "path"] external normalize : string => string = "";

[@bs.module "path"] external parse : string => pathObject = "";

[@bs.module "path"] external relative : (string, string) => string = "";

[@bs.module "path"] [@bs.splice]
external resolve : array(string) => string = "";

[@bs.module "path"] external sep : string = "";
