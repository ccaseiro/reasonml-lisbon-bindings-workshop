# ReasonML Lisbon Workshop

This repository contains the necessary dependencies and initial set up for a workshop hosted at the [ReasonML Lisbon Meetup](https://www.meetup.com/ReasonML-Lisbon/events/249860100/) on May 18th.

Once you clone it, simply install the dependencies and compile the project:

```bash
$ npm install
$ npm run build
```

(When working on the project, we recommend starting the Bucklescript compiler watcher in a separate terminal using `npm run start` so that you don't have to keep recompiling by hand)

Then, you can make sure tests are passing using:

```
$ npm run test
```

You should get:

```
> my-first-app-4@0.1.0 test /Users/davidgomes/src/my-first-app-4
> jest

 PASS  __tests__/path.bs.js
  ✓ dirname() (5ms)

Test Suites: 1 passed, 1 total
Tests:       1 passed, 1 total
Snapshots:   0 total
Time:        1.152s
Ran all test suites.
```

Once that's done, you can start implementing all the bindings for the remaining functions in the [path](https://nodejs.org/docs/latest/api/path.html) module. As you go, simply uncomment the tests for that binding in the `__tests__/path.re` file.

This is the final goal:

```bash
$ npm run test

> my-first-app-4@0.1.0 test /Users/davidgomes/src/my-first-app-4
> jest

 PASS  __tests__/path.bs.js
  ✓ basename() (4ms)
  ✓ basename() with extension (1ms)
  ✓ delimiter
  ✓ dirname() (1ms)
  ✓ extname()
  ✓ format()
  ✓ format() 2  (1ms)
  ✓ isAbsolute()
  ✓ join()
  ✓ normalize() (1ms)
  ✓ parse()
  ✓ relative() (1ms)
  ✓ resolve()
  ✓ sep

Test Suites: 1 passed, 1 total
Tests:       14 passed, 14 total
Snapshots:   0 total
Time:        0.819s, estimated 1s
Ran all test suites.
```