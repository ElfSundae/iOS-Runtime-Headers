/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICLegacySearchIndexableNoteContext : ICSearchIndexableNoteContext {
    BOOL _isMainContext;
    struct NoteContext { } *_noteContext;
}

@property (nonatomic) BOOL isMainContext;
@property (nonatomic) NoteContext *noteContext;

- (void).cxx_destruct;
- (id)contextIdentifier;
- (id)initWithNoteContext:(struct NoteContext { }*)arg1 isMainContext:(BOOL)arg2;
- (BOOL)isMainContext;
- (struct NoteContext { }*)noteContext;
- (void)setIsMainContext:(BOOL)arg1;
- (void)setNoteContext:(struct NoteContext { }*)arg1;

@end
