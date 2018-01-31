{
   "targets": [
     {
      "target_name": "calculator",
      "sources": [
        "./src/calculator.cc",
        "./src/calc.h",
        "./src/calc.c"
      ],
         "include_dirs": [ "<!(node -e \"require('nan')\")" ]
     }
   ]
}