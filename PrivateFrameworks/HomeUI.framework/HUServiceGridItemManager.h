/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceGridItemManager : HFItemManager {
    NSArray * _cachedSortedRoomIdentifiers;
    NSArray * _cachedSortedRooms;
    NSArray * _itemProviders;
    id /* block */  _itemProvidersCreator;
    BOOL  _shouldGroupByRoom;
    BOOL  _shouldShowSectionHeaders;
}

@property (nonatomic, readonly) int actionSetSectionIndex;
@property (nonatomic, retain) NSArray *cachedSortedRoomIdentifiers;
@property (nonatomic, retain) NSArray *cachedSortedRooms;
@property (nonatomic, retain) NSArray *itemProviders;
@property (nonatomic, copy) id /* block */ itemProvidersCreator;
@property (nonatomic) BOOL shouldGroupByRoom;
@property (nonatomic) BOOL shouldShowSectionHeaders;

- (void).cxx_destruct;
- (void)_createItemProvidersWithHome:(id)arg1;
- (id)_identifierForSection:(unsigned int)arg1;
- (id)_itemProviders;
- (id)_itemsToHideInSet:(id)arg1;
- (unsigned int)_numberOfSections;
- (id /* block */)_roomComparator;
- (id)_roomIdentifierForItem:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_sortedRoomIdentifiers;
- (id)_sortedRooms;
- (id)_styleForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_willUpdateSections;
- (int)actionSetSectionIndex;
- (id)cachedSortedRoomIdentifiers;
- (id)cachedSortedRooms;
- (id)currentSectionIdentifiers;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 shouldShowSectionHeaders:(BOOL)arg3 itemProvidersCreator:(id /* block */)arg4;
- (id)itemProviders;
- (id /* block */)itemProvidersCreator;
- (void)setCachedSortedRoomIdentifiers:(id)arg1;
- (void)setCachedSortedRooms:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setItemProvidersCreator:(id /* block */)arg1;
- (void)setShouldGroupByRoom:(BOOL)arg1;
- (void)setShouldShowSectionHeaders:(BOOL)arg1;
- (BOOL)shouldGroupByRoom;
- (BOOL)shouldShowSectionHeaders;

@end
