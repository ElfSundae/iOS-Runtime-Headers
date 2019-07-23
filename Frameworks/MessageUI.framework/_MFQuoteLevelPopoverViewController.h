/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFQuoteLevelPopoverViewController : UITableViewController <UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    id /* block */ _decisionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ decisionBlock;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_optionsStrings;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)dealloc;
- (id /* block */)decisionBlock;
- (id)initWithStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)setDecisionBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
