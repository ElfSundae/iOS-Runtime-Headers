/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _VKLandmarkIconKey : NSObject {
    NSString *_name;
    int _size;
    struct VKIconStyleInfo { 
        unsigned char iconStyle; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconBadgeColor; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconGradientColor[2]; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconBadgeLightColor; 
        unsigned char iconBadgeLightBlendMode; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconGlyphColor; 
        unsigned char iconGlyphStyle; 
        unsigned char iconGlyphBlendMode; 
        float iconHaloSize; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconHaloColor; 
        struct CGSize { 
            float width; 
            float height; 
        } iconDropShadowOffset; 
        float iconDropShadowSize; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconDropShadowColor; 
        float iconCornerRadius; 
        float iconBrightness; 
        float iconBevelAmount; 
        unsigned int iconSourceStyleAttributeKey; 
        unsigned int iconSourceStyleMultipoiAttributeKey; 
    } _style;
}

- (id).cxx_construct;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 style:(struct VKIconStyleInfo { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; unsigned char x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; unsigned char x7; unsigned char x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct CGSize { float x_11_1_1; float x_11_1_2; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; unsigned int x17; unsigned int x18; }*)arg2 size:(int)arg3;
- (BOOL)isEqual:(id)arg1;

@end
