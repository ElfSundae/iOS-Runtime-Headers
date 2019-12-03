/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaItemDownloadInfo : NSObject {
    NSNumber * _identifier;
    bool  _manuallyAdded;
    unsigned long long  _size;
}

@property (nonatomic, readonly) NSNumber *identifier;
@property (getter=isManuallyAdded, nonatomic, readonly) bool manuallyAdded;
@property (nonatomic, readonly) unsigned long long size;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isManuallyAdded;
- (unsigned long long)size;

@end
