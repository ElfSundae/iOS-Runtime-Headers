/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPathSource : NSObject <NSCopying, TSDMixing> {
    BOOL  mHorizontalFlip;
    BOOL  mVerticalFlip;
}

@property (getter=isClosed, nonatomic, readonly) BOOL closed;
@property BOOL hasHorizontalFlip;
@property BOOL hasVerticalFlip;

+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)pathSourceWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;

- (id)bezierPath;
- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)hasHorizontalFlip;
- (BOOL)hasVerticalFlip;
- (unsigned int)hash;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (id)interiorWrapPath;
- (BOOL)isCircular;
- (BOOL)isClosed;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRectangular;
- (BOOL)isRectangularForever;
- (void)loadSharedFromArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })pathFlipTransform;
- (Class)preferredControllerClass;
- (void)saveSharedToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (void)scaleToNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHasHorizontalFlip:(BOOL)arg1;
- (void)setHasVerticalFlip:(BOOL)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (float)uniformScaleForScalingToNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)valueForSetSelector:(SEL)arg1;

@end
