/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceTransitIncidentCell : MKCustomSeparatorTableViewCell {
    <_MKPlaceTransitIncidentCellDelegate> *_delegate;
    UILabel *_messageLabel;
    NSLayoutConstraint *_messageToTopConstraint;
}

@property (nonatomic) <_MKPlaceTransitIncidentCellDelegate> *delegate;
@property (nonatomic, copy) NSString *incidentMessage;

- (void).cxx_destruct;
- (void)_buttonSelected;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)incidentMessage;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncidentMessage:(id)arg1;

@end
