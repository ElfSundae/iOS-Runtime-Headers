/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible> {
    NSString * _assetUUID;
    long long  _captureDevice;
    long long  _captureOrientation;
    NSDate * _creationDate;
    void * _previewImageSurface;
    unsigned short  _sessionIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
}

@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) void*previewImageSurface;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } videoDimensions;

- (void).cxx_destruct;
- (id)assetUUID;
- (id)burstIdentifier;
- (id)captureDate;
- (long long)captureDevice;
- (long long)captureOrientation;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 captureDevice:(long long)arg5 videoDimensions:(struct CGSize { double x1; double x2; })arg6 previewImageSurface:(void*)arg7;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (unsigned long long)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)placeholderImage;
- (void*)previewImageSurface;
- (unsigned short)sessionIdentifier;
- (id)stillImageMetadata;
- (id)uuid;
- (struct CGSize { double x1; double x2; })videoDimensions;

@end
