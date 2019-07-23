/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {
    CMArchiveManager *mArchiver;
    NSString *mFileName;
    WDDocument *wDom;
}

- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (float)bottomMargin;
- (struct CGSize { float x1; float x2; })contentSizeForDevice;
- (void)dealloc;
- (int)defaultTabWidth;
- (id)documentTitle;
- (id)fileName;
- (BOOL)hasSessionBreakAtIndex:(unsigned int)arg1;
- (float)headerMargin;
- (id)initWithWDom:(id)arg1 archiver:(id)arg2;
- (float)leftMargin;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (void)mapWithState:(id)arg1;
- (struct CGSize { float x1; float x2; })pageSizeForDevice;
- (float)rightMargin;
- (void)setFileName:(id)arg1;
- (id)styleMatrix;
- (float)topMargin;

@end