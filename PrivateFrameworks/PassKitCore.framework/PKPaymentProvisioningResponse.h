/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {
    NSArray * _moreInfoURLs;
    NSString * _ownershipToken;
    NSString * _ownershipTokenIdentifier;
    NSURL * _passURL;
    bool  _willProvisionWithAuthenticationDisabled;
}

@property (nonatomic, readonly, copy) NSArray *moreInfoURLs;
@property (nonatomic, readonly, copy) NSString *ownershipToken;
@property (nonatomic, readonly, copy) NSString *ownershipTokenIdentifier;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, readonly) bool willProvisionWithAuthenticationDisabled;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)moreInfoURLs;
- (id)ownershipToken;
- (id)ownershipTokenIdentifier;
- (id)passURL;
- (void)setPassURL:(id)arg1;
- (bool)willProvisionWithAuthenticationDisabled;

@end
