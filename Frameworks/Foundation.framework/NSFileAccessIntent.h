/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessIntent : NSObject {
    BOOL  _isRead;
    int  _options;
    NSURL * _url;
}

@property (copy) NSURL *URL;
@property (readonly) BOOL isRead;
@property (readonly) unsigned int readingOptions;
@property (readonly) unsigned int writingOptions;

+ (id)readingIntentWithURL:(id)arg1 options:(unsigned int)arg2;
+ (id)writingIntentWithURL:(id)arg1 options:(unsigned int)arg2;

- (id)URL;
- (void)dealloc;
- (id)description;
- (BOOL)isRead;
- (unsigned int)readingOptions;
- (void)setURL:(id)arg1;
- (unsigned int)writingOptions;

@end
