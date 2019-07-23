/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageLoadingContextEvent : NSObject {
    NSArray * _content;
    MFMessageLoadingContext * _context;
    NSError * _error;
    BOOL  _hasLoadedBestAlternativePart;
    BOOL  _hasLoadedCompleteBody;
    MFMimeBody * _loadedBody;
    MFMimePart * _loadedPart;
    unsigned int  _remainingBytes;
}

@property (nonatomic, copy) NSArray *content;
@property (nonatomic) MFMessageLoadingContext *context;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) BOOL hasLoadedBestAlternativePart;
@property (nonatomic) BOOL hasLoadedCompleteBody;
@property (nonatomic, retain) MFMimeBody *loadedBody;
@property (nonatomic, retain) MFMimePart *loadedPart;
@property (nonatomic) unsigned int remainingBytes;
@property (nonatomic, readonly) NSError *smimeError;

- (void).cxx_destruct;
- (id)_descriptionForDebugging:(BOOL)arg1;
- (id)content;
- (id)context;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)error;
- (BOOL)hasLoadedBestAlternativePart;
- (BOOL)hasLoadedCompleteBody;
- (id)loadedBody;
- (id)loadedPart;
- (unsigned int)remainingBytes;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasLoadedBestAlternativePart:(BOOL)arg1;
- (void)setHasLoadedCompleteBody:(BOOL)arg1;
- (void)setLoadedBody:(id)arg1;
- (void)setLoadedPart:(id)arg1;
- (void)setRemainingBytes:(unsigned int)arg1;
- (id)smimeError;

@end
