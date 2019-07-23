/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

@interface EAGLSharegroup : NSObject {
    struct _EAGLSharegroupPrivate { unsigned int x1; int x2; bool x3; struct __GLDPixelFormatRec {} *x4; struct __GLISharedRec {} *x5; } *_private;
    NSString *debugLabel;
}

@property (nonatomic, copy) NSString *debugLabel;

- (unsigned int)APIs;
- (void)dealloc;
- (id)debugLabel;
- (struct __GLISharedRec { }*)getGLIShared;
- (id)init;
- (id)initWithAPI:(unsigned int)arg1;
- (id)initWithAPI:(unsigned int)arg1 sharedWithCompute:(BOOL)arg2;
- (void)loadGLIPlugin:(struct __GLDPixelFormatRec { struct __GLDPixelFormatRec {} *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; short x9; short x10; short x11; short x12; unsigned int x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned int x18; }*)arg1 sharedWithCompute:(BOOL)arg2;
- (void)setDebugLabel:(id)arg1;

@end
