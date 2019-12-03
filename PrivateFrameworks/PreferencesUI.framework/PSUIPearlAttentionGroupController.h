/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPearlAttentionGroupController : NSObject <PSSpecifierGroup> {
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    BKDevicePearl * _pearlDevice;
    NSString * _pinCode;
    BKUserProtectedConfiguration * _updatedConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) BKDevicePearl *pearlDevice;
@property (nonatomic, retain) NSString *pinCode;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKUserProtectedConfiguration *updatedConfiguration;

- (void).cxx_destruct;
- (id)_pearlDevice;
- (id)attentionAware:(id)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)groupSpecifier;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)listController;
- (id)pearlDevice;
- (id)pearlUnlock:(id)arg1;
- (id)pinCode;
- (void)setAttentionAware:(id)arg1 specifier:(id)arg2;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setPearlDevice:(id)arg1;
- (void)setPearlUnlock:(id)arg1 specifier:(id)arg2;
- (void)setPinCode:(id)arg1;
- (void)setProtectedCredentialsWithPasscode:(id)arg1;
- (void)setUpdatedConfiguration:(id)arg1;
- (id)specifiers;
- (id)updatedConfiguration;

@end
