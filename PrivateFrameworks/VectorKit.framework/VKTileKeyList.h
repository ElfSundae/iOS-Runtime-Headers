/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileKeyList : NSObject <NSCopying, NSFastEnumeration> {
    unsigned long long  _count;
    void * _head;
    VKTileKeyMap * _map;
    unsigned long long  _maxCount;
    void * _tail;
}

- (void)_addKeyToBack:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (bool)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 lostKey:(struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (unsigned long long)capacity;
- (bool)containsKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)copyWithMaxCapacity:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)firstKey;
- (id)init;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (bool)isEqualToList:(id)arg1;
- (id)listWithout:(id)arg1;
- (void)removeAllKeys;
- (void)removeAllListNodes;
- (bool)removeKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeKeysMatchingPredicate:(id /* block */)arg1;
- (void)sort:(id /* block */)arg1;

@end
