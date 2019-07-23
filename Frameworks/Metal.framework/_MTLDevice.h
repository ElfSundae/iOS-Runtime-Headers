/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLDevice : NSObject {
    int  _commandQueueCount;
    MTLCompiler * _compiler;
    unsigned long long  _globalTraceObjectID;
    struct MTLLibraryBuilder { id x1; /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*x2; void*x3; void*x4; void*x5; void*x6; void*x7; unsigned long x8; unsigned long x9; int x10; unsigned int x11/* : ? */; const void*x12; const void*x13; unsigned int x14; double x15; void*x16; in void*x17; int x18; float x19; int x20; void*x21; const void*x22; void*x23; void*x24; void*x25; unsigned long x26; unsigned long x27; int x28; unsigned int x29/* : ? */; const void*x30; const void*x31; unsigned char x32; out in void*x33; void*x34; int x35; in void*x36; const void*x37; char *x38; void*x39; void*x40; short x41; void*x42; double x43; SEL x44; SEL x45; void*x46; void*x47; void*x48; SEL x49; SEL x50; long x51; void*x52; short x53; short x54; void*x55; void*x56; void*x57; unsigned long x58; unsigned long x59; int x60; unsigned int x61/* : ? */; const void*x62; const void*x63; unsigned int x64; double x65; void*x66; in void*x67; int x68; float x69; int x70; void*x71; const void*x72; void*x73; void*x74; short x75; void*x76; double x77; SEL x78; } * _libraryBuilder;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; } * _limits;
    MTLIOMemoryInfo * _memoryInfo;
    NSObject<OS_dispatch_queue> * _serialQueue;
    long  limits_init;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) MTLCompiler *compiler;
@property (readonly) unsigned int deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned int deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned int iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned int iosurfaceTextureAlignmentBytes;
@property (readonly) const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; }*limits;
@property (readonly) unsigned int linearTextureAlignmentBytes;
@property (readonly) unsigned int maxBufferLength;
@property (readonly) unsigned int maxColorAttachments;
@property (readonly) unsigned int maxComputeBuffers;
@property (readonly) unsigned int maxComputeInlineDataSize;
@property (readonly) unsigned int maxComputeLocalMemorySizes;
@property (readonly) unsigned int maxComputeSamplers;
@property (readonly) unsigned int maxComputeTextures;
@property (readonly) unsigned int maxComputeThreadgroupMemory;
@property (readonly) unsigned int maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned int maxFragmentBuffers;
@property (readonly) unsigned int maxFragmentInlineDataSize;
@property (readonly) unsigned int maxFragmentSamplers;
@property (readonly) unsigned int maxFragmentTextures;
@property (readonly) unsigned int maxFramebufferStorageBits;
@property (readonly) unsigned int maxFunctionConstantIndices;
@property (readonly) unsigned int maxInterpolants;
@property (readonly) unsigned int maxInterpolatedComponents;
@property (readonly) float maxLineWidth;
@property (readonly) float maxPointSize;
@property (readonly) unsigned int maxTextureDepth3D;
@property (readonly) unsigned int maxTextureDimensionCube;
@property (readonly) unsigned int maxTextureHeight2D;
@property (readonly) unsigned int maxTextureHeight3D;
@property (readonly) unsigned int maxTextureLayers;
@property (readonly) unsigned int maxTextureWidth1D;
@property (readonly) unsigned int maxTextureWidth2D;
@property (readonly) unsigned int maxTextureWidth3D;
@property (readonly) unsigned int maxTotalComputeThreadsPerThreadgroup;
@property (readonly) unsigned int maxVertexAttributes;
@property (readonly) unsigned int maxVertexBuffers;
@property (readonly) unsigned int maxVertexInlineDataSize;
@property (readonly) unsigned int maxVertexSamplers;
@property (readonly) unsigned int maxVertexTextures;
@property (readonly) unsigned int maxVisibilityQueryOffset;
@property (readonly) unsigned int minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned int minConstantBufferAlignmentBytes;
@property (readonly) NSString *name;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

+ (BOOL)featureProfile:(unsigned int)arg1 supportsFeatureSet:(unsigned int)arg2;

- (void)_decrementCommandQueueCount;
- (void)_incrementCommandQueueCount;
- (void)_purgeDevice;
- (unsigned int)acceleratorPort;
- (id)compiler;
- (void)compilerPropagatesThreadPriority:(bool)arg1;
- (void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned int*)arg2;
- (void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned int)arg2 keySize:(unsigned int*)arg3;
- (struct NSObject { Class x1; }*)computeVariantWithCompilerOutput:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)deviceLinearReadOnlyTextureAlignmentBytes;
- (unsigned int)deviceLinearTextureAlignmentBytes;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned int)arg1;
- (BOOL)deviceSupportsFeatureSet:(unsigned int)arg1;
- (id)familyName;
- (id)formattedDescription:(unsigned int)arg1;
- (void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned int*)arg2 previousStateVariant:(id)arg3;
- (void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned int)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned int*)arg4;
- (id)fragmentVariantWithCompilerOutput:(id)arg1;
- (void)freeComputeFunctionKey:(void*)arg1 keySize:(unsigned long)arg2;
- (void)freeFragmentFunctionKey:(void*)arg1 fragmentKeySize:(unsigned long)arg2;
- (void)freeVertexFunctionKey:(void*)arg1 vertexKeySize:(unsigned long)arg2;
- (void*)getShaderCacheKeys;
- (unsigned long long)globalTraceObjectID;
- (id)init;
- (void)initLimits;
- (unsigned int)iosurfaceReadOnlyTextureAlignmentBytes;
- (unsigned int)iosurfaceTextureAlignmentBytes;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; }*)limits;
- (unsigned int)linearTextureAlignmentBytes;
- (unsigned int)maxBufferLength;
- (unsigned int)maxColorAttachments;
- (unsigned int)maxComputeBuffers;
- (unsigned int)maxComputeInlineDataSize;
- (unsigned int)maxComputeLocalMemorySizes;
- (unsigned int)maxComputeSamplers;
- (unsigned int)maxComputeTextures;
- (unsigned int)maxComputeThreadgroupMemory;
- (unsigned int)maxComputeThreadgroupMemoryAlignmentBytes;
- (unsigned int)maxFragmentBuffers;
- (unsigned int)maxFragmentInlineDataSize;
- (unsigned int)maxFragmentSamplers;
- (unsigned int)maxFragmentTextures;
- (unsigned int)maxFramebufferStorageBits;
- (unsigned int)maxFunctionConstantIndices;
- (unsigned int)maxInterpolants;
- (unsigned int)maxInterpolatedComponents;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned int)maxTextureDepth3D;
- (unsigned int)maxTextureDimensionCube;
- (unsigned int)maxTextureHeight2D;
- (unsigned int)maxTextureHeight3D;
- (unsigned int)maxTextureLayers;
- (unsigned int)maxTextureWidth1D;
- (unsigned int)maxTextureWidth2D;
- (unsigned int)maxTextureWidth3D;
- (unsigned int)maxTotalComputeThreadsPerThreadgroup;
- (unsigned int)maxVertexAttributes;
- (unsigned int)maxVertexBuffers;
- (unsigned int)maxVertexInlineDataSize;
- (unsigned int)maxVertexSamplers;
- (unsigned int)maxVertexTextures;
- (unsigned int)maxVisibilityQueryOffset;
- (unsigned int)minBufferNoCopyAlignmentBytes;
- (unsigned int)minConstantBufferAlignmentBytes;
- (id)name;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned int)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(struct NSObject { Class x1; }*)arg2;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned int)arg2;
- (id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned int)arg3;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned int)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 60; })pipelineFlagsWithComputeVariant:(struct NSObject { Class x1; }*)arg1;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 56; })pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)pipelinePerformanceStatisticsWithComputeVariant:(struct NSObject { Class x1; }*)arg1;
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)productName;
- (void)registerCompiler:(id)arg1;
- (void)releaseCacheEntry:(struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; }*)arg1;
- (id)serialQueue;
- (BOOL)supportsFeatureSet:(unsigned int)arg1;
- (BOOL)supportsTextureSampleCount:(unsigned int)arg1;
- (void)unloadShaderCaches;
- (id)vendorName;
- (void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned int)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned int*)arg4;
- (void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned int*)arg2 nextStageVariant:(id)arg3;
- (id)vertexVariantWithCompilerOutput:(id)arg1;

@end
