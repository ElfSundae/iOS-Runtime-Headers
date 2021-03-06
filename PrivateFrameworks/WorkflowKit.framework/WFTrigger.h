/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFTrigger : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)isAllowedToRunAutomatically;
+ (bool)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;
+ (id)triggerWithSerializedData:(id)arg1;

- (void)configureWithConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)serializedData;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

+ (id)powerLogEventKindForTrigger:(id)arg1;

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (bool)contextStoreRegistrationIsForWatch;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

+ (id)triggerTypeIcon;

- (Class)viewControllerClassForConfiguration;

@end
