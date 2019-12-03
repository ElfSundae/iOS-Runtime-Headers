/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DShaderEffects * mEffects;
    NSMutableArray * mEffectsStatesStack;
    NSIndexSet * mEnabled;
    struct StateStack<TSCH3D::ObjectState, 6> { 
        unsigned long long mIndex; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { 
                struct Lookup<TSCH3D::AttributeSpecs> {} *__begin_; 
                struct Lookup<TSCH3D::AttributeSpecs> {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { 
                    struct Lookup<TSCH3D::AttributeSpecs> {} *__value_; 
                } __end_cap_; 
            } mAttributes; 
            struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { 
                struct Lookup<TSCH3D::TextureAttributes> {} *__begin_; 
                struct Lookup<TSCH3D::TextureAttributes> {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { 
                    struct Lookup<TSCH3D::TextureAttributes> {} *__value_; 
                } __end_cap_; 
            } mTextures; 
        } mCurrent; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { 
                struct Lookup<TSCH3D::AttributeSpecs> {} *__begin_; 
                struct Lookup<TSCH3D::AttributeSpecs> {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { 
                    struct Lookup<TSCH3D::AttributeSpecs> {} *__value_; 
                } __end_cap_; 
            } mAttributes; 
            struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { 
                struct Lookup<TSCH3D::TextureAttributes> {} *__begin_; 
                struct Lookup<TSCH3D::TextureAttributes> {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { 
                    struct Lookup<TSCH3D::TextureAttributes> {} *__value_; 
                } __end_cap_; 
            } mTextures; 
        } mStack[6]; 
    }  mObjectStateStack;
    struct tmat4x4<float> { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } value[4]; 
    }  mProjection;
    bool  mProjectionChanged;
    struct StateStack<TSCH3D::RenderState, 10> { 
        unsigned long long mIndex; 
        struct RenderState { 
            struct BlendState { 
                bool mBlend; 
                int mBlendMode; 
            } blendState; 
            struct DepthState { 
                bool depthTest; 
                bool depthMask; 
            } depthState; 
            bool culling; 
            bool cullBack; 
            bool polygonOffset; 
            float polygonOffsetFactor; 
            float polygonOffsetUnits; 
            struct EnableClipDistances { 
                struct array<bool, 8> { 
                    bool __elems_[8]; 
                } states; 
            } enableClipDistances; 
        } mCurrent; 
        struct RenderState { 
            struct BlendState { 
                bool mBlend; 
                int mBlendMode; 
            } blendState; 
            struct DepthState { 
                bool depthTest; 
                bool depthMask; 
            } depthState; 
            bool culling; 
            bool cullBack; 
            bool polygonOffset; 
            float polygonOffsetFactor; 
            float polygonOffsetUnits; 
            struct EnableClipDistances { 
                struct array<bool, 8> { 
                    bool __elems_[8]; 
                } states; 
            } enableClipDistances; 
        } mStack[10]; 
    }  mRenderStateStack;
    bool  mTransformChanged;
    struct StateStack<glm::detail::tmat4x4<float>, 8> { 
        unsigned long long mIndex; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
                union { 
                    float w; 
                    float a; 
                    float q; 
                } ; 
            } value[4]; 
        } mCurrent; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
                union { 
                    float w; 
                    float a; 
                    float q; 
                } ; 
            } value[4]; 
        } mStack[8]; 
    }  mTransformStack;
}

@property (nonatomic, readonly) TSCH3DShaderEffectsStates *currentEffectsStates;
@property (nonatomic, retain) NSMutableArray *effectsStatesStack;
@property (nonatomic, readonly) bool projectionChanged;
@property (nonatomic, readonly) bool transformChanged;

+ (id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)copyProjectionInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)copyTransformInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (id)currentEffectsStates;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)currentTransform;
- (id)effects;
- (id)effectsStates;
- (id)effectsStatesStack;
- (id)initWithOriginal:(id)arg1;
- (id)initWithOriginal:(id)arg1 enableTypes:(id)arg2;
- (bool)matrixEnabled;
- (void)multiply:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (bool)objectStateEnabled;
- (struct StateStack<TSCH3D::ObjectState, 6> { unsigned long long x1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; } x_2_1_1; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> {} *x_2_2_1; struct Lookup<TSCH3D::AttributeSpecs> {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> {} *x_3_3_1; } x_2_2_3; } x_2_1_2; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> {} *x_3_2_1; struct Lookup<TSCH3D::TextureAttributes> {} *x_3_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> {} *x_3_3_1; } x_3_2_3; } x_2_1_3; } x2; }*)objectStateStack;
- (void)popMatrix;
- (void)popRenderState;
- (void)popState;
- (void)projection:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (bool)projectionChanged;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)projectionTransform;
- (void)pushMatrix;
- (void)pushRenderState;
- (void)pushState;
- (struct RenderState { struct BlendState { bool x_1_1_1; int x_1_1_2; } x1; struct DepthState { bool x_2_1_1; bool x_2_1_2; } x2; bool x3; bool x4; bool x5; float x6; float x7; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_8_1_1; } x8; })renderState;
- (bool)renderStateEnabled;
- (void)replace:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)resetBuffers;
- (void)resetTransformChangeFlags;
- (void)scale:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;
- (void)setEffectsStatesStack:(id)arg1;
- (void)setRenderState:(const struct RenderState { struct BlendState { bool x_1_1_1; int x_1_1_2; } x1; struct DepthState { bool x_2_1_1; bool x_2_1_2; } x2; bool x3; bool x4; bool x5; float x6; float x7; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_8_1_1; } x8; }*)arg1;
- (bool)shaderEnabled;
- (bool)transformChanged;
- (void)translate:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;

@end
