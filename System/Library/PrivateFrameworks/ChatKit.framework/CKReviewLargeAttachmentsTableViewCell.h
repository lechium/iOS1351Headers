/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class UIImageView, CKAttachmentItem;

@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell {

	UIImageView* _previewView;
	CKAttachmentItem* _attachmentItem;

}

@property (nonatomic,retain) UIImageView * previewView;                      //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) CKAttachmentItem * attachmentItem;              //@synthesize attachmentItem=_attachmentItem - In the implementation block
+(double)requestedHeight;
+(CGSize)leftHandSideViewSize;
-(void)prepareForReuse;
-(UIImageView *)previewView;
-(void)setPreviewView:(UIImageView *)arg1 ;
-(void)setModelObject:(id)arg1 ;
-(id)leftHandSideView;
-(CKAttachmentItem *)attachmentItem;
-(void)setAttachmentItem:(CKAttachmentItem *)arg1 ;
-(void)_updateImageViewForAttachmentItem;
@end

