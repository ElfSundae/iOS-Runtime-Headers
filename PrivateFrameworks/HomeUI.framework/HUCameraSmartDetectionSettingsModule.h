/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraSmartDetectionSettingsModule : HFItemModule <HUCameraSettingsModule> {
    HFStaticItem * _anyMotionDetectedItem;
    NSSet * _cameraProfiles;
    HFCameraSmartDetectionCondition * _condition;
    HFConditionCollection * _conditionCollection;
    NSSet * _itemProviders;
    HFItemProvider * _motionDetectionOffOnItemProvider;
    HFItemProvider * _motionDetectionSettingsItemProvider;
    unsigned long long  _settingsContext;
    HFStaticItem * _specificMotionDetectedItem;
}

@property (nonatomic, retain) HFStaticItem *anyMotionDetectedItem;
@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, retain) HFCameraSmartDetectionCondition *condition;
@property (nonatomic, readonly) HFConditionCollection *conditionCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItemProvider *motionDetectionOffOnItemProvider;
@property (nonatomic, readonly) HFItemProvider *motionDetectionSettingsItemProvider;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, readonly) unsigned long long settingsContext;
@property (nonatomic, retain) HFStaticItem *specificMotionDetectedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchUpdateForCameraProfile:(id)arg1;
- (id)_preferredConditionFromConditions:(id)arg1;
- (id)anyMotionDetectedItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraProfiles;
- (id)condition;
- (id)conditionCollection;
- (id)didSelectItem:(id)arg1;
- (id)enableSmartMotion:(bool)arg1 forItem:(id)arg2;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 conditionCollection:(id)arg3 settingsContext:(unsigned long long)arg4;
- (bool)isItemHeader:(id)arg1;
- (id)itemProviders;
- (id)motionDetectionOffOnItemProvider;
- (id)motionDetectionSettingsItemProvider;
- (void)setAnyMotionDetectedItem:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setSpecificMotionDetectedItem:(id)arg1;
- (unsigned long long)settingsContext;
- (id)specificMotionDetectedItem;
- (id)updateMotionDetectionSetting:(unsigned long long)arg1;
- (id)updateMotionDetectionSettingForItem:(id)arg1;

@end
