/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASALevelControl : ASAControl

@property (nonatomic, readonly) struct AudioValueRange { double x1; double x2; } decibelRange;
@property (nonatomic) float decibelValue;
@property (nonatomic, readonly) float maximumDecibelValue;
@property (nonatomic, readonly) float minimumDecibelValue;
@property (nonatomic) float scalarValue;

- (id)coreAudioClassName;
- (float)decibelFromScalar:(float)arg1;
- (struct AudioValueRange { double x1; double x2; })decibelRange;
- (float)decibelValue;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (float)maximumDecibelValue;
- (float)minimumDecibelValue;
- (float)scalarFromDecibel:(float)arg1;
- (float)scalarValue;
- (void)setDecibelValue:(float)arg1;
- (void)setScalarValue:(float)arg1;

@end
