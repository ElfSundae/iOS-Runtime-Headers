/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableAppItem : SSPurchasableItem

+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4;
+ (id)allPropertyKeys;
+ (id)databaseTable;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5;
+ (id)sortByNameKey;

- (id)accountIdentifier;
- (id)bundleID;
- (id)category;
- (id)companyName;
- (int)contentRatingFlags;
- (id)description;
- (BOOL)hasMessagesExtension;
- (id)humanReadableVersion;
- (long long)iTunesVersion;
- (id)iconTitle;
- (id)iconURL;
- (BOOL)isFamilyShareable;
- (BOOL)isNewsstand;
- (id)longTitle;
- (unsigned int)minimumOS;
- (id)redownloadParams;
- (BOOL)supportsIPad;
- (BOOL)supportsIPhone;

@end
