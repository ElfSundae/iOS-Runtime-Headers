/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDText : NSObject {
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    WDTableCell *mTableCell;
    int mTextType;
}

- (void)addBlock:(id)arg1;
- (id)addParagraph;
- (id)addParagraphAtIndex:(int)arg1;
- (id)addTable;
- (id)addTableAtIndex:(int)arg1;
- (id)blockAt:(unsigned int)arg1;
- (unsigned int)blockCount;
- (id)blockIterator;
- (id)blocks;
- (id)content;
- (void)dealloc;
- (id)description;
- (id)document;
- (unsigned int)indexOfBlock:(id)arg1;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (BOOL)isEmpty;
- (id)lastBlock;
- (id)newBlockIterator;
- (id)newRunIterator;
- (void)removeLastBlock;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)runIterator;
- (id)tableCell;
- (int)tableNestingLevel;
- (int)textType;

@end
