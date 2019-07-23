/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageCell : STTableCell {
    UILabel * _itemNameLabel;
    STCandyBarView * _usageBarView;
    NSLayoutConstraint * _usageBarWidthConstraint;
    STUsageItem * _usageItem;
    UILabel * _usageLabel;
}

@property (nonatomic, readonly) UILabel *itemNameLabel;
@property (nonatomic, readonly) STCandyBarView *usageBarView;
@property (nonatomic, readonly) NSLayoutConstraint *usageBarWidthConstraint;
@property (nonatomic, retain) STUsageItem *usageItem;
@property (nonatomic, readonly) UILabel *usageLabel;

- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_didFetchIcon:(id)arg1;
- (void)_registerForAppInfoCacheNotifications;
- (void)_registerForIconCacheNotifications;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)itemNameLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setUsageItem:(id)arg1;
- (void)setValue:(id)arg1;
- (id)usageBarView;
- (id)usageBarWidthConstraint;
- (id)usageItem;
- (id)usageLabel;

@end
