/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_inAppPurchases;
    NSNumberFormatter *_numberFormatter;
}

@property (nonatomic, retain) SKUIColorScheme *colorScheme;

- (void).cxx_destruct;
- (void)_reloadHeaderView;
- (id)colorScheme;
- (id)headerViewForTableView:(id)arg1;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;
- (int)numberOfRowsInSection;
- (void)setColorScheme:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
