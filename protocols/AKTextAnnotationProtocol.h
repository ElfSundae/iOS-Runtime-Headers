/* Generated by RuntimeBrowser.
 */

@protocol AKTextAnnotationProtocol <NSObject>

@required

- (NSTextStorage *)annotationText;
- (BOOL)isEditingText;
- (void)setAnnotationText:(NSTextStorage *)arg1;
- (void)setIsEditingText:(BOOL)arg1;
- (void)setShouldUsePlaceholderText:(BOOL)arg1;
- (void)setTextIsClipped:(BOOL)arg1;
- (void)setTextIsFixedHeight:(BOOL)arg1;
- (void)setTextIsFixedWidth:(BOOL)arg1;
- (void)setTypingAttributes:(NSDictionary *)arg1;
- (BOOL)shouldUsePlaceholderText;
- (BOOL)textIsClipped;
- (BOOL)textIsFixedHeight;
- (BOOL)textIsFixedWidth;
- (NSDictionary *)typingAttributes;

@end
