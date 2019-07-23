/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPObjectPlacement : NSObject {
    int _index;
    NSObject *_object;
    TSUUUIDPath *_uuidPath;
}

@property (nonatomic) int index;
@property (nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) TSUUUIDPath *uuidPath;

+ (id)objectPlacementWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;

- (void)dealloc;
- (int)index;
- (id)initWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;
- (id)object;
- (void)setIndex:(int)arg1;
- (id)uuidPath;

@end
