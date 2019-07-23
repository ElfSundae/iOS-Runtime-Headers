/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSResponseDataParser : NSObject

+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseBrowseListingWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseControlInterfacesResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseControlPromptResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseDeletedIDListingWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseDictionaryCollectionWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseEditCommandResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseErrorResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseItemIDArrayWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (unsigned int)_parseItemPropertyCountWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseItemsResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(id /* block */)arg3;
+ (id)_parseListingCollectionWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(id /* block */)arg3;
+ (id)_parseListingItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(id /* block */)arg3;
+ (id)_parseLoginResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parsePlayStatusResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned int)arg3 usingHandler:(id /* block */)arg4;
+ (id)_parseUpdateResponseWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (id)_parseUpdateTypeWithBytes:(const char *)arg1 length:(unsigned int)arg2;
+ (void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(id /* block */)arg2;
+ (void)enumerateItemsInResponseData:(id)arg1 usingHandler:(id /* block */)arg2;
+ (id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(id /* block */)arg2;
+ (id)parseErrorInResponseData:(id)arg1;
+ (void)parseItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(id /* block */)arg3;
+ (unsigned int)parseItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 valuesOut:(struct { unsigned int x1; char *x2; unsigned int x3; int x4; }*)arg3 valuesCapacity:(unsigned int)arg4;
+ (id)parseResponseData:(id)arg1;

@end
