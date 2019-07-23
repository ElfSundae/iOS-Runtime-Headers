/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MailAccount : MFAccount {
    MFMailboxUid * _archiveMailboxUid;
    long long  _cachedLibraryID;
    MFLock * _cachedLibraryIDLock;
    MFLock * _cachedMailboxenLock;
    NSMutableDictionary * _currentChokedActions;
    MFLock * _deletionLock;
    MFMailboxUid * _draftsMailboxUid;
    struct { 
        unsigned int cacheDirtyCount : 16; 
        unsigned int synchronizationThreadIsRunning : 1; 
        unsigned int cacheHasBeenRead : 1; 
        unsigned int disableCacheWrite : 1; 
        unsigned int _UNUSED_ : 13; 
    }  _flags;
    MFMailboxUid * _inboxMailboxUid;
    MFMailboxUid * _junkMailboxUid;
    MFError * _lastConnectionError;
    NSString * _lastKnownHostname;
    MFMessageLibrary * _library;
    NSString * _mailboxCachePath;
    MFWeakObjectCache * _messageStoresCache;
    NSString * _nonPersistentPath;
    NSString * _path;
    MFMailboxUid * _rootMailboxUid;
    MFMailboxUid * _sentMessagesMailboxUid;
    bool  _supportsFastRemoteBodySearch;
    MFMailboxUid * _trashMailboxUid;
}

@property (nonatomic, readonly) NSString *defaultPath;
@property (nonatomic, readonly, copy) NSString *mailboxPathExtension;
@property (nonatomic, readonly) bool needsRemoteSearchResultsVerification;
@property (readonly) bool shouldArchiveByDefault;
@property (readonly) bool sourceIsManaged;
@property (nonatomic, readonly) bool supportsFastRemoteBodySearch;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (id)URLForInfo:(id)arg1;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id*)arg2 fullUserName:(id*)arg3 includingInactive:(bool)arg4;
+ (id)_accountWithPath:(id)arg1;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(bool)arg1;
+ (id)_loadAllAccountsWithOptions:(unsigned long long)arg1 error:(id*)arg2;
+ (id)_loadDataAccessAccountsWithError:(id*)arg1;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (void)_removeLookAsideValuesNotInAccountList:(id)arg1;
+ (void)_setMailAccounts:(id)arg1 saveIfChanged:(bool)arg2 alreadyLocked:(bool)arg3;
+ (void)_setOutboxMailboxUid:(id)arg1;
+ (void)_setupSortedPathsForAccounts:(id)arg1;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(bool)arg2;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2 includingInactive:(bool)arg3;
+ (id)accountThatMessageIsFrom:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1 includingInactive:(bool)arg2;
+ (id)accountUsingHeadersFromMessage:(id)arg1;
+ (id)accountWithPath:(id)arg1;
+ (id)accountWithURL:(id)arg1;
+ (id)accountWithURLString:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)activeAccounts;
+ (id)activeAccountsWithError:(id*)arg1;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)allActivePrimaryMailboxUids;
+ (id)allEmailAddressesIncludingFullUserName:(bool)arg1 includeReceiveAliases:(bool)arg2;
+ (id)allMailboxUids;
+ (bool)canMoveMessagesFromAccount:(id)arg1 toAccount:(id)arg2;
+ (id)csAccountTypeString;
+ (id)defaultAccountDirectory;
+ (id)defaultDeliveryAccount;
+ (id)defaultMailAccountForDelivery;
+ (id)defaultMailAccountForDeliveryExcludingRestricted;
+ (void)disableMailboxListingNotifications;
+ (void)enableMailboxListingNotifications:(bool)arg1;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)existingDAMailAccountForDAAccount:(id)arg1;
+ (bool)getConfigurationFromServerForEmail:(id)arg1;
+ (id)infoForURL:(id)arg1;
+ (void)initialize;
+ (bool)isPredefinedAccountType;
+ (id)lastMailAccountsReloadDate;
+ (id)lastMailAccountsReloadError;
+ (id)legacyPathForAccountIdentifier:(id)arg1 withHostname:(id)arg2 username:(id)arg3;
+ (id)legacyPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)mailAccounts;
+ (id)mailAccountsWithError:(id*)arg1;
+ (bool)mailboxListingNotificationAreEnabled;
+ (id)mailboxUidForFileSystemPath:(id)arg1 create:(bool)arg2;
+ (id)mailboxUidFromActiveAccountsForURL:(id)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)newAccountWithPath:(id)arg1;
+ (id)outboxMailboxUid;
+ (id)outboxMessageStore:(bool)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (bool)primaryDeliveryAccountIsDynamic;
+ (id)purgableAccounts;
+ (id)purgableAccountsWithError:(id*)arg1;
+ (void)reloadAccounts;
+ (void)resetMailboxTimers;
+ (void)saveStateForAllAccounts;
+ (void)setDataclassesConsideredActive:(id)arg1;
+ (void)setGlobalPathForAccounts:(id)arg1;
+ (void)setMailAccountLoadOptions:(unsigned long long)arg1;
+ (void)setMailAccounts:(id)arg1;
+ (void)setMailAccounts:(id)arg1 saveIfChanged:(bool)arg2;
+ (id)standardAccountClass:(Class)arg1 valueForKey:(id)arg2;
+ (void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2;
+ (void)updateAutoFetchSettings;
+ (void)updateEmailAliasesForActiveAccounts;
+ (bool)usernameIsEmailAddress;

- (id)URLForMessage:(id)arg1;
- (id)URLString;
- (id)URLStringFromLegacyURLString:(id)arg1;
- (id)_URLForInfo:(id)arg1;
- (id)_URLScheme;
- (bool)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2;
- (void)_asynchronouslyInvalidateAndDeleteAccountData:(bool)arg1;
- (id)_cachedSpecialMailboxOfType:(int)arg1;
- (bool)_canEmptyMessagesFromMailboxUid:(id)arg1;
- (id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2;
- (bool)_cleanInboxDuplication:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (void)_deleteHook;
- (bool)_deleteMailbox:(id)arg1;
- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (void)_didBecomeActive:(bool)arg1;
- (int)_emptyFrequencyForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_infoForMatchingURL:(id)arg1;
- (void)_invalidateAndDeleteAccountData:(bool)arg1;
- (void)_invalidateCachedMailboxen;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (bool)_loadMailboxListingIntoCache:(id)arg1 attributes:(unsigned int)arg2 children:(id)arg3 parent:(id)arg4;
- (id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2;
- (id)_mailboxPathPrefix;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_pathComponentForUidName:(id)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (bool)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2;
- (bool)_renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)_resetAllMailboxURLs:(bool)arg1;
- (bool)_resetSpecialMailboxes;
- (void)_setAccountProperties:(id)arg1;
- (bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_setEmptyFrequency:(int)arg1 forKey:(id)arg2;
- (bool)_setPath:(id)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2;
- (void)_setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 subKey:(id)arg3;
- (bool)_shouldConfigureMailboxCache;
- (bool)_shouldLogDeleteActivity;
- (id*)_specialMailboxIvarOfType:(int)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(bool)arg2;
- (void)_synchronizeMailboxListWithFileSystem;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_writeMailboxCacheWithPrejudice:(bool)arg1;
- (void)accountDidLoad;
- (void)addUserFocusMailbox:(id)arg1;
- (id)allLocalMailboxUids;
- (id)allMailMailboxUid;
- (id)allMailboxUids;
- (int)archiveDestinationForMailbox:(id)arg1;
- (bool)archiveSentMessages;
- (int)cachePolicy;
- (bool)canAppendMessages;
- (bool)canArchiveForMailbox:(id)arg1;
- (bool)canCreateNewMailboxes;
- (bool)canFetch;
- (bool)canForwardWithoutDownload;
- (bool)canMailboxBeDeleted:(id)arg1;
- (bool)canMailboxBeRenamed:(id)arg1;
- (bool)canReceiveNewMailNotifications;
- (bool)canUseCarrierDeliveryFallback;
- (bool)canUseDeliveryAccount:(id)arg1;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (id)connectionError;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id*)arg2;
- (id)customSignature;
- (void)dealloc;
- (id)defaultEmailAddress;
- (id)defaultPath;
- (void)deleteDeliveryAccountIfNeeded;
- (bool)deleteInPlaceForAllMailboxes;
- (bool)deleteInPlaceForMailbox:(id)arg1;
- (bool)deleteMailbox:(id)arg1;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (id)deliveryAccount;
- (id)deliveryAccountAlternates;
- (bool)deliveryAccountInUseByOtherAccounts:(id)arg1;
- (void)deliveryAccountWillBeRemoved:(id)arg1;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)description;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (id)displayName;
- (id)displayNameForMailboxUid:(id)arg1;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (id)displayUsername;
- (id)emailAddresses;
- (id)emailAddressesAndAliases;
- (id)emailAddressesAndAliasesList;
- (id)emailAddressesDictionary;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (void)emptyTrash;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (id)fetchLimits;
- (void)fetchMailboxList;
- (id)firstEmailAddress;
- (void)forceFetchMailboxList;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fullUserName;
- (bool)hasEnoughInformationForEasySetup;
- (id)iconString;
- (id)initWithLibrary:(id)arg1 path:(id)arg2;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPersistentAccount:(id)arg1;
- (void)invalidate;
- (void)invalidateAndDelete;
- (bool)isAccountClassEquivalentTo:(id)arg1;
- (bool)isActive;
- (bool)isActiveWithPersistentAccount:(id)arg1;
- (bool)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (bool)isHostnameEquivalentTo:(id)arg1;
- (bool)isMailboxLocalForType:(int)arg1;
- (bool)isPrimaryDeliveryAccountDisabled;
- (bool)isSpecialMailbox:(id)arg1;
- (bool)isUsernameEquivalentTo:(id)arg1;
- (id)lastEmailAliasesSyncDate;
- (id)legacySQLExpressionToMatchAllMailboxes;
- (id)library;
- (long long)libraryID;
- (id)loggingIdentifier;
- (id)mailboxCachePath;
- (id)mailboxPathExtension;
- (id)mailboxUidForInfo:(id)arg1;
- (id)mailboxUidForRelativePath:(id)arg1 create:(bool)arg2;
- (id)mailboxUidForRelativePath:(id)arg1 create:(bool)arg2 withOption:(int)arg3;
- (id)mailboxUidForURL:(id)arg1;
- (id)mailboxUidOfType:(int)arg1 createIfNeeded:(bool)arg2;
- (id)mailboxesForSuggestionsLostMessageSearchPriorToTime:(double)arg1;
- (id)meetingStorePersistentID;
- (bool)moveMailbox:(id)arg1 intoParent:(id)arg2;
- (id)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(bool)arg4;
- (bool)needsRemoteSearchResultsVerification;
- (bool)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2;
- (id)newMailboxWithParent:(id)arg1 name:(id)arg2;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (bool)ownsMailboxUidWithURL:(id)arg1;
- (id)path;
- (bool)perMessageEncryptionEnabled;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (id)persistentNameForMailbox:(id)arg1;
- (id)powerAssertionIdentifierWithPrefix:(id)arg1;
- (bool)preventArchiveForMailbox:(id)arg1;
- (id)primaryMailboxUid;
- (void)pushUpdateForAliasData;
- (id)pushedMailboxUids;
- (id)receiveEmailAliasAddresses;
- (id)receiveEmailAliasAddressesList;
- (bool)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)removeUserFocusMailbox:(id)arg1;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)resetMailboxTimer;
- (void)resetMailboxURLs;
- (void)resetSpecialMailboxes;
- (bool)restrictedFromSendingExternally;
- (bool)restrictedFromSyncingRecents;
- (bool)restrictedFromTransferingMessagesToOtherAccounts;
- (id)rootMailboxUid;
- (id)saveSentFolder;
- (void)saveState;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (bool)secureMIMEEnabled;
- (void)setActive:(bool)arg1;
- (void)setCachePolicy:(int)arg1;
- (void)setCanUseCarrierDeliveryFallback:(bool)arg1;
- (void)setConnectionError:(id)arg1;
- (void)setCustomSignature:(id)arg1;
- (void)setDefaultEmailAddress:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (void)setDeliveryAccountAlternates:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEmptyFrequency:(int)arg1 forMailboxType:(int)arg2;
- (void)setEnabled:(bool)arg1 forEmailAddress:(id)arg2;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setFullUserName:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setLastEmailAliasesSyncDate:(id)arg1;
- (void)setLastKnownHostname:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMailboxCachePath:(id)arg1;
- (void)setMailboxUid:(id)arg1 forMailboxType:(int)arg2;
- (void)setPath:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setPrimaryDeliveryAccountDisabled:(bool)arg1;
- (void)setReceiveEmailAliasAddresses:(id)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)setupLibrary;
- (bool)shouldAppearInMailSettings;
- (bool)shouldArchiveByDefault;
- (bool)shouldExpungeMessagesOnDelete;
- (bool)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(bool)arg2;
- (bool)shouldFetchBodiesWhenMovingToTrash;
- (bool)shouldRestoreMessagesAfterFailedDelete;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (bool)sourceIsManaged;
- (id)specialMailboxNameForType:(int)arg1;
- (void)startListeningForNotifications;
- (id)statisticsKind;
- (void)stopListeningForNotifications;
- (Class)storeClass;
- (Class)storeClassForMailbox:(id)arg1;
- (id)storeForMailboxUid:(id)arg1;
- (bool)supportsAppend;
- (bool)supportsArchiving;
- (bool)supportsContinuationType:(id)arg1;
- (bool)supportsFastRemoteBodySearch;
- (bool)supportsMailDrop;
- (bool)supportsMailboxEditing;
- (bool)supportsMessageFlagging;
- (bool)supportsPurge;
- (bool)supportsRemoteAppend;
- (bool)supportsSyncingReadState;
- (bool)supportsThreadOperations;
- (bool)supportsUserPushedMailboxes;
- (void)systemDidWake;
- (void)systemWillSleep;
- (id)tildeAbbreviatedPath;
- (id)transferDisabledMailboxUids;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id*)arg2;
- (id)uniqueIdForPersistentConnection;
- (id)uniqueServerIdForMessage:(id)arg1;
- (id)unsupportedContinuationTypes;
- (bool)updateEmailAliases;
- (id)valueInAccountLookAsidePropertiesForKey:(id)arg1;
- (bool)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_receivingEmailAddressesCache;

- (id)mf_copyReceivingEmailAddresses;

@end
