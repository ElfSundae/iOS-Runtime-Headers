/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSpectrumResourceManager : NSObject {
    unsigned long long  _clients;
    <MTLDevice> * _device;
    <MTLRenderPipelineState> * _pipelineStates;
    unsigned long long  _pixelFormat;
    <MTLBuffer> * _verticesBuffer;
    <MTLTexture> * _vignetteTexture;
}

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)_loadGeometry;
- (void)_loadPrograms;
- (void)addClient;
- (void)dealloc;
- (id)initWithPixelFormat:(unsigned long long)arg1;
- (void)removeClient;
- (id)renderPipelineForOpacity:(bool)arg1 masking:(bool)arg2;
- (id)verticesBuffer;
- (id)vignetteTexture;

@end
