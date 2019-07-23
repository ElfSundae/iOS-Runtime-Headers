/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem> {
    TKTonePickerController * __parentTonePickerController;
    long long  _numberOfChildren;
    unsigned long long  _regularToneSectionIndex;
    unsigned long long  _sectionHeader;
}

@property (setter=_setParentTonePickerController:, nonatomic) TKTonePickerController *_parentTonePickerController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setNumberOfChildren:, nonatomic) long long numberOfChildren;
@property (setter=_setRegularToneSectionIndex:, nonatomic) unsigned long long regularToneSectionIndex;
@property (setter=_setSectionHeader:, nonatomic) unsigned long long sectionHeader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)_parentTonePickerController;
- (void)_setNumberOfChildren:(long long)arg1;
- (void)_setParentTonePickerController:(id)arg1;
- (void)_setRegularToneSectionIndex:(unsigned long long)arg1;
- (void)_setSectionHeader:(unsigned long long)arg1;
- (id)childItemAtIndex:(long long)arg1;
- (long long)numberOfChildren;
- (unsigned long long)regularToneSectionIndex;
- (unsigned long long)sectionHeader;

@end
