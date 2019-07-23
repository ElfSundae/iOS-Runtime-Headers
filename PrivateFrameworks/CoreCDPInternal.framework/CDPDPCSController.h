/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDPCSController : NSObject {
    CDPContext * _context;
    <CDPDProtectedCloudStorageProxy> * _pcsProxy;
}

@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) <CDPDProtectedCloudStorageProxy> *pcsProxy;

- (void).cxx_destruct;
- (void)_checkiCDPStatusNetwork:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (id)_contextSetupDictionary;
- (void)_disableCDPWithCompletion:(id /* block */)arg1;
- (void)_enableCDPWithCompletion:(id /* block */)arg1;
- (struct _PCSIdentitySetData { }*)_getOrSetupIdentitySetRef:(id*)arg1;
- (id)_pcsConfigForPrimaryAccount;
- (void)_reauthenticateAndCheckiCDPStatusWithNetwork:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)checkiCDPStatusNetwork:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (id)context;
- (void)disableCDPWithCompletion:(id /* block */)arg1;
- (void)enableCDPWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 pcsProxy:(id)arg2;
- (id)pcsProxy;
- (void)recoverAndSynchronizeKeysWithCompletion:(id /* block */)arg1;
- (void)recoverKeysWithCompletion:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setPcsProxy:(id)arg1;

@end
