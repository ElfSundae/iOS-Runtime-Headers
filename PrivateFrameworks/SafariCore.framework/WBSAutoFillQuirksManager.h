/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate> {
    WBSAutoFillAssociatedDomainsManager * _associatedDomainsManager;
    WBSPasswordAuditingEligibleDomainsManager * _passwordAuditingEligibleDomainsManager;
    WBSPasswordGenerationManager * _passwordGenerationManager;
    WBSRemotePlistController * _remotePlistController;
    bool  _shouldAttemptToDownloadConfiguration;
}

@property (nonatomic, readonly) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (nonatomic, readonly) WBSPasswordGenerationManager *passwordGenerationManager;
@property (nonatomic) bool shouldAttemptToDownloadConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (id)associatedDomainsManager;
- (void)beginLoadingQuirksFromDisk;
- (void)didDownloadPlistForRemotePlistController:(id)arg1;
- (id)init;
- (id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (id)passwordAuditingEligibleDomainsManager;
- (id)passwordGenerationManager;
- (void)prepareForTermination;
- (void)setShouldAttemptToDownloadConfiguration:(bool)arg1;
- (bool)shouldAttemptToDownloadConfiguration;

@end
