/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioSampleRate : HMDNumberParser <NSSecureCoding> {
    unsigned int  _sampleRate;
}

@property (nonatomic, readonly) unsigned int sampleRate;

+ (id)arrayWithRates:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleRate:(unsigned int)arg1;
- (id)initWithTLVData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)sampleRate;

@end
