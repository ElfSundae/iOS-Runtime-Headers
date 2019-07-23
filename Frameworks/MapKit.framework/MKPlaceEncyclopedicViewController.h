/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceEncyclopedicViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {
    <MKPlaceCardEncyclopedicControllerDelegate> *_encyclopedicControllerDelegate;
    MKMapItem *_mapItem;
    BOOL _textBlockExpanded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MKPlaceCardEncyclopedicControllerDelegate> *encyclopedicControllerDelegate;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, readonly) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_viewEncyclopedicContent;
- (id)encyclopedicControllerDelegate;
- (id)init;
- (id)mapItem;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)setEncyclopedicControllerDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
