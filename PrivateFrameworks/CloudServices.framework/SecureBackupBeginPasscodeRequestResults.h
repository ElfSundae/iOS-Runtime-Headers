/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding> {
    NSData * _cert;
    NSString * _dsid;
    NSString * _escrowFederation;
    NSString * _iCloudEnvironment;
    NSString * _uuid;
}

@property (readonly) NSData *cert;
@property (readonly) NSString *dsid;
@property (readonly) NSString *escrowFederation;
@property (readonly) NSString *iCloudEnvironment;
@property (readonly) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cert;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)escrowFederation;
- (id)iCloudEnvironment;
- (id)initWithCoder:(id)arg1;
- (id)initWithiCloudEnvironment:(id)arg1 escrowFederation:(id)arg2 escrowResponse:(id)arg3 uuid:(id)arg4;
- (id)uuid;

@end
