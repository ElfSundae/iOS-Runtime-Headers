/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountUserInfoUpdate : NSObject <NSSecureCoding, PKRecordObject> {
    NSDate * _updatedDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *updatedDate;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUpdatedDate:(id)arg1;
- (id)updatedDate;

@end
