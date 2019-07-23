/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface _IKJSInspectorSynchronousNetworkRequestRecord : NSObject <IKNetworkRequestRecord> {
    NSURLRequest * _URLRequest;
    NSURLResponse * _URLResponse;
    bool  _didSendURLRequest;
    NSString * _identifier;
    long long  _initiatorType;
    _IKJSInspectorNetworkLoader * _loader;
    long long  _resourceType;
    NSData * _responseBodyData;
}

@property (getter=urlRequest, nonatomic, copy) NSURLRequest *URLRequest;
@property (getter=urlResponse, nonatomic, copy) NSURLResponse *URLResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long initiatorType;
@property (nonatomic) _IKJSInspectorNetworkLoader *loader;
@property (nonatomic, readonly) long long resourceType;
@property (nonatomic, copy) NSData *responseBodyData;
@property (readonly) Class superclass;

+ (long long)_protocolResourceTypeForType:(long long)arg1;
+ (long long)_responseSourceTypeForCacheType:(long long)arg1;

- (void).cxx_destruct;
- (void)_didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3 timestamp:(double)arg4;
- (void)_dispatchEvent:(long long)arg1 block:(id /* block */)arg2;
- (id)description;
- (void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(id /* block */)arg2;
- (void)didCompleteLoadingFromMemoryWithRequest:(id)arg1 response:(id)arg2 withResponseBodyBlock:(id /* block */)arg3;
- (void)didCompleteLoadingWithResponseBody:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 loader:(id)arg2 resourceType:(long long)arg3 initiatorType:(long long)arg4;
- (long long)initiatorType;
- (id)loader;
- (long long)resourceType;
- (id)responseBodyData;
- (void)setLoader:(id)arg1;
- (void)setResponseBodyData:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setURLResponse:(id)arg1;
- (id)urlRequest;
- (id)urlResponse;
- (void)willSendRequest:(id)arg1;

@end
