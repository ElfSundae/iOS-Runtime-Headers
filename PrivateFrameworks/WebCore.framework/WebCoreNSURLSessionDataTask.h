/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreNSURLSessionDataTask : NSObject {
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    NSURLRequest * _currentRequest;
    NSError * _error;
    NSURLRequest * _originalRequest;
    float  _priority;
    struct RefPtr<WebCore::PlatformMediaResource, WTF::DumbPtrTraits<WebCore::PlatformMediaResource> > { 
        struct PlatformMediaResource {} *m_ptr; 
    }  _resource;
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    }  _response;
    WebCoreNSURLSession * _session;
    long long  _state;
    NSString * _taskDescription;
    unsigned long long  _taskIdentifier;
}

@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property (copy) NSURLRequest *currentRequest;
@property (copy) NSError *error;
@property (copy) NSURLRequest *originalRequest;
@property float priority;
@property (readonly, copy) NSURLResponse *response;
@property WebCoreNSURLSession *session;
@property long long state;
@property (copy) NSString *taskDescription;
@property unsigned long long taskIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_finish;
- (void)_resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 loadFinishedWithError:(id)arg2;
- (void)_restart;
- (id)_timingData;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (void)dealloc;
- (id)error;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 URL:(id)arg3;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3;
- (id)originalRequest;
- (float)priority;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 accessControlCheckFailedWithError:(const struct ResourceError { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 3; unsigned int x_2_1_6 : 26; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; int x4; unsigned char x5; bool x6; struct RetainPtr<NSError> { void *x_7_1_1; } x7; }*)arg2;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 loadFailedWithError:(const struct ResourceError { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 3; unsigned int x_2_1_6 : 26; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; int x4; unsigned char x5; bool x6; struct RetainPtr<NSError> { void *x_7_1_1; } x7; }*)arg2;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 receivedData:(const char *)arg2 length:(int)arg3;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 receivedRedirect:(const struct ResourceResponse { struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_1_1_1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 3; unsigned int x_1_1_6 : 26; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; } x1; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; long long x3; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; }*)arg2 request:(struct ResourceRequest { struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_1_1_1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 3; unsigned int x_1_1_6 : 26; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; } x1; double x2; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 3; unsigned int x_3_1_6 : 26; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; unsigned int x_3_1_10; unsigned int x_3_1_11; unsigned int x_3_1_12; unsigned int x_3_1_13; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; }*)arg3 completionHandler:(struct CompletionHandler<void (WebCore::ResourceRequest &&)>={Function<void (WebCore::ResourceRequest &&)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::ResourceRequest &&>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::ResourceRequest &&> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::ResourceRequest &&> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::ResourceRequest &&> > >=^{CallableWrapperBase<void, WebCore::ResourceRequest &&> {}*)arg4;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 receivedResponse:(const struct ResourceResponse { struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_1_1_1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 3; unsigned int x_1_1_6 : 26; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; } x1; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; long long x3; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; }*)arg2 completionHandler:(struct CompletionHandler<void (WebCore::ShouldContinue)>={Function<void (WebCore::ShouldContinue)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::ShouldContinue>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::ShouldContinue> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::ShouldContinue> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::ShouldContinue> > >=^{CallableWrapperBase<void, WebCore::ShouldContinue> {}*)arg3;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 sentBytes:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;
- (bool)resource:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 shouldCacheResponse:(const struct ResourceResponse { struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_1_1_1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 3; unsigned int x_1_1_6 : 26; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; } x1; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; long long x3; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; }*)arg2;
- (void)resourceFinished:(struct PlatformMediaResource { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1;
- (id)response;
- (void)resume;
- (id)session;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (long long)state;
- (void)suspend;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;

@end
