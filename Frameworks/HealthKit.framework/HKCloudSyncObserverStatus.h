/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCloudSyncObserverStatus : NSObject <NSCopying, NSSecureCoding> {
    NSError * _errorRequiringUserAction;
    NSDate * _lastPullDate;
    NSDate * _lastPushDate;
    NSDate * _restoreCompletionDate;
    bool  _syncEnabled;
}

@property (nonatomic, copy) NSError *errorRequiringUserAction;
@property (nonatomic, copy) NSDate *lastPullDate;
@property (nonatomic, copy) NSDate *lastPushDate;
@property (nonatomic, copy) NSDate *restoreCompletionDate;
@property (nonatomic) bool syncEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorRequiringUserAction;
- (id)initWithCoder:(id)arg1;
- (id)lastPullDate;
- (id)lastPushDate;
- (id)restoreCompletionDate;
- (void)setErrorRequiringUserAction:(id)arg1;
- (void)setLastPullDate:(id)arg1;
- (void)setLastPushDate:(id)arg1;
- (void)setRestoreCompletionDate:(id)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (bool)syncEnabled;

@end
