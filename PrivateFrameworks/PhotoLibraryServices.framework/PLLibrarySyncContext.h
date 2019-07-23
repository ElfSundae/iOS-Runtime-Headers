/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {
    PLPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) BOOL serverSupportsVision;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)deleteFaces:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)makeFace;
- (id)personForUUID:(id)arg1;
- (id)photoLibrary;
- (BOOL)serverSupportsVision;

@end
