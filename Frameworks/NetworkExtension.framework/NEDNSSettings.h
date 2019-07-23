/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEDNSSettings : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _domainName;
    NSArray * _matchDomains;
    BOOL  _matchDomainsNoSearch;
    NSArray * _searchDomains;
    NSArray * _servers;
}

@property (copy) NSString *domainName;
@property (copy) NSArray *matchDomains;
@property BOOL matchDomainsNoSearch;
@property (copy) NSArray *searchDomains;
@property (readonly) NSArray *servers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServers:(id)arg1;
- (id)matchDomains;
- (BOOL)matchDomainsNoSearch;
- (id)searchDomains;
- (id)servers;
- (void)setDomainName:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setMatchDomainsNoSearch:(BOOL)arg1;
- (void)setSearchDomains:(id)arg1;

@end
