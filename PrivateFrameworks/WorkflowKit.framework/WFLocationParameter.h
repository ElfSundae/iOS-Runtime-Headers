/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLocationParameter : WFParameter <WFModuleSummarySupporting> {
    bool  _allowsCurrentLocation;
    bool  _allowsTextOnlyLocations;
    bool  _defaultToCurrentLocation;
    bool  _skipsProcessingCurrentLocation;
}

@property (nonatomic, readonly) bool allowsCurrentLocation;
@property (nonatomic, readonly) bool allowsTextOnlyLocations;
@property (nonatomic, readonly) double currentLocationAccuracy;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultToCurrentLocation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool skipsProcessingCurrentLocation;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (bool)allowsCurrentLocation;
- (bool)allowsTextOnlyLocations;
- (double)currentLocationAccuracy;
- (id)defaultSerializedRepresentation;
- (bool)defaultToCurrentLocation;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (bool)skipsProcessingCurrentLocation;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)moduleSummarySlotForState:(id)arg1;

@end
