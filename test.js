const fs = require('node:fs');
const buffer = fs.readFileSync("test.wasm");
WebAssembly.compile(buffer).then((mod) =>
  WebAssembly.instantiate(mod, {}).then(in_instance => {
    instance = in_instance;
    console.log("As float", instance.exports._Z1fd(49416561932694.046875));
    console.log("Float cast to i32", instance.exports._Z3i32d(49416561932694.046875));
    console.log("Float cast to i64", instance.exports._Z3i64d(49416561932694.046875));
    console.log("Float cast to i32 cast to i64", instance.exports._Z6i32_64d(49416561932694.046875));
    console.log("Float cast to i64 cast to i32", instance.exports._Z6i64_32d(49416561932694.046875));
  })
);
