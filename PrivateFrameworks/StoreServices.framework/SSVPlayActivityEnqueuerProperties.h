/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityEnqueuerProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _SBEnabled;
    NSString * _buildVersion;
    NSString * _deviceGUID;
    NSString * _deviceName;
    NSNumber * _privateListeningEnabled;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
    long long  _systemReleaseType;
    NSTimeZone * _timeZone;
}

@property (getter=isSBEnabled, nonatomic, readonly) bool SBEnabled;
@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *deviceGUID;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (getter=isPrivateListeningEnabled, nonatomic, readonly, copy) NSNumber *privateListeningEnabled;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly, copy) NSString *storeFrontID;
@property (nonatomic, readonly) long long systemReleaseType;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceGUID;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)isPrivateListeningEnabled;
- (bool)isSBEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;
- (long long)systemReleaseType;
- (id)timeZone;

@end
