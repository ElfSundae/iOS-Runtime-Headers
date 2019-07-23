# iOS Runtime Headers

Here are iOS 9+ Objective-C headers as derived from runtime introspection.

For headers before iOS 9, please check out [nst/iOS-Runtime-Headers](https://github.com/nst/iOS-Runtime-Headers).

## Search

You can search the headers with GitHub search:

[https://github.com/ElfSundae/iOS-Runtime-Headers/search?q=UIView](https://github.com/ElfSundae/iOS-Runtime-Headers/search?q=UIView)

## Diffs

You can compare versions based on their tags, see the [tags page](https://github.com/ElfSundae/iOS-Runtime-Headers/tags):

    $ git difftool 10.0 10.1 .

## Sample Usage

You can use the headers this way:

```objc
NSBundle *b = [NSBundle bundleWithPath:@"/System/Library/PrivateFrameworks/FTServices.framework"];
BOOL success = [b load];

Class FTDeviceSupport = NSClassFromString(@"FTDeviceSupport");
id si = [FTDeviceSupport valueForKey:@"sharedInstance"];

NSLog(@"-- %@", [si valueForKey:@"deviceColor"]);
```

## Generating

The headers were generated using [RuntimeBrowser for iPhone](https://github.com/nst/RuntimeBrowser).

First build and run iOS OCRuntime > Frameworks tab > Load All, then run:

```sh
wget -r -np -t 15 -R "index.html*" -nH -P iOS-Runtime-Headers http://192.168.2.123:10000/tree/
```
