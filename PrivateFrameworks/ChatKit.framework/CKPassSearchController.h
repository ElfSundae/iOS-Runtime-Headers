/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPassSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cellClass;
+ (id)indexingString;
+ (bool)previewControllerPresentsModally;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (bool)supportsQuicklook;

- (id)_activityItemProviderForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;

@end
