/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICDrawingVersionedDocument, ICDrawing;

@interface ICAttachmentDrawingModel : ICAttachmentModel {

	ICDrawingVersionedDocument* _drawingDocument;
	BOOL _observingAttachment;

}

@property (assign,nonatomic) BOOL observingAttachment;              //@synthesize observingAttachment=_observingAttachment - In the implementation block
@property (nonatomic,readonly) ICDrawing * drawing; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(id)sharedDrawingController;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)saveURL;
-(ICDrawing *)drawing;
-(BOOL)hasPreviews;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)preferLocalPreviewImages;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg1 ;
-(BOOL)showThumbnailInNoteList;
-(long long)previewImageOrientation;
-(BOOL)canSaveURL;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(CGAffineTransform)previewImageOrientationTransform;
-(id)previewImageURL;
-(void)attachmentIsDeallocating:(id)arg1 ;
-(BOOL)supportsQuickLook;
-(void)startObservingAttachment;
-(void)stopObservingAttachment:(id)arg1 ;
-(BOOL)observingAttachment;
-(void)setObservingAttachment:(BOOL)arg1 ;
-(id)drawingDocument;
-(void)drawingPreviewIsUpToDate;
@end

