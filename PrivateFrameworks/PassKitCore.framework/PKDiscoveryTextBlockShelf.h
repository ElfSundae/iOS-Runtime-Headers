/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiscoveryTextBlockShelf : PKDiscoveryShelf {
    NSString * _bodyKey;
    NSString * _ledeKey;
    NSString * _localizedBody;
    NSString * _localizedLede;
    NSString * _localizedSectionHeaderLine;
    NSString * _sectionHeaderLineKey;
    long long  _style;
}

@property (nonatomic, readonly) NSString *bodyKey;
@property (nonatomic, readonly) NSString *ledeKey;
@property (nonatomic, retain) NSString *localizedBody;
@property (nonatomic, retain) NSString *localizedLede;
@property (nonatomic, retain) NSString *localizedSectionHeaderLine;
@property (nonatomic, readonly) NSString *sectionHeaderLineKey;
@property (nonatomic, readonly) long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bodyKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)ledeKey;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (id)localizedBody;
- (id)localizedLede;
- (id)localizedSectionHeaderLine;
- (id)sectionHeaderLineKey;
- (void)setLocalizedBody:(id)arg1;
- (void)setLocalizedLede:(id)arg1;
- (void)setLocalizedSectionHeaderLine:(id)arg1;
- (long long)style;

@end
