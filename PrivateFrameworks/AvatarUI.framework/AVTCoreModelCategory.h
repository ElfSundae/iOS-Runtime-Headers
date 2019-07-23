/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTCoreModelCategory : NSObject {
    AVTCoreModelColorPalette * _colorPalette;
    long long  _presetCategory;
    NSArray * _presets;
    NSArray * _rows;
    AVTCoreModelColorPalette * _secondaryColorPalette;
    struct NSDictionary { Class x1; } * _tags;
}

@property (nonatomic, readonly) AVTCoreModelColorPalette *colorPalette;
@property (nonatomic, readonly) long long presetCategory;
@property (nonatomic, readonly, copy) NSArray *presets;
@property (nonatomic, readonly, copy) NSArray *rows;
@property (nonatomic, readonly) AVTCoreModelColorPalette *secondaryColorPalette;
@property (nonatomic, readonly, copy) NSDictionary *tags;

- (void).cxx_destruct;
- (id)colorPalette;
- (id)description;
- (id)initWithPresetCategory:(long long)arg1 colorPalette:(id)arg2 secondaryColorPalette:(id)arg3 presets:(id)arg4 tags:(struct NSDictionary { Class x1; }*)arg5 rows:(id)arg6;
- (long long)presetCategory;
- (id)presets;
- (id)rows;
- (id)secondaryColorPalette;
- (struct NSDictionary { Class x1; }*)tags;

@end
