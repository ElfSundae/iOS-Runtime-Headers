/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSAssetBase : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSNumber * _compatibilityVersion;
    NSNumber * _contentVersion;
    NSString * _masteredVersion;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSNumber *compatibilityVersion;
@property (nonatomic, copy) NSNumber *contentVersion;
@property (nonatomic, copy) NSString *masteredVersion;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)compatibilityVersion;
- (id)contentVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)masteredVersion;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCompatibilityVersion:(id)arg1;
- (void)setContentVersion:(id)arg1;
- (void)setMasteredVersion:(id)arg1;

@end
