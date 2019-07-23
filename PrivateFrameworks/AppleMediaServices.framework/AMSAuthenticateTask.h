/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthenticateTask : AMSTask {
    NSNumber * _DSID;
    NSString * _altDSID;
    ACAccount * _authenticatedAccount;
    AMSAuthenticateOptions * _options;
    NSString * _password;
    NSString * _rawPassword;
    NSString * _username;
}

@property (nonatomic, retain) NSNumber *DSID;
@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) ACAccount *authenticatedAccount;
@property (nonatomic, retain) AMSAuthenticateOptions *options;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *rawPassword;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)DSID;
- (id)_accountForAuthentication;
- (id)_accountStoreForAuthentication;
- (id)_createVerifyCredentialOptionsWithCredentialSource:(unsigned long long)arg1;
- (id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_shouldPerformInProcessAuthKitUpdateForAccount:(id)arg1;
- (id)_updateAccountWithAuthKit:(id)arg1 error:(id*)arg2;
- (void)_updateAccountWithProvidedInformation:(id)arg1;
- (id)altDSID;
- (id)authenticatedAccount;
- (id)init;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)options;
- (id)password;
- (id)performAuthentication;
- (id)rawPassword;
- (void)setAltDSID:(id)arg1;
- (void)setAuthenticatedAccount:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
