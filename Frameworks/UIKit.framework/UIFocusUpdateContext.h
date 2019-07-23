/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusUpdateContext : NSObject {
    UIScrollView *_commonScrollView;
    UIView *_destinationView;
    unsigned int _focusHeading;
    int _focusUpdateType;
    struct CGVector { 
        float dx; 
        float dy; 
    } _focusVelocity;
    UIFocusGuide *_focusedGuide;
    BOOL _forceSourceViewMayRemainFocused;
    <UIFocusEnvironment> *_initialDestinationEnvironment;
    BOOL _isValidated;
    UIView *_preferredDestinationView;
    NSArray *_regionMapSnapshots;
    UIImage *_regionMapSnapshotsVisualRepresentation;
    BOOL _requiresDestinationView;
    BOOL _requiresEnvironmentValidation;
    BOOL _shouldUpdateDestinationView;
    UIView *_sourceView;
    BOOL _valid;
}

@property (getter=_commonScrollView, setter=_setCommonScrollView:, nonatomic, retain) UIScrollView *commonScrollView;
@property (getter=_destinationView, nonatomic, readonly) UIView *destinationView;
@property (nonatomic) unsigned int focusHeading;
@property (getter=_focusUpdateType, setter=_setFocusUpdateType:, nonatomic) int focusUpdateType;
@property (getter=_focusVelocity, nonatomic, readonly) struct CGVector { float x1; float x2; } focusVelocity;
@property (getter=_focusVelocityBasedScaleFactor, nonatomic, readonly) float focusVelocityBasedScaleFactor;
@property (getter=_focusedGuide, nonatomic, readonly) UIFocusGuide *focusedGuide;
@property (getter=_forceSourceViewMayRemainFocused, setter=_setForceSourceViewMayRemainFocused:, nonatomic) BOOL forceSourceViewMayRemainFocused;
@property (getter=_initialDestinationEnvironment, setter=_setInitialDestinationEnvironment:, nonatomic) <UIFocusEnvironment> *initialDestinationEnvironment;
@property (nonatomic, readonly) UIView *nextFocusedView;
@property (getter=_preferredDestinationView, nonatomic, readonly) UIView *preferredDestinationView;
@property (nonatomic, readonly) UIView *previouslyFocusedView;
@property (getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:, nonatomic, retain) NSArray *regionMapSnapshots;
@property (getter=_regionMapSnapshotsVisualRepresentation, nonatomic, readonly) UIImage *regionMapSnapshotsVisualRepresentation;
@property (getter=_requiresDestinationView, setter=_setRequiresDestinationView:, nonatomic) BOOL requiresDestinationView;
@property (getter=_requiresEnvironmentValidation, setter=_setRequiresEnvironmentValidation:, nonatomic) BOOL requiresEnvironmentValidation;
@property (getter=_sourceView, setter=_setSourceView:, nonatomic) UIView *sourceView;
@property (getter=_isValid, nonatomic, readonly) BOOL valid;

+ (id)_contextWithSourceView:(id)arg1;
+ (id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 heading:(unsigned int)arg3;
+ (id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 heading:(unsigned int)arg3;
+ (id)_contextWithSourceView:(id)arg1 initialDestinationEnvironment:(id)arg2;

- (void).cxx_destruct;
- (id)_commonScrollView;
- (id)_destinationView;
- (void)_didUpdateFocus;
- (int)_focusUpdateType;
- (struct CGVector { float x1; float x2; })_focusVelocity;
- (float)_focusVelocityBasedScaleFactor;
- (id)_focusedGuide;
- (BOOL)_forceSourceViewMayRemainFocused;
- (id)_initWithContext:(id)arg1;
- (id)_initWithSourceView:(id)arg1 initialDestinationEnvironment:(id)arg2;
- (id)_initialDestinationEnvironment;
- (BOOL)_isValid;
- (id)_overridingDestinationEnvironmentForPreferredDestinationView:(id)arg1 visitedEnvironments:(id)arg2;
- (id)_preferredDestinationView;
- (id)_publicRegionMapSnapshots;
- (id)_regionMapSnapshots;
- (id)_regionMapSnapshotsVisualRepresentation;
- (BOOL)_requiresDestinationView;
- (BOOL)_requiresEnvironmentValidation;
- (void)_setCommonScrollView:(id)arg1;
- (void)_setFocusHeading:(unsigned int)arg1;
- (void)_setFocusUpdateType:(int)arg1;
- (void)_setFocusVelocity:(struct CGVector { float x1; float x2; })arg1;
- (void)_setFocusedGuide:(id)arg1;
- (void)_setForceSourceViewMayRemainFocused:(BOOL)arg1;
- (void)_setInitialDestinationEnvironment:(id)arg1;
- (void)_setRegionMapSnapshots:(id)arg1;
- (void)_setRequiresDestinationView:(BOOL)arg1;
- (void)_setRequiresEnvironmentValidation:(BOOL)arg1;
- (void)_setSourceView:(id)arg1;
- (id)_sourceView;
- (void)_updateDestinationViewIfNeeded;
- (BOOL)_validate;
- (id)debugQuickLookObject;
- (unsigned int)focusHeading;
- (id)init;
- (id)nextFocusedView;
- (id)previouslyFocusedView;

@end
