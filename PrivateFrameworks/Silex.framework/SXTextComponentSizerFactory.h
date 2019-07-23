/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
    <SXSmartFieldFactory> * _smartFieldFactory;
    <SXTextComponentLayoutHosting> * _textComponentLayoutHosting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) <SXSmartFieldFactory> *smartFieldFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXTextComponentLayoutHosting> *textComponentLayoutHosting;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 smartFieldFactory:(id)arg3;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
- (id)smartFieldFactory;
- (id)textComponentLayoutHosting;
- (id)type;

@end
