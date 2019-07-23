/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSharedResources : NSObject {
    struct unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas> > { 
        struct __compressed_pair<ggl::AlphaAtlas *, std::__1::default_delete<ggl::AlphaAtlas> > { 
            struct AlphaAtlas {} *__first_; 
        } __ptr_; 
    }  _alphaAtlas;
    struct shared_ptr<ggl::Device> { 
        struct Device {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    struct unique_ptr<ggl::DistanceAtlas, std::__1::default_delete<ggl::DistanceAtlas> > { 
        struct __compressed_pair<ggl::DistanceAtlas *, std::__1::default_delete<ggl::DistanceAtlas> > { 
            struct DistanceAtlas {} *__first_; 
        } __ptr_; 
    }  _distanceAtlas;
    VKGGLTextureManager * _gglTextureManager;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
        struct __compressed_pair<ggl::IsoAlphaAtlas *, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
            struct IsoAlphaAtlas {} *__first_; 
        } __ptr_; 
    }  _highInflationAlphaAtlas;
    VKIconManager * _iconManager;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
        struct __compressed_pair<ggl::IsoAlphaAtlas *, std::__1::default_delete<ggl::IsoAlphaAtlas> > { 
            struct IsoAlphaAtlas {} *__first_; 
        } __ptr_; 
    }  _isoAlphaAtlas;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    unsigned int  _referenceCount;
    VKResourceManager * _resourceManager;
    struct shared_ptr<ggl::StandardLibrary> { 
        struct StandardLibrary {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _shaderLibrary;
    VKShieldManager * _shieldManager;
    struct shared_ptr<md::StylesheetVendor> { 
        struct StylesheetVendor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stylesheetVendor;
}

@property (nonatomic, readonly) struct AlphaAtlas { unsigned int x1; bool x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; struct Texture2D {} *x7; }*alphaAtlas;
@property (nonatomic, readonly) struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*device;
@property (nonatomic, readonly) struct DistanceAtlas { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct Texture2D {} *x5; }*distanceAtlas;
@property (nonatomic, readonly) VKGGLTextureManager *gglTextureManager;
@property (nonatomic, readonly) struct IsoAlphaAtlas { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct Texture2D {} *x6; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; }*highInflationAlphaAtlas;
@property (nonatomic, readonly) VKIconManager *iconManager;
@property (nonatomic, readonly) struct IsoAlphaAtlas { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct Texture2D {} *x6; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; }*isoAlphaAtlas;
@property (nonatomic, readonly) VKResourceManager *resourceManager;
@property (nonatomic, readonly) const struct StandardLibrary { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct ShaderLibraryDescriptor {} *x4; /* Warning: unhandled struct encoding: '{vector<ggl::ShaderLibrary::FunctionEntry' */ struct x5; }*shaderLibrary; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::Shader> > >=^{shared_ptr<ggl::Shader>}}}{shared_ptr<ggl::ShaderLibraryData>=^{ShaderLibraryData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) VKShieldManager *shieldManager;
@property (nonatomic, readonly) struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; } stylesheetVendor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addResourceUser;
- (BOOL)_hasResourceUsers;
- (id)_initWithConfiguration:(id)arg1 device:(const struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; }*)arg2 standardLibrary:(const struct shared_ptr<ggl::StandardLibrary> { struct StandardLibrary {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (void)_removeResourceUser;
- (struct AlphaAtlas { unsigned int x1; bool x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; struct Texture2D {} *x7; }*)alphaAtlas;
- (void)dealloc;
- (struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)device;
- (struct DistanceAtlas { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct Texture2D {} *x5; }*)distanceAtlas;
- (id)gglTextureManager;
- (struct IsoAlphaAtlas { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct Texture2D {} *x6; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; }*)highInflationAlphaAtlas;
- (id)iconManager;
- (struct IsoAlphaAtlas { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct Texture2D {} *x6; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; }*)isoAlphaAtlas;
- (void)purge;
- (id)resourceManager;
- (const struct StandardLibrary { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct ShaderLibraryDescriptor {} *x4; struct vector<ggl::ShaderLibrary::FunctionEntry, std::__1::allocator<ggl::ShaderLibrary::FunctionEntry> > { struct FunctionEntry {} *x_5_1_1; struct FunctionEntry {} *x_5_1_2; struct __compressed_pair<ggl::ShaderLibrary::FunctionEntry *, std::__1::allocator<ggl::ShaderLibrary::FunctionEntry> > { struct FunctionEntry {} *x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::ShaderLibrary::ShaderEntry, std::__1::allocator<ggl::ShaderLibrary::ShaderEntry> > { struct ShaderEntry {} *x_6_1_1; struct ShaderEntry {} *x_6_1_2; struct __compressed_pair<ggl::ShaderLibrary::ShaderEntry *, std::__1::allocator<ggl::ShaderLibrary::ShaderEntry> > { struct ShaderEntry {} *x_3_2_1; } x_6_1_3; } x6; struct vector<std::__1::shared_ptr<ggl::Shader>, std::__1::allocator<std::__1::shared_ptr<ggl::Shader> > > { struct shared_ptr<ggl::Shader> {} *x_7_1_1; struct shared_ptr<ggl::Shader> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::Shader> *, std::__1::allocator<std::__1::shared_ptr<ggl::Shader> > > { struct shared_ptr<ggl::Shader> {} *x_3_2_1; } x_7_1_3; } x7; }*)shaderLibrary;
- (id)shieldManager;
- (struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; })stylesheetVendor;

@end
