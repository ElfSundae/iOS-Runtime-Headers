/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface HRHealthRecordsMigrator : NSObject {
    void dataVersionKey;
    void healthRecordsKeyValueDomain;
    void healthStore;
    void keyValueDomain;
    void queue;
    void searchIndexController;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)migrateIfNeededWithCompletion:(id /* block */)arg1;

@end
