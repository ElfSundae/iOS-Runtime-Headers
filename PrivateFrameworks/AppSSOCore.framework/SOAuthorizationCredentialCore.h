/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

@interface SOAuthorizationCredentialCore : NSObject <NSSecureCoding> {
    NSDictionary * _httpAuthorizationHeaders;
    NSData * _httpBody;
    NSHTTPURLResponse * _httpResponse;
}

@property (nonatomic, retain) NSDictionary *httpAuthorizationHeaders;
@property (nonatomic, retain) NSData *httpBody;
@property (nonatomic, copy) NSHTTPURLResponse *httpResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)httpAuthorizationHeaders;
- (id)httpBody;
- (id)httpResponse;
- (id)initWithAuthorizationCredential:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setHttpAuthorizationHeaders:(id)arg1;
- (void)setHttpBody:(id)arg1;
- (void)setHttpResponse:(id)arg1;

@end
