/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
 */

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling> {
    AFSecurityConnection * _assistantSecurityConnection;
    SFMediaRemoteControlCardSection * _cardSection;
    UIViewController * _mediaPlatterViewController;
    <CRKCardSectionViewControllingDelegate> * cardSectionViewControllingDelegate;
}

@property (readonly) SFMediaRemoteControlCardSection *cardSection;
@property (nonatomic) <CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SCKPMediaControlCardSectionView *view;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updatePlatterForHashedRouteUID:(id)arg1;
- (void)_updatePlatterForRouteUID:(id)arg1;
- (id)cardSection;
- (id)cardSectionViewControllingDelegate;
- (id)initWithMediaRemoteControlCardSection:(id)arg1;
- (void)loadView;
- (void)setCardSectionViewControllingDelegate:(id)arg1;

@end
