/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerView : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {
    BOOL _allowsZeroTimeInterval;
    _UIDatePickerChineseCalendar *_chineseWrapperCalendar;
    NSLocale *_compositeLocale;
    UIDatePicker *_datePickerDelegate;
    struct { 
        unsigned int staggerTimeIntervals : 1; 
        unsigned int loadingDateOrTime : 1; 
        unsigned int highlightsToday : 1; 
        unsigned int usesBlackChrome : 1; 
    } _datePickerFlags;
    id _delegateOfDatePicker;
    int _expectedAMPM;
    UILabel *_hourLabel;
    NSDateComponents *_lastSelectedDateComponents;
    int _loadingDate;
    NSDate *_maximumDate;
    NSDate *_minimumDate;
    UILabel *_minuteLabel;
    _UIDatePickerMode *_mode;
    double _timeInterval;
    NSTimeZone *_timeZone;
    NSCalendar *_userProvidedCalendar;
    NSLocale *_userProvidedLocale;
    NSDate *_userSuppliedDate;
    NSDate *_userSuppliedMaximumDate;
    NSDate *_userSuppliedMinimumDate;
}

@property (getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:, nonatomic) BOOL allowsZeroCountDownDuration;
@property (getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:, nonatomic) BOOL allowsZeroTimeInterval;
@property (getter=_amPmValue, nonatomic, readonly) int amPmValue;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) float contentWidth;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDateComponents *dateComponents;
@property (nonatomic) int datePickerMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegateOfDatePicker;
@property (readonly, copy) NSString *description;
@property (getter=_hasCustomCalendar, nonatomic, readonly) BOOL hasCustomCalendar;
@property (getter=_hasCustomLocale, nonatomic, readonly) BOOL hasCustomLocale;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL highlightsToday;
@property (getter=_hrMinFont, nonatomic, readonly) UIFont *hrMinFont;
@property (getter=_isTimeIntervalMode, nonatomic, readonly) BOOL isTimeIntervalMode;
@property (getter=_lastSelectedDateComponents, nonatomic, readonly) NSDateComponents *lastSelectedDateComponents;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, copy) NSDate *maximumDate;
@property (nonatomic, copy) NSDate *minimumDate;
@property (nonatomic) int minuteInterval;
@property (nonatomic) BOOL staggerTimeIntervals;
@property (readonly) Class superclass;
@property (nonatomic) double timeInterval;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSCalendar *userProvidedCalendar;
@property (nonatomic, retain) NSLocale *userProvidedLocale;
@property (getter=_usesBlackChrome, setter=_setUsesBlackChrome:, nonatomic) BOOL usesBlackChrome;

- (void).cxx_destruct;
- (BOOL)_allowsZeroCountDownDuration;
- (BOOL)_allowsZeroTimeInterval;
- (int)_amPmValue;
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(int)arg2;
- (id)_contentViewForSizingLabelForPositioningInComponent:(int)arg1;
- (void)_datePickerReset:(id)arg1;
- (void)_doneLoadingDateOrTime;
- (void)_fadeLabelForCalendarUnit:(unsigned int)arg1 toText:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_hasCustomCalendar;
- (BOOL)_hasCustomLocale;
- (id)_hoursStringForHour:(int)arg1;
- (id)_hrMinFont;
- (BOOL)_isCurrentCalendar:(id)arg1;
- (BOOL)_isTimeIntervalMode;
- (id)_labelForCalendarUnit:(unsigned int)arg1 createIfNecessary:(BOOL)arg2;
- (id)_labelTextForCalendarUnit:(unsigned int)arg1;
- (id)_lastSelectedDateComponents;
- (void)_loadDate:(id)arg1 animated:(BOOL)arg2;
- (id)_makeNewAccessoryLabel;
- (id)_minutesStringForHour:(int)arg1 minutes:(int)arg2;
- (id)_orientationImageSuffix;
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2 relativeTo:(id)arg3 order:(int)arg4;
- (void)_rebuildCompositeLocale;
- (void)_resetSelectionOfTables;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (int)_selectedHourForColumn:(int)arg1;
- (int)_selectedMinuteForColumn:(int)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
- (int)_selectionBarRowInComponent:(int)arg1;
- (void)_setAllowsZeroCountDownDuration:(BOOL)arg1;
- (void)_setAllowsZeroTimeInterval:(BOOL)arg1;
- (void)_setDate:(id)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)_setMode:(id)arg1;
- (void)_setUsesBlackChrome:(BOOL)arg1;
- (BOOL)_showingDate;
- (float)_tableRowHeight;
- (void)_todayChanged:(id)arg1;
- (BOOL)_updateDateOrTime;
- (void)_updateEnabledCellsIncludingWMDCells:(BOOL)arg1;
- (void)_updateLabels:(BOOL)arg1;
- (BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(int)arg1;
- (BOOL)_usesBlackChrome;
- (id)_viewForSelectedRowInComponent:(int)arg1;
- (id)calendar;
- (float)contentWidth;
- (id)date;
- (id)dateComponents;
- (int)datePickerMode;
- (void)dealloc;
- (id)delegateOfDatePicker;
- (BOOL)highlightsToday;
- (int)hour;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (int)minute;
- (int)minuteInterval;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerImageNamePrefix;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (int)second;
- (void)setDate:(id)arg1;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateOfDatePicker:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(int)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUserProvidedCalendar:(id)arg1;
- (void)setUserProvidedLocale:(id)arg1;
- (id)shadowColor;
- (BOOL)staggerTimeIntervals;
- (double)timeInterval;
- (id)timeZone;
- (id)userProvidedCalendar;
- (id)userProvidedLocale;

@end
