/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _borderMargins;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _borderRadii;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _borderWidths;
    IKColor * _iKBackgroundColor;
    int  _imageContentMode;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _imagePadding;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    int  _imageTreatment;
    UIColor * _shadowColor;
    struct CGSize { 
        float width; 
        float height; 
    }  _shadowOffset;
    float  _shadowRadius;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } borderMargins;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } borderWidths;
@property (nonatomic) int imageContentMode;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imagePadding;
@property (nonatomic) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic) int imageTreatment;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { float x1; float x2; } shadowOffset;
@property (nonatomic) float shadowRadius;

+ (id)appIconConsumerWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)applePackIconConsumer;
+ (id)brickConsumer;
+ (id)brickConsumerWithBrickSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)cardIconConsumer;
+ (id)cardProductImageConsumer;
+ (id)categoriesMessagesConsumer;
+ (id)categoryIconConsumer;
+ (id)giftComposeProductImageConsumer;
+ (id)giftResultIconConsumer;
+ (id)giftResultProductImageConsumer;
+ (id)giftThemeIconConsumer;
+ (id)giftThemeProductImageConsumer;
+ (id)gridIconConsumer;
+ (BOOL)isImageCompressionEnabled;
+ (id)listIconConsumer;
+ (id)lockupIconConsumerWithSize:(int)arg1;
+ (id)lockupProductImageConsumerWithSize:(int)arg1;
+ (id)manageMessagesConsumer;
+ (id)mixedTopChartsNewsstandConsumer;
+ (id)newsstandRoomNewsstandConsumer;
+ (id)newsstandSwooshNewsstandConsumer;
+ (id)parentBundleIconConsumer;
+ (id)productImageConsumerWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)productPageProductImageConsumer;
+ (id)purchasedIconConsumer;
+ (id)purchasedProductImageConsumer;
+ (id)roomIconConsumer;
+ (id)roomProductImageConsumer;
+ (id)safariBannerIconConsumer;
+ (id)safariBannerProductImageConsumer;
+ (id)shareSheetIconConsumer;
+ (id)swooshNewsstandConsumer;
+ (id)topChartsIconConsumer;
+ (id)topChartsNewsstandConsumer;
+ (id)updatesIconConsumer;
+ (id)updatesProductImageConsumer;
+ (id)wishlistIconConsumer;
+ (id)wishlistProductImageConsumer;

- (void).cxx_destruct;
- (id)_arcRoundedImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cornerRadius:(float)arg3 drawBlock:(id /* block */)arg4;
- (BOOL)_backgroundIsOpaque;
- (id)_defaultPlaceholderColor;
- (void)_drawBordersWithImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_imageWithSize:(struct CGSize { float x1; float x2; })arg1 isOpaque:(BOOL)arg2 drawBlock:(id /* block */)arg3;
- (id)_leftToRightGradient:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_outputImageWithInputSize:(struct CGSize { float x1; float x2; })arg1 outputSize:(struct CGSize { float x1; float x2; })arg2 drawBlock:(id /* block */)arg3;
- (id /* block */)_placeholderCornerPathBlock;
- (id)_radialBlurImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_roundedBorderWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_scaledImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)_uberImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 drawBlock:(id /* block */)arg3;
- (id)backgroundColor;
- (id)borderColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderMargins;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderWidths;
- (int)imageContentMode;
- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)imageForImage:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imagePadding;
- (id)imagePlaceholderForColor:(id)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (int)imageTreatment;
- (id)init;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 treatment:(int)arg2;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isImagePlaceholderAvailable;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBorderWidths:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageContentMode:(int)arg1;
- (void)setImagePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImageTreatment:(int)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowRadius:(float)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)shadowRadius;

@end
