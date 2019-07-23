/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAStackshotFrameIterator : NSObject {
    const void *curFrame;
    unsigned int curIndex;
    BOOL currentFrameIsKernel;
    struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; } *snap;
    const void *topFrame;
}

- (const void*)firstValidUserFrame;
- (void)getCurrentFrame:(struct pa_stack_frame { unsigned long long x1; BOOL x2; }*)arg1;
- (id)initWithThreadSnapshot:(struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; }*)arg1 frameStart:(const void*)arg2;
- (BOOL)is64bit;
- (BOOL)moveToNextFrame;

@end
