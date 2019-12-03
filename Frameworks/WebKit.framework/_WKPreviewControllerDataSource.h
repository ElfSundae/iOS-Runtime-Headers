/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource> {
    id /* block */  _completionHandler;
    struct URL { 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_string; 
        unsigned int m_isValid : 1; 
        unsigned int m_protocolIsInHTTPFamily : 1; 
        unsigned int m_cannotBeABaseURL : 1; 
        unsigned int m_portLength : 3; 
        unsigned int m_schemeEnd : 26; 
        unsigned int m_userStart; 
        unsigned int m_userEnd; 
        unsigned int m_passwordEnd; 
        unsigned int m_hostEnd; 
        unsigned int m_pathAfterLastSlash; 
        unsigned int m_pathEnd; 
        unsigned int m_queryEnd; 
    }  _downloadedURL;
    struct RetainPtr<ARQuickLookWebKitItem> { 
        void *m_ptr; 
    }  _item;
    struct RetainPtr<NSItemProvider> { 
        void *m_ptr; 
    }  _itemProvider;
    NSString * _mimeType;
    struct URL { 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_string; 
        unsigned int m_isValid : 1; 
        unsigned int m_protocolIsInHTTPFamily : 1; 
        unsigned int m_cannotBeABaseURL : 1; 
        unsigned int m_portLength : 3; 
        unsigned int m_schemeEnd : 26; 
        unsigned int m_userStart; 
        unsigned int m_userEnd; 
        unsigned int m_passwordEnd; 
        unsigned int m_hostEnd; 
        unsigned int m_pathAfterLastSlash; 
        unsigned int m_pathEnd; 
        unsigned int m_queryEnd; 
    }  _originatingPageURL;
}

@property (copy) id /* block */ completionHandler;
@property (copy) NSString *mimeType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)finish:(struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 3; unsigned int x6 : 26; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; })arg1;
- (id)initWithMIMEType:(id)arg1 originatingPageURL:(struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 3; unsigned int x6 : 26; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; })arg2;
- (id)mimeType;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMimeType:(id)arg1;
- (void)setProgress:(float)arg1;

@end
