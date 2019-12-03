/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSetupNetworkRouterAppPunchoutViewController : OBWelcomeController <HFSetupPairingPopupAppPunchout> {
    HULinkedApplicationItem * _linkedApplicationItem;
    <HFSetupPairingPopupDelegate> * _popupDelegate;
    OBTrayButton * _punchoutButton;
    HFAppPunchoutRequest * _punchoutRequest;
    HMSetupAccessoryDescription * _setupAccessoryDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HULinkedApplicationItem *linkedApplicationItem;
@property (nonatomic, readonly) <HFSetupPairingPopupDelegate> *popupDelegate;
@property (nonatomic, readonly) unsigned long long popupType;
@property (nonatomic, readonly) OBTrayButton *punchoutButton;
@property (nonatomic, retain) HFAppPunchoutRequest *punchoutRequest;
@property (nonatomic, readonly) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed:(id)arg1;
- (id)_lookUpSoftwareAndUpdateUI;
- (void)_punchoutPressed:(id)arg1;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;
- (id)linkedApplicationItem;
- (id)popupDelegate;
- (unsigned long long)popupType;
- (id)punchoutButton;
- (id)punchoutRequest;
- (void)setLinkedApplicationItem:(id)arg1;
- (void)setPunchoutRequest:(id)arg1;
- (id)setupAccessoryDescription;
- (void)viewDidLoad;

@end
