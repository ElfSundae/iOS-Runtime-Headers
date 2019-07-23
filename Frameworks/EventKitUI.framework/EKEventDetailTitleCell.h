/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailTitleCell : EKEventDetailCell <EKEventDetailPredictedLocationCellDelegate> {
    NSMutableArray * _dateTimeViews;
    NSObject<EKEventDetailTitleCellDelegate> * _delegate;
    UIButton * _editButton;
    bool  _hasLocationStatus;
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    long long  _locationStatus;
    UIImage * _locationStatusImage;
    UIImageView * _locationStatusView;
    EKTextViewWithLabelTextMetrics * _locationView;
    bool  _observingLocaleChanges;
    EKEventDetailPredictedLocationCell * _predictedLocationView;
    UILabel * _recurrenceView;
    bool  _rejectionReasonCell;
    bool  _showingInlineDayView;
    UILabel * _statusView;
    UILabel * _titleView;
    UILabel * _travelTimeView;
    unsigned int  _visibleItems;
}

@property (nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (nonatomic) bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) bool showingInlineDayView;

+ (void)_geocodeEventIfNeeded:(id)arg1;
+ (void)_invalidateCachedFonts;
+ (id)_largeTitleFont;
+ (id)_locationFont;
+ (id)_locationStringForStructuredLocation:(id)arg1;
+ (id)_mapsURLForLocationOnEvent:(id)arg1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg2;
+ (void)_registerForInvalidation;
+ (id)_titleFont;

- (void).cxx_destruct;
- (id)_dateTimeViewForLine:(unsigned long long)arg1;
- (id)_editButton;
- (double)_layoutForWidth:(double)arg1;
- (id)_locationView;
- (id)_predictedLocationView;
- (void)_promptForSpanWithCompletionBlock:(id /* block */)arg1;
- (id)_recurrenceView;
- (void)_saveEventWithSpan:(long long)arg1;
- (void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2;
- (id)_statusView;
- (id)_titleView;
- (id)_travelTimeView;
- (bool)_useLargeFonts;
- (void)dealloc;
- (id)delegate;
- (void)editButtonTapped;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (id)initAsRejectionReasonCellWithEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setShowingInlineDayView:(bool)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelTimeString:(id)arg1;
- (bool)showingInlineDayView;
- (double)titleHeight;
- (bool)update;

@end
