/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSpriteNode : SKNode <SKWarpable> {
    SKLightNode * _light;
    BOOL  _shouldRepeatTexture;
    struct SKCSpriteNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _skcSpriteNode;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } anchorPoint;
@property (nonatomic) int blendMode;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } centerRect;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) float colorBlendFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic, retain) SKTexture *normalTexture;
@property (nonatomic) struct CGSize { float x1; float x2; } repeatTextureSize;
@property (nonatomic, retain) SKShader *shader;
@property (nonatomic) unsigned int shadowCastBitMask;
@property (nonatomic) unsigned int shadowedBitMask;
@property (nonatomic) BOOL shouldRepeatTexture;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic) int subdivisionLevels;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKTexture *texture;
@property (nonatomic, retain) SKWarpGeometry *warpGeometry;

+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(BOOL)arg2;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)_makeBackingNode;
- (BOOL)_pathFromTextureToPoints:(/* Warning: Unrecognized filer type: '8' using 'void*' */ void***)arg1 outSize:(unsigned int*)arg2 accuracy:(float)arg3;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (int)blendMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })centerRect;
- (id)color;
- (float)colorBlendFactor;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)isEqualToNode:(id)arg1;
- (unsigned int)lightingBitMask;
- (id)normalTexture;
- (BOOL)repeatTexture;
- (struct CGSize { float x1; float x2; })repeatTextureSize;
- (void)scaleToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenterRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(float)arg1;
- (void)setLightingBitMask:(unsigned int)arg1;
- (void)setNormalTexture:(id)arg1;
- (void)setRepeatTexture:(BOOL)arg1;
- (void)setRepeatTextureSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShader:(id)arg1;
- (void)setShadowCastBitMask:(unsigned int)arg1;
- (void)setShadowedBitMask:(unsigned int)arg1;
- (void)setShouldRepeatTexture:(BOOL)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSubdivisionLevels:(int)arg1;
- (void)setTexture:(id)arg1;
- (void)setWarpGeometry:(id)arg1;
- (id)shader;
- (unsigned int)shadowCastBitMask;
- (unsigned int)shadowedBitMask;
- (BOOL)shouldRepeatTexture;
- (struct CGSize { float x1; float x2; })size;
- (int)subdivisionLevels;
- (id)texture;
- (id)warpGeometry;

@end
