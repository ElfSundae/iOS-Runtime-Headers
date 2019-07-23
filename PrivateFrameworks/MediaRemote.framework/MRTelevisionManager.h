/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTelevisionManager : NSObject {
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSPointerArray * _televisionsPointerArray;
}

@property (nonatomic, readonly) NSArray *allTelevisions;

+ (id)sharedManager;

- (id)allTelevisions;
- (void)clearTelevisions;
- (void)dealloc;
- (id)init;
- (void)registerTelevision:(id)arg1;
- (id)televisionWithIdentifier:(id)arg1;

@end
