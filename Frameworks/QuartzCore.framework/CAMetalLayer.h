/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalLayer : CALayer {
    struct _CAMetalLayerPrivate { struct x_list_struct {} *x1; struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Atomic { struct { int x_1_2_1; } x_3_1_1; } x3; struct SpinLock { struct { int x_1_2_1; } x_4_1_1; } x4; struct _CAImageQueue {} *x5; id x6; struct x_list_struct {} x7; unsigned int x8; struct _CAMetalDrawablePrivate {} *x9; id x10; struct CGSize { float x_11_1_1; float x_11_1_2; } x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; id x16; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x17; out void*x18; int x19; BOOL x20; void*x21; struct { int x_22_1_1; } x22; } *_priv;
}

@property (retain) <MTLDevice> *device;
@property struct CGSize { float x1; float x2; } drawableSize;
@property BOOL framebufferOnly;
@property BOOL lowLatency;
@property unsigned long maximumDrawableCount;
@property unsigned int pixelFormat;
@property BOOL presentsWithTransaction;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; struct Atomic { struct { int x_1_2_1; } x_17_1_1; } x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1;
- (void)_display;
- (void)dealloc;
- (id)device;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })drawableSize;
- (BOOL)framebufferOnly;
- (id)init;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (BOOL)lowLatency;
- (unsigned long)maximumDrawableCount;
- (id)newDrawable;
- (id)nextDrawable;
- (unsigned int)pixelFormat;
- (BOOL)presentsWithTransaction;
- (void)setDevice:(id)arg1;
- (void)setDrawableSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFramebufferOnly:(BOOL)arg1;
- (void)setLowLatency:(BOOL)arg1;
- (void)setMaximumDrawableCount:(unsigned long)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;

@end
