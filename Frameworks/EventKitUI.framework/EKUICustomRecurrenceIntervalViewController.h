/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    id /* block */  _changeBlock;
    int  _frequency;
    int  _interval;
    BOOL  _maximumInterval;
    UIPickerView * _pickerView;
}

@property (copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frequency;
@property (readonly) unsigned int hash;
@property (nonatomic) int interval;
@property (nonatomic) BOOL maximumInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (int)frequency;
- (id)initWithSelectedInterval:(int)arg1 frequency:(int)arg2 changeBlock:(id /* block */)arg3;
- (int)interval;
- (void)loadView;
- (BOOL)maximumInterval;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)setChangeBlock:(id /* block */)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(int)arg1;
- (void)setMaximumInterval:(BOOL)arg1;
- (void)viewDidLoad;

@end
