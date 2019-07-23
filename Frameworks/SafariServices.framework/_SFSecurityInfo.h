/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSecurityInfo : NSObject <NSSecureCoding> {
    NSURL * _assessedURL;
    BOOL  _hasWarnedUser;
    SSBLookupResult * _result;
}

@property (nonatomic, retain) NSURL *assessedURL;
@property (nonatomic) BOOL hasWarnedUser;
@property (nonatomic, copy) SSBLookupResult *result;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assessedURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasWarnedUser;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(id)arg2 hasWarnedUser:(BOOL)arg3;
- (BOOL)isKnownToBeUnsafe;
- (id)result;
- (id)securityTypeDescription;
- (void)setAssessedURL:(id)arg1;
- (void)setHasWarnedUser:(BOOL)arg1;
- (void)setResult:(id)arg1;

@end
