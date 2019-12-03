/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDevice : NSObject <NUDevice> {
    long long  _defaultSampleMode;
    NURenderer * _lowPriorityRenderer;
    <MTLDevice> * _metalDevice;
    NSString * _model;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    NURenderer * _renderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultSampleMode;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long family;
@property (nonatomic, readonly) bool hasMetalSupport;
@property (nonatomic, readonly) bool hasOpenGLSupport;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NURenderer> *lowPriorityRenderer;
@property (nonatomic, readonly) <MTLDevice> *metalDevice;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long openGLVirtualScreen;
@property (nonatomic, readonly) <NURenderer> *renderer;
@property (nonatomic, readonly) bool shouldRenderUsingMetal;
@property (nonatomic, readonly) bool shouldRenderUsingOpenGL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_computeDefaultSampleMode;
- (long long)_defaultSampleMode;
- (id)_lowPriorityRenderer:(out id*)arg1;
- (id)_newLowPriorityRenderer:(out id*)arg1;
- (id)_newRenderer:(out id*)arg1;
- (long long)_openGLVirtualScreen;
- (long long)_preferredSampleMode;
- (id)_renderer:(out id*)arg1;
- (void)clearCaches;
- (long long)defaultSampleMode;
- (id)description;
- (unsigned long long)family;
- (bool)hasMetalSupport;
- (bool)hasOpenGLSupport;
- (id)init;
- (id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3;
- (id)lowPriorityRenderer;
- (id)lowPriorityRenderer:(out id*)arg1;
- (id)metalDevice;
- (id)model;
- (id)name;
- (long long)openGLVirtualScreen;
- (id)renderer;
- (id)renderer:(out id*)arg1;
- (bool)shouldLogRendererUsed;
- (bool)shouldRenderUsingMetal;
- (bool)shouldRenderUsingOpenGL;

@end
