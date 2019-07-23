/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICAccountUtilities : NSObject {
    ACAccountStore * _accountStore;
    NSDictionary * _currentICloudAccountState;
    ACAccount * _primaryICloudACAccount;
    BOOL  _primaryICloudACAccountValid;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, copy) NSDictionary *currentICloudAccountState;
@property (nonatomic, readonly) BOOL didChooseToMigratePrimaryICloudAccount;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (getter=isPrimaryICloudACAccountValid, nonatomic) BOOL primaryICloudACAccountValid;
@property (nonatomic, readonly) BOOL primaryICloudAccountEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (id)allICloudACAccounts;
- (id)currentICloudAccountState;
- (void)dealloc;
- (BOOL)didChooseToMigratePrimaryICloudAccount;
- (id)init;
- (id)initForObservingAccountStoreChanges:(BOOL)arg1;
- (void)internalInvalidatePrimaryICloudACAccount;
- (void)invalidatePrimaryICloudACAccount;
- (BOOL)isPrimaryICloudACAccountValid;
- (id)primaryICloudACAccount;
- (BOOL)primaryICloudAccountEnabled;
- (void)setAccountStore:(id)arg1;
- (void)setCurrentICloudAccountState:(id)arg1;
- (void)setPrimaryICloudACAccountValid:(BOOL)arg1;
- (void)updateICloudACAccountFromStore;

@end
