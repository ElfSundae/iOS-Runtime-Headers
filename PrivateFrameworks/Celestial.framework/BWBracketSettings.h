/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBracketSettings : NSObject {
    NSDictionary *_bracketedCaptureOverrides;
    NSArray *_exposureValues;
    BOOL _lensStabilizationEnabledForClientBracket;
    NSArray *_manualExposureBracketedCaptureParams;
    NSDictionary *_oisBracketedCaptureParams;
    BOOL _providePreBracketedEV0;
}

@property (nonatomic, copy) NSDictionary *bracketedCaptureOverrides;
@property (nonatomic, copy) NSArray *exposureValues;
@property (nonatomic) BOOL lensStabilizationEnabledForClientBracket;
@property (nonatomic, copy) NSArray *manualExposureBracketedCaptureParams;
@property (nonatomic, copy) NSDictionary *oisBracketedCaptureParams;
@property (nonatomic) BOOL providePreBracketedEV0;

+ (id)bracketSettings;

- (id)bracketedCaptureOverrides;
- (void)dealloc;
- (id)exposureValues;
- (BOOL)lensStabilizationEnabledForClientBracket;
- (id)manualExposureBracketedCaptureParams;
- (id)oisBracketedCaptureParams;
- (BOOL)providePreBracketedEV0;
- (void)setBracketedCaptureOverrides:(id)arg1;
- (void)setExposureValues:(id)arg1;
- (void)setLensStabilizationEnabledForClientBracket:(BOOL)arg1;
- (void)setManualExposureBracketedCaptureParams:(id)arg1;
- (void)setOisBracketedCaptureParams:(id)arg1;
- (void)setProvidePreBracketedEV0:(BOOL)arg1;

@end
