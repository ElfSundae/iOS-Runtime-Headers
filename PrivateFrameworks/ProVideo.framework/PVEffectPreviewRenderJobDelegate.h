/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate> {
    id /* block */  m_completionHandler;
    PVEffect * m_effect;
    struct PVImageProperties { 
        unsigned int cvPixelFormat; 
        int bitsPerPixel; 
        unsigned int alphaInfo; 
        struct CGColorSpace {} *cgColorSpaceRef; 
    }  m_imageCreationProperties;
    struct CGImage { } * m_input;
    struct HGRef<HGNode> { 
        struct HGNode {} *m_Obj; 
    }  m_inputHGNode;
    struct HGRef<HGCVBitmap> { 
        struct HGCVBitmap {} *m_Obj; 
    }  m_outputCVBitmap;
    struct CGSize { 
        double width; 
        double height; 
    }  m_outputSize;
    PVRendererBase * m_pvRenderer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_time;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) Class superclass;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (void)cleanupCaches;
+ (unsigned int)jobTypeTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage { }*)_makeResultImage;
- (void)_setupInputHGNode:(const struct HGRenderContext { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; int x4; int x5; int x6; struct HGRenderQueue {} *x7; struct HGSynchronizable {} *x8; struct HGSynchronizer {} *x9; struct HGRenderer {} *x10; int x11; int x12; int x13; bool x14; unsigned long long x15; unsigned long long x16; struct vector<float, std::__1::allocator<float> > { float *x_17_1_1; float *x_17_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_17_1_3; } x17; }*)arg1 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg2;
- (void)buildGraph:(struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x1; struct HGRef<HGNode> {} *x2; struct __compressed_pair<HGRef<HGNode> *, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> {} *x_3_1_1; } x3; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; int x4; int x5; int x6; struct HGRenderQueue {} *x7; struct HGSynchronizable {} *x8; struct HGSynchronizer {} *x9; struct HGRenderer {} *x10; int x11; int x12; int x13; bool x14; unsigned long long x15; unsigned long long x16; struct vector<float, std::__1::allocator<float> > { float *x_17_1_1; float *x_17_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_17_1_3; } x17; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3;
- (void)dealloc;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (id)initWEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 inputImage:(struct CGImage { }*)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 completionHandler:(id /* block */)arg5 pvRenderer:(id)arg6;
- (int)jobPriority;
- (unsigned int)jobTypeTag;
- (unsigned long long)packedFamilyCode;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x1; struct HGRef<HGBitmap> {} *x2; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> {} *x_3_1_1; } x3; }*)arg1 renderContext:(const struct HGRenderContext { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; int x4; int x5; int x6; struct HGRenderQueue {} *x7; struct HGSynchronizable {} *x8; struct HGSynchronizer {} *x9; struct HGRenderer {} *x10; int x11; int x12; int x13; bool x14; unsigned long long x15; unsigned long long x16; struct vector<float, std::__1::allocator<float> > { float *x_17_1_1; float *x_17_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_17_1_3; } x17; }*)arg2 frameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg3;
- (id)videoCompositingContext;

@end
