/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableSection : SKUITableViewSection {
    SKUIClientContext *_clientContext;
    BOOL _expanded;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (getter=isExpanded, nonatomic) BOOL expanded;

- (void).cxx_destruct;
- (id)clientContext;
- (float)heightForTextLayout:(id)arg1 isExpanded:(BOOL)arg2;
- (BOOL)isExpanded;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
