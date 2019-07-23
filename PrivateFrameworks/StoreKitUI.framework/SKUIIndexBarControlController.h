/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarControlController : NSObject <SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate> {
    SKUIIndexBarEntryDescriptor *_combinedEntryDescriptor;
    <SKUIIndexBarControlControllerDataSource> *_dataSource;
    struct { 
        unsigned int dataSourceRespondsToCombinedEntry : 1; 
        unsigned int dataSourceRespondsToNumberOfSections : 1; 
        unsigned int delegateRespondsToDidSelectEntryAtIndexPath : 1; 
        unsigned int delegateRespondsToDidSelectBeyondBottom : 1; 
        unsigned int delegateRespondsToDidSelectBeyondTop : 1; 
    } _dataSourceDelegateFlags;
    <SKUIIndexBarControlControllerDelegate> *_delegate;
    NSMapTable *_entryDescriptorToCachedEntry;
    BOOL _hasValidCombinedEntryDescriptor;
    SKUIIndexBarControl *_indexBarControl;
    NSMapTable *_indexPathToEntryDescriptor;
    NSMapTable *_requestIDToDescriptors;
    SKUIResourceLoader *_resourceLoader;
}

@property (nonatomic) <SKUIIndexBarControlControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIIndexBarControlControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIIndexBarControl *indexBarControl;
@property (nonatomic, retain) SKUIResourceLoader *resourceLoader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_URLForEntryDescriptor:(id)arg1;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (id)_cachedEntryForEntryDescriptor:(id)arg1;
- (void)_cancelLoadForEntryDescriptors:(id)arg1;
- (id)_combinedEntryDescriptor;
- (void)_configureEntry:(id)arg1 withEntryDescriptor:(id)arg2;
- (id)_entryDescriptorAtIndexPath:(id)arg1;
- (id)_entryForEntryDescriptor:(id)arg1 loadingIfNeeded:(BOOL)arg2;
- (void)_finishLoadForRequestID:(id)arg1 withResultingImage:(id)arg2;
- (void)_loadEntryForEntryDescriptor:(id)arg1;
- (id)_placeholderEntryForEntryDescriptor:(id)arg1;
- (void)_updateCachedEntry:(id)arg1 forEntryDescriptor:(id)arg2;
- (id)combinedEntryForIndexBarControl:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)indexBarControl;
- (void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2;
- (id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;
- (int)indexBarControl:(id)arg1 numberOfEntriesInSection:(int)arg2;
- (void)indexBarControlDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlDidSelectBeyondTop:(id)arg1;
- (id)init;
- (id)initWithIndexBarControl:(id)arg1;
- (int)numberOfSectionsInIndexBarControl:(id)arg1;
- (void)reloadCombinedEntryDescriptor;
- (void)reloadData;
- (void)reloadEntryDescriptorAtIndexPath:(id)arg1;
- (void)reloadSections:(id)arg1;
- (id)resourceLoader;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResourceLoader:(id)arg1;

@end
