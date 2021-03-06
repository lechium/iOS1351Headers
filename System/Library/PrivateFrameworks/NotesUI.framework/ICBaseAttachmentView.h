/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ICAttachment, ICTextAttachment, NSRegularExpression;

@interface ICBaseAttachmentView : UIView {

	BOOL _selected;
	ICAttachment* _attachment;
	ICTextAttachment* _textAttachment;
	NSRegularExpression* _highlightPatternRegex;
	CGSize _attachmentContentSize;

}

@property (assign,nonatomic,__weak) ICAttachment * attachment;                         //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) ICTextAttachment * textAttachment;                 //@synthesize textAttachment=_textAttachment - In the implementation block
@property (assign,nonatomic) BOOL selected;                                            //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) CGSize attachmentContentSize;                             //@synthesize attachmentContentSize=_attachmentContentSize - In the implementation block
@property (nonatomic,retain) NSRegularExpression * highlightPatternRegex;              //@synthesize highlightPatternRegex=_highlightPatternRegex - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(void)setTextAttachment:(ICTextAttachment *)arg1 ;
-(ICTextAttachment *)textAttachment;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)contentSizeCategoryDidChange;
-(void)attachmentPreviewImagesDidUpdate:(id)arg1 ;
-(NSRegularExpression *)highlightPatternRegex;
-(void)setHighlightPatternRegex:(NSRegularExpression *)arg1 ;
-(id)quickLookTransitionView;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)attachmentWillBeDeleted:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(void)removeKVOObserversForAttachment:(id)arg1 ;
-(void)addKVObserversForAttachment:(id)arg1 ;
-(void)willChangeAttachment;
-(void)didChangeAttachment;
-(void)didChangeMedia;
-(void)didChangeMergeableData;
-(void)didChangeAttachmentTitle;
-(void)didSetSelected:(BOOL)arg1 ;
-(void)didUpdatePreviewImages;
-(void)willDeleteAttachment;
-(void)didChangeSize;
-(void)didScrollOutOfVisibleRange;
-(void)didScrollIntoVisibleRange;
-(BOOL)cancelDidScrollIntoVisibleRange;
-(CGSize)attachmentContentSize;
-(void)setAttachmentContentSize:(CGSize)arg1 ;
@end

