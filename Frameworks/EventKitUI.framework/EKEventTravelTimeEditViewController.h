/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventTravelTimeEditViewController : EKEditItemViewController <EKEditItemViewControllerDelegate, EKTravelRouteEstimationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSDate *_arrivalDate;
    EKCalendarItem *_calendarItem;
    NSIndexPath *_checkedItem;
    BOOL _customTimesGroupIsShowing;
    double _customTravelTimeDuration;
    EKStructuredLocation *_destinationStructuredLocation;
    BOOL _estimatedRowIsChecked;
    BOOL _estimationGroupIsShowing;
    EKEventStore *_eventStore;
    BOOL _externallySetValueGroupIsShowing;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initFrame;
    BOOL _isAnimatingTableSections;
    BOOL _isOriginSelectionVisible;
    EKStructuredLocation *_originStructuredLocation;
    int _originalSelectedRoutingMode;
    double _originalSelectedTravelTime;
    BOOL _pendingReloadData;
    EKTravelRouteEstimationController *_routeEstimationControler;
    NSString *_routeEstimationErrorMessage;
    int _selectedRoutingMode;
    double _selectedTravelTime;
    UIView *_shadowView;
    BOOL _suppressErrors;
    UISwitch *_switchControl;
    UITableView *_table;
    int _travelTimeSelectedChoice;
}

@property (nonatomic, retain) NSDate *arrivalDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKStructuredLocation *destinationStructuredLocation;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) EKStructuredLocation *originStructuredLocation;
@property (nonatomic) int selectedRoutingMode;
@property (nonatomic) double selectedTravelTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_autoselectFromAvailableChoices;
- (void)_checkItemAtIndexPath:(id)arg1;
- (void)_contentCategorySizeChanged:(id)arg1;
- (unsigned int)_customTravelTimeSection;
- (id)_errorStringForMapKitErrorCode:(unsigned int)arg1;
- (unsigned int)_estimatedTravelTimeSection;
- (unsigned int)_externallySetValueTravelTimeSection;
- (void)_handleEstimationControllerTravelTimeLookupErrors;
- (void)_handleOriginLocationErrorsWithAlert:(BOOL)arg1;
- (id)_indexPathForSelectedTravelTime;
- (void)_layoutShadowView;
- (void)_locationsChanged;
- (int)_numberOfEstimatedTravelTimeResultRows;
- (void)_originLocationButtonWasTapped;
- (id)_routeEstimationControler;
- (void)_setEstimationActive:(BOOL)arg1;
- (BOOL)_shouldAutoSelectEstimatedTravelTimeOnLookupCompletion;
- (void)_showRouteEstimationAlert;
- (BOOL)_showingOptions;
- (BOOL)_showingOptionsInitialState;
- (id)_stringForOriginLocation;
- (unsigned int)_toggleSwitchSection;
- (void)_travelTimeActivationSwitchChanged:(id)arg1;
- (void)_updateTableView;
- (void)_updateVisibleSections;
- (id)arrivalDate;
- (id)description;
- (id)destinationStructuredLocation;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)originStructuredLocation;
- (void)routeEstimationControllerDidBeginOriginLocationLookup:(id)arg1;
- (void)routeEstimationControllerDidBeginTravelTimeLookup:(id)arg1;
- (void)routeEstimationControllerDidFinishOriginLocationLookup:(id)arg1;
- (void)routeEstimationControllerDidFinishTravelTimeLookup:(id)arg1;
- (int)selectedRoutingMode;
- (double)selectedTravelTime;
- (void)setArrivalDate:(id)arg1;
- (void)setCell:(id)arg1 checked:(BOOL)arg2;
- (void)setDestinationStructuredLocation:(id)arg1;
- (void)setOriginStructuredLocation:(id)arg1;
- (void)setSelectedRoutingMode:(int)arg1;
- (void)setSelectedTravelTime:(double)arg1;
- (void)setTravelTimeSelectedChoice:(int)arg1;
- (BOOL)setTravelTimeSelectedChoiceEstimatedRowAtIndex:(unsigned int)arg1;
- (void)setTravelTimeSelectedChoiceToFirstValidEstimatedRow;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)travelTimeSelectedChoice;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
