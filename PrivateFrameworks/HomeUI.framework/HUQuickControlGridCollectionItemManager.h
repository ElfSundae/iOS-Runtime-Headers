/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlGridCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging> {
    HFAccessoryControlItem * _accessoryControlItem;
    HFItemProvider * _controlItemProvider;
    NSMapTable * _controlItemToViewControllerTable;
    NSSet * _controlItems;
    HFItemProvider * _overflowItemProvider;
    HFServiceItemProvider * _serviceItemProvider;
    HFItem<HFServiceLikeItem> * _sourceServiceLikeItem;
    HFItemProvider * _supplementaryItemProvider;
}

@property (nonatomic, copy) HFAccessoryControlItem *accessoryControlItem;
@property (nonatomic, retain) HFItemProvider *controlItemProvider;
@property (nonatomic, retain) NSMapTable *controlItemToViewControllerTable;
@property (nonatomic, retain) NSSet *controlItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItemProvider *overflowItemProvider;
@property (nonatomic, retain) HFServiceItemProvider *serviceItemProvider;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *sourceServiceLikeItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFItemProvider *supplementaryItemProvider;

+ (bool)isPrimaryOrBinaryStateControlItem:(id)arg1;
+ (unsigned long long)preferredControlForControlItem:(id)arg1 allControlItems:(id)arg2 isSupplementary:(bool)arg3;
+ (id /* block */)serviceItemComparator;
+ (unsigned long long)specialCaseSectionSortingForControlItem:(id)arg1 viewController:(id)arg2 fromControlItems:(id)arg3 primaryServiceType:(id)arg4;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_catchAllLayoutForGridViewProfiles:(id)arg1 supplementaryViewProfiles:(id)arg2;
- (id)_composeIdentifierForService:(id)arg1 section:(unsigned long long)arg2;
- (id)_generateViewControllersForControlItems:(id)arg1;
- (id)accessoryControlItem;
- (id)configuration;
- (id)controlItemProvider;
- (id)controlItemToViewControllerTable;
- (id)controlItems;
- (id)gridItemProvider;
- (id)initWithDelegate:(id)arg1 controlItems:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)overflowItemProvider;
- (id)serviceItemProvider;
- (void)setAccessoryControlItem:(id)arg1;
- (void)setControlItemProvider:(id)arg1;
- (void)setControlItemToViewControllerTable:(id)arg1;
- (void)setControlItems:(id)arg1;
- (void)setServiceItemProvider:(id)arg1;
- (void)setSourceServiceLikeItem:(id)arg1;
- (id)sourceItem;
- (id)sourceServiceLikeItem;
- (id)supplementaryItemProvider;
- (id)titleForItem:(id)arg1;
- (id)viewControllerForItem:(id)arg1;

@end
