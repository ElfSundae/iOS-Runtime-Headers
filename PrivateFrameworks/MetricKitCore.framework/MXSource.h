/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricKitCore.framework/MetricKitCore
 */

@interface MXSource : NSObject <MXSourceXPCServer, NSXPCListenerDelegate> {
    NSObject<OS_os_log> * _MXSourceLogHandle;
    NSFileManager * _fileManager;
    NSObject<OS_dispatch_queue> * _iVarQueue;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSXPCListener * _xpcListener;
}

@property (retain) NSObject<OS_os_log> *MXSourceLogHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *iVarQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (id)sharedSource;

- (void).cxx_destruct;
- (id)MXSourceLogHandle;
- (id)bundleIDFromPid:(int)arg1;
- (id)bundleIDFromURL:(id)arg1;
- (void)deliverDummyPayloadForClient:(id)arg1;
- (id)fileManager;
- (id)iVarQueue;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)requestQueue;
- (void)setFileManager:(id)arg1;
- (void)setIVarQueue:(id)arg1;
- (void)setMXSourceLogHandle:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)setupSourceDirectoryForSource:(id)arg1;
- (bool)validatePayload:(id)arg1;
- (bool)validatePowerlogData:(id)arg1;
- (void)writeMetricDataWithPayload:(id)arg1;
- (id)xpcListener;

@end
