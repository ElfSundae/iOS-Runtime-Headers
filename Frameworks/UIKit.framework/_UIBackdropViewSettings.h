/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBackdropViewSettings : NSObject {
    BOOL _appliesTintAndBlurSettings;
    _UIBackdropView *_backdrop;
    BOOL _backdropVisible;
    int _blurHardEdges;
    NSString *_blurQuality;
    float _blurRadius;
    float _colorBurnTintAlpha;
    float _colorBurnTintLevel;
    UIImage *_colorBurnTintMaskImage;
    float _colorOffsetAlpha;
    NSValue *_colorOffsetMatrix;
    _UIBackdropColorSettings *_colorSettings;
    UIColor *_colorTint;
    float _colorTintAlpha;
    float _colorTintMaskAlpha;
    UIImage *_colorTintMaskImage;
    UIColor *_combinedTintColor;
    BOOL _darkenWithSourceOver;
    float _darkeningTintAlpha;
    float _darkeningTintBrightness;
    float _darkeningTintHue;
    UIImage *_darkeningTintMaskImage;
    float _darkeningTintSaturation;
    BOOL _designMode;
    BOOL _enabled;
    BOOL _explicitlySetGraphicsQuality;
    float _filterMaskAlpha;
    UIImage *_filterMaskImage;
    int _graphicsQuality;
    float _grayscaleTintAlpha;
    float _grayscaleTintLevel;
    float _grayscaleTintMaskAlpha;
    UIImage *_grayscaleTintMaskImage;
    BOOL _highlighted;
    UIColor *_legibleColor;
    BOOL _lightenGrayscaleWithSourceOver;
    int _renderingHint;
    BOOL _requiresColorStatistics;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    float _saturationDeltaFactor;
    float _scale;
    BOOL _selected;
    int _stackingLevel;
    double _statisticsInterval;
    int _style;
    int _suppressSettingsDidChange;
    BOOL _usesBackdropEffectView;
    BOOL _usesColorBurnTintView;
    BOOL _usesColorOffset;
    BOOL _usesColorTintView;
    BOOL _usesContentView;
    BOOL _usesDarkeningTintView;
    BOOL _usesGrayscaleTintView;
    unsigned int _version;
    float _zoom;
    BOOL _zoomsBack;
}

@property (nonatomic) BOOL appliesTintAndBlurSettings;
@property (nonatomic) _UIBackdropView *backdrop;
@property (getter=isBackdropVisible, nonatomic) BOOL backdropVisible;
@property (nonatomic) int blurHardEdges;
@property (nonatomic, copy) NSString *blurQuality;
@property (nonatomic) float blurRadius;
@property (nonatomic) BOOL blursWithHardEdges;
@property (nonatomic) float colorBurnTintAlpha;
@property (nonatomic) float colorBurnTintLevel;
@property (nonatomic, retain) UIImage *colorBurnTintMaskImage;
@property (nonatomic) float colorOffsetAlpha;
@property (nonatomic, retain) NSValue *colorOffsetMatrix;
@property (nonatomic, retain) _UIBackdropColorSettings *colorSettings;
@property (nonatomic, retain) UIColor *colorTint;
@property (nonatomic) float colorTintAlpha;
@property (nonatomic) float colorTintMaskAlpha;
@property (nonatomic, retain) UIImage *colorTintMaskImage;
@property (nonatomic, readonly) UIColor *combinedTintColor;
@property (nonatomic) BOOL darkenWithSourceOver;
@property (nonatomic) float darkeningTintAlpha;
@property (nonatomic) float darkeningTintBrightness;
@property (nonatomic) float darkeningTintHue;
@property (nonatomic, retain) UIImage *darkeningTintMaskImage;
@property (nonatomic) float darkeningTintSaturation;
@property (setter=setDesignMode:, nonatomic) BOOL designMode;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic) BOOL explicitlySetGraphicsQuality;
@property (nonatomic) float filterMaskAlpha;
@property (nonatomic, retain) UIImage *filterMaskImage;
@property (nonatomic) int graphicsQuality;
@property (nonatomic) float grayscaleTintAlpha;
@property (nonatomic) float grayscaleTintLevel;
@property (nonatomic) float grayscaleTintMaskAlpha;
@property (nonatomic, retain) UIImage *grayscaleTintMaskImage;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIColor *legibleColor;
@property (nonatomic) BOOL lightenGrayscaleWithSourceOver;
@property (nonatomic) int renderingHint;
@property (nonatomic) BOOL requiresColorStatistics;
@property (nonatomic) float saturationDeltaFactor;
@property (nonatomic) float scale;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) int stackingLevel;
@property (nonatomic) double statisticsInterval;
@property (nonatomic, readonly) int style;
@property (nonatomic) int suppressSettingsDidChange;
@property (nonatomic) BOOL usesBackdropEffectView;
@property (nonatomic) BOOL usesColorBurnTintView;
@property (nonatomic) BOOL usesColorOffset;
@property (nonatomic) BOOL usesColorTintView;
@property (nonatomic) BOOL usesContentView;
@property (nonatomic) BOOL usesDarkeningTintView;
@property (nonatomic) BOOL usesGrayscaleTintView;
@property (nonatomic) unsigned int version;
@property (nonatomic) float zoom;
@property (nonatomic) BOOL zoomsBack;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)darkeningTintColor;
+ (id)settingsForPrivateStyle:(int)arg1;
+ (id)settingsForPrivateStyle:(int)arg1 graphicsQuality:(int)arg2;
+ (id)settingsForStyle:(int)arg1;
+ (id)settingsForStyle:(int)arg1 graphicsQuality:(int)arg2;
+ (id)settingsPreservingHintsFromSettings:(id)arg1 graphicsQuality:(int)arg2;

- (void).cxx_destruct;
- (void)addKeyPathObserver:(id)arg1;
- (BOOL)appliesTintAndBlurSettings;
- (id)backdrop;
- (int)blurHardEdges;
- (id)blurQuality;
- (float)blurRadius;
- (BOOL)blursWithHardEdges;
- (void)clearRunLoopObserver;
- (float)colorBurnTintAlpha;
- (float)colorBurnTintLevel;
- (id)colorBurnTintMaskImage;
- (float)colorOffsetAlpha;
- (id)colorOffsetMatrix;
- (id)colorSettings;
- (id)colorTint;
- (float)colorTintAlpha;
- (float)colorTintMaskAlpha;
- (id)colorTintMaskImage;
- (id)combinedTintColor;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (BOOL)darkenWithSourceOver;
- (float)darkeningTintAlpha;
- (float)darkeningTintBrightness;
- (float)darkeningTintHue;
- (id)darkeningTintMaskImage;
- (float)darkeningTintSaturation;
- (void)dealloc;
- (id)description;
- (BOOL)designMode;
- (BOOL)explicitlySetGraphicsQuality;
- (float)filterMaskAlpha;
- (id)filterMaskImage;
- (int)graphicsQuality;
- (float)grayscaleTintAlpha;
- (float)grayscaleTintLevel;
- (float)grayscaleTintMaskAlpha;
- (id)grayscaleTintMaskImage;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithDefaultValuesForGraphicsQuality:(int)arg1;
- (BOOL)isBackdropVisible;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (id)legibleColor;
- (BOOL)lightenGrayscaleWithSourceOver;
- (void)removeKeyPathObserver:(id)arg1;
- (int)renderingHint;
- (BOOL)requiresBackdropLayer;
- (BOOL)requiresColorStatistics;
- (void)restoreDefaultValues;
- (float)saturationDeltaFactor;
- (float)scale;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)setAppliesTintAndBlurSettings:(BOOL)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBackdropVisible:(BOOL)arg1;
- (void)setBlurHardEdges:(int)arg1;
- (void)setBlurQuality:(id)arg1;
- (void)setBlurRadius:(float)arg1;
- (void)setBlursWithHardEdges:(BOOL)arg1;
- (void)setColorBurnTintAlpha:(float)arg1;
- (void)setColorBurnTintLevel:(float)arg1;
- (void)setColorBurnTintMaskImage:(id)arg1;
- (void)setColorOffsetAlpha:(float)arg1;
- (void)setColorOffsetMatrix:(id)arg1;
- (void)setColorSettings:(id)arg1;
- (void)setColorTint:(id)arg1;
- (void)setColorTintAlpha:(float)arg1;
- (void)setColorTintMaskAlpha:(float)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setDarkenWithSourceOver:(BOOL)arg1;
- (void)setDarkeningTintAlpha:(float)arg1;
- (void)setDarkeningTintBrightness:(float)arg1;
- (void)setDarkeningTintHue:(float)arg1;
- (void)setDarkeningTintMaskImage:(id)arg1;
- (void)setDarkeningTintSaturation:(float)arg1;
- (void)setDefaultValues;
- (void)setDesignMode:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExplicitlySetGraphicsQuality:(BOOL)arg1;
- (void)setFilterMaskAlpha:(float)arg1;
- (void)setFilterMaskImage:(id)arg1;
- (void)setGraphicsQuality:(int)arg1;
- (void)setGrayscaleTintAlpha:(float)arg1;
- (void)setGrayscaleTintLevel:(float)arg1;
- (void)setGrayscaleTintMaskAlpha:(float)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLegibleColor:(id)arg1;
- (void)setLightenGrayscaleWithSourceOver:(BOOL)arg1;
- (void)setRenderingHint:(int)arg1;
- (void)setRequiresColorStatistics:(BOOL)arg1;
- (void)setSaturationDeltaFactor:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setStackingLevel:(int)arg1;
- (void)setStackinglevel:(int)arg1;
- (void)setStatisticsInterval:(double)arg1;
- (void)setStyle:(int)arg1;
- (void)setSuppressSettingsDidChange:(int)arg1;
- (void)setUsesBackdropEffectView:(BOOL)arg1;
- (void)setUsesColorBurnTintView:(BOOL)arg1;
- (void)setUsesColorOffset:(BOOL)arg1;
- (void)setUsesColorTintView:(BOOL)arg1;
- (void)setUsesContentView:(BOOL)arg1;
- (void)setUsesDarkeningTintView:(BOOL)arg1;
- (void)setUsesGrayscaleTintView:(BOOL)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setZoom:(float)arg1;
- (void)setZoomsBack:(BOOL)arg1;
- (int)stackingLevel;
- (double)statisticsInterval;
- (int)style;
- (int)suppressSettingsDidChange;
- (BOOL)usesBackdropEffectView;
- (BOOL)usesColorBurnTintView;
- (BOOL)usesColorOffset;
- (BOOL)usesColorTintView;
- (BOOL)usesContentView;
- (BOOL)usesDarkeningTintView;
- (BOOL)usesGrayscaleTintView;
- (unsigned int)version;
- (float)zoom;
- (BOOL)zoomsBack;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (id)MPU_settingsForNowPlayingBackdrop;
+ (id)MPU_settingsForNowPlayingVibrantContent;

@end
