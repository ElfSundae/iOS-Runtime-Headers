/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIMiniMonthView : EKUIYearMonthView {
    NSDateComponents * _dateComponents;
}

@property (nonatomic, retain) NSDateComponents *dateComponents;

+ (float)heightForInterfaceOrientation:(int)arg1;

- (void).cxx_destruct;
- (float)_gridOfDaysHeightAdjustment;
- (float)_gridOfDaysYAdjustment;
- (float)circleFrameXAdjustment;
- (float)circleFrameYAdjustment;
- (float)circleSize;
- (float)circleSizeForDoubleDigit;
- (id)dateComponents;
- (id)dayColor;
- (id)dayColorKey;
- (id)dayNumberFont;
- (float)dayTextSize;
- (float)daysXAdjustLeft;
- (float)daysYAdjustTop;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForGridOfDays:(BOOL)arg1;
- (id)headerFont;
- (float)headerFontKerning;
- (float)headerFontMaxSize;
- (float)headerFontMinSize;
- (float)headerXAdjust;
- (id)initWithCalendar:(id)arg1 dateComponents:(id)arg2;
- (BOOL)opaque;
- (void)setDateComponents:(id)arg1;
- (BOOL)showMonthName;
- (BOOL)showWeekDayInitials;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)todayNumberFont;
- (float)todayNumberKerning;
- (float)todayTextSize;
- (float)todayTextYAdjustment;
- (BOOL)vibrant;
- (float)weekDayInitialsAdjustLeft;
- (float)weekDayInitialsAdjustTop;
- (id)weekDayInitialsFont;
- (float)xInset;
- (float)xSpacing;
- (float)yInset;
- (float)ySpacing;

@end
