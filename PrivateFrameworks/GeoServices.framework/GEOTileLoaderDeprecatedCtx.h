/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderDeprecatedCtx : NSObject {
    id /* block */  _callback;
    id /* block */  _error;
    id /* block */  _finished;
    GEOTileKeyList * _notLoaded;
    GEOTileKeyList * _originalList;
    id /* block */  _progress;
    struct __CFRunLoop { } * _runloop;
    GEOTileKeyList * _satisfiedList;
    GEOTileKeyList * _submittedList;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, copy) id /* block */ error;
@property (nonatomic, copy) id /* block */ finished;
@property (nonatomic, copy) id /* block */ progress;

- (void)breakCycle;
- (id /* block */)callback;
- (void)cancel;
- (void)dealloc;
- (id /* block */)error;
- (void)failure:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 error:(id)arg2 info:(id)arg3;
- (id /* block */)finished;
- (id)initWithList:(id)arg1;
- (id /* block */)progress;
- (void)setError:(id /* block */)arg1;
- (void)setFinished:(id /* block */)arg1;
- (void)setProgress:(id /* block */)arg1;
- (void)success:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 tile:(id)arg2 info:(id)arg3;

@end
