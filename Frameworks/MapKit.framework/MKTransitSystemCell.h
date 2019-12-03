/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {
    UIView * _disclosureButton;
    bool  _expanded;
    NSLayoutConstraint * _imageToLabelConstraint;
    UIImageView * _shieldImageView;
    bool  _showDisclosureButton;
    _MKUILabel * _systemLabel;
    NSLayoutConstraint * _systemLabelToBottomConstraint;
    NSLayoutConstraint * _systemLabelToTopConstraint;
}

@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) bool showDisclosureButton;
@property (nonatomic, retain) UIImage *systemArtwork;
@property (nonatomic, copy) NSString *systemName;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (id)_disclosureButton;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForExpandedState:(bool)arg1 animating:(bool)arg2;
- (void)_updateConstraintValues;
- (void)infoCardThemeChanged;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isExpanded;
- (void)prepareForReuse;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 insideAnimation:(bool)arg2;
- (void)setShowDisclosureButton:(bool)arg1;
- (void)setSystemArtwork:(id)arg1;
- (void)setSystemName:(id)arg1;
- (bool)showDisclosureButton;
- (id)systemArtwork;
- (id)systemName;

@end
