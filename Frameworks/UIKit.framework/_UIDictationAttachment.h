/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDictationAttachment : NSTextAttachment {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _attachmentRange;
    NSDictionary *_typingAttributesBeforeInsertion;
}

@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } attachmentRange;
@property (nonatomic, copy) NSDictionary *typingAttributesBeforeInsertion;

- (void).cxx_destruct;
- (struct _NSRange { unsigned int x1; unsigned int x2; })attachmentRange;
- (void)setAttachmentRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setTypingAttributesBeforeInsertion:(id)arg1;
- (id)typingAttributesBeforeInsertion;

@end
