/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding> {
    long long  _action;
    NSString * _version;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryResponse:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
