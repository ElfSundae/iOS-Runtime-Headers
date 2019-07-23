/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUIDateLabel : UILabel {
    HKValueRange *_dateRange;
    int _formatTemplate;
    BOOL _useUppercase;
}

@property (nonatomic, readonly) HKValueRange *dateRange;
@property (nonatomic, readonly) int formatTemplate;
@property (nonatomic) BOOL useUppercase;

- (void).cxx_destruct;
- (id)_formattedText;
- (id)_formattedTextFromDate:(id)arg1;
- (BOOL)_setDateRange:(id)arg1;
- (BOOL)_setFormatTemplate:(int)arg1;
- (id)dateRange;
- (int)formatTemplate;
- (id)init;
- (void)setDate:(id)arg1 formatTemplate:(int)arg2;
- (void)setDateRange:(id)arg1 formatTemplate:(int)arg2;
- (void)setUseUppercase:(BOOL)arg1;
- (BOOL)useUppercase;

@end
