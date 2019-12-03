/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASLPArray : NSArray <NSFastEnumeration> {
    unsigned long long  _count;
    _PASLazyPlist * _lazyPlist;
    const unsigned int * _storage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLazyPlist:(id)arg1 storage:(const unsigned int*)arg2 count:(unsigned long long)arg3;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
