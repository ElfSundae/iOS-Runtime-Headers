/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPairingCompatibilityVersionInfo : NSObject <NSCopying, NSSecureCoding> {
    int _maxPairingCompatibilityVersion;
    int _minPairingCompatibilityVersion;
    int _minQuickSwitchCompatibilityVersion;
    int _pairingCompatibilityVersion;
}

@property (nonatomic) int maxPairingCompatibilityVersion;
@property (nonatomic) int minPairingCompatibilityVersion;
@property (nonatomic) int minQuickSwitchCompatibilityVersion;
@property (nonatomic) int pairingCompatibilityVersion;

+ (void)setValue:(unsigned long long)arg1 forToken:(int)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)systemVersions;
+ (unsigned long long)valueForToken:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (int)maxPairingCompatibilityVersion;
- (int)minPairingCompatibilityVersion;
- (int)minQuickSwitchCompatibilityVersion;
- (int)pairingCompatibilityVersion;
- (void)setMaxPairingCompatibilityVersion:(int)arg1;
- (void)setMinPairingCompatibilityVersion:(int)arg1;
- (void)setMinQuickSwitchCompatibilityVersion:(int)arg1;
- (void)setPairingCompatibilityVersion:(int)arg1;

@end
