/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/ICAttachmentModel.h>

@class ICCRDTIdentifierOrderedSetVersionedDocument, CROrderedSet;

@interface ICAttachmentGalleryModel : ICAttachmentModel {

	ICCRDTIdentifierOrderedSetVersionedDocument* _attachmentIdentifiersOrderedSetDocument;

}

@property (nonatomic,retain) ICCRDTIdentifierOrderedSetVersionedDocument * attachmentIdentifiersOrderedSetDocument;              //@synthesize attachmentIdentifiersOrderedSetDocument=_attachmentIdentifiersOrderedSetDocument - In the implementation block
@property (nonatomic,readonly) CROrderedSet * attachmentIdentifiersOrderedSet; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(BOOL)hasThumbnailImage;
-(BOOL)hasPreviews;
-(BOOL)showThumbnailInNoteList;
-(BOOL)providesStandaloneTitleForNote;
-(id)standaloneTitleForNote;
-(id)additionalIndexableTextContentInNote;
-(id)firstSubAttachment;
-(unsigned long long)subAttachmentsCount;
-(id)singleSubAttachmentAtIndex:(unsigned long long)arg1 ;
-(CROrderedSet *)attachmentIdentifiersOrderedSet;
-(void)insertSubAttachment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)subAttachmentIdentifiers;
-(BOOL)attachmentHasMergeableData;
-(id)subAttachmentIdentifierAtIndex:(unsigned long long)arg1 ;
-(ICCRDTIdentifierOrderedSetVersionedDocument *)attachmentIdentifiersOrderedSetDocument;
-(void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1 ;
-(id)searchableTextContent;
-(id)searchableStringArray;
-(void)enumerateSubAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(long long)previewImageOrientation;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(BOOL)canSaveURL;
-(BOOL)canSaveURLWithOtherAttachments;
-(id)previewImageTypeUTI;
-(id)titleForSubAttachment:(id)arg1 ;
-(BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1 ;
-(void)addSubAttachment:(id)arg1 ;
-(void)removeSubAttachment:(id)arg1 ;
-(unsigned long long)indexOfSubAttachmentWithIdentifier:(id)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(short)sectionForSubAttachments;
-(void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1 ;
-(void)undeleteSubAttachments;
-(void)setAttachmentIdentifiersOrderedSetDocument:(ICCRDTIdentifierOrderedSetVersionedDocument *)arg1 ;
@end

