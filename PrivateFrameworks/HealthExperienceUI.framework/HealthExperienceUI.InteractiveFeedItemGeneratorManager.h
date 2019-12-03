/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
 */

@interface HealthExperienceUI.InteractiveFeedItemGeneratorManager : NSObject <UICollectionViewDataSourcePrefetching, UITableViewDataSourcePrefetching> {
    void $__lazy_storage_$_identifier;
    void availablePlugins;
    void dataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateRange;
    void eventHandler;
    void favoritesProvider;
    void healthStore;
    void runningPrefetchOperations;
    void storageContext;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)init;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;

@end
