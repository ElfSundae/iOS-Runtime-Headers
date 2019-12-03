/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIThemeTextureRendition : CUIThemeRendition {
    CUIStructuredThemeStore * _sourceProvider;
    TXRTextureInfo * _textureInfo;
    long long  _textureInterpretation;
    NSMutableArray * _textureMipLevels;
    bool  _textureSourceImageOpaque;
}

- (void).cxx_destruct;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)_texturedImageWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)mipLevels;
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4;
- (id)provideTextureInfo;

@end
