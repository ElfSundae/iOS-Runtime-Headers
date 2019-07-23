/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderbufferAllocatorInfo : NSObject {
    struct FramebufferAttributes { 
        int type; 
        long long samples; 
        int colorDataType; 
        int colorFormat; 
        int depthDataType; 
        bool linearFilter; 
        bool discardHint; 
        bool useIOSurfaceBacking; 
    }  _framebufferAttributes;
    TSCH3DSession * _session;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  _size;
}

@property (nonatomic, readonly) struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; bool x8; } framebufferAttributes;
@property (nonatomic, readonly, retain) TSCH3DSession *session;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

+ (id)infoWithFramebufferAttributes:(struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; bool x8; })arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2 session:(id)arg3;

- (id).cxx_construct;
- (void)dealloc;
- (struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; bool x8; })framebufferAttributes;
- (id)initWithFramebufferAttributes:(struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; bool x8; })arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2 session:(id)arg3;
- (id)session;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;

@end
