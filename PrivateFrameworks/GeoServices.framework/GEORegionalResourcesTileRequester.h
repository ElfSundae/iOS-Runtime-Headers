/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourcesTileRequester : GEOTileRequester {
    NSMutableArray * _loaders;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadersLock;
}

+ (unsigned char)tileProviderIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)start;

@end
