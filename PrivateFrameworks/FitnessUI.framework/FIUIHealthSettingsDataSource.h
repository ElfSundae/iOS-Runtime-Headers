/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource> {
    FIUIHealthSettingsTableViewCell *_biologicalSexCell;
    FIUIHealthSettingsTableViewCell *_birthDateCell;
    FIUIHealthSettingsBirthDatePickerController *_birthDatePickerController;
    FIUIHealthSettingsTableViewCell *_heightCell;
    FIUIHealthSettingsHeightPickerController *_heightPickerController;
    FIUIActivitySettingsController *_preEditSettingsController;
    FIUIActivitySettingsController *_settingsController;
    FIUIHealthSettingsSexPickerController *_sexPickerController;
    FIUIHealthSettingsTableViewCell *_weightCell;
    FIUIHealthSettingsWeightPickerController *_weightPickerController;
}

@property (nonatomic, retain) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FIUIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (nonatomic, retain) FIUIActivitySettingsController *settingsController;
@property (nonatomic, retain) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (readonly) Class superclass;
@property (nonatomic, retain) FIUIHealthSettingsWeightPickerController *weightPickerController;

- (void).cxx_destruct;
- (void)_updateBiologicalSexCell;
- (void)_updateBirthDateCell;
- (void)_updateCells;
- (void)_updateHeightCell;
- (void)_updateWeightCell;
- (id)biologicalSexCell;
- (id)birthDateCell;
- (id)birthDatePickerController;
- (void)cellDidBecomeFirstResponder:(id)arg1;
- (void)cellDidResignFirstResponder:(id)arg1;
- (id)editedSettingsController;
- (void)endEditingAndDiscardChanges:(BOOL)arg1;
- (id)heightCell;
- (id)heightPickerController;
- (id)initWithActivitySettingsController:(id)arg1;
- (void)setBirthDatePickerController:(id)arg1;
- (void)setHeightPickerController:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSexPickerController:(id)arg1;
- (void)setWeightPickerController:(id)arg1;
- (id)settingsController;
- (id)sexPickerController;
- (void)startEditing;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)weightCell;
- (id)weightPickerController;

@end
