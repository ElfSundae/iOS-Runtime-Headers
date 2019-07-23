/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleId;
    unsigned int _capabilities;
    NSString *_localizedDisplayName;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic, readonly) NSString *localizedDisplayName;

+ (id)capabilitiesToString:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (unsigned int)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 localizedDisplayName:(id)arg2 capabilities:(unsigned int)arg3;
- (id)initWithCoder:(id)arg1;
- (id)localizedDisplayName;
- (void)setCapabilities:(unsigned int)arg1;

@end
