/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMultilineStampChatItem.h>

@class CKTranscriptPluginChatItem, IMTranscriptPluginBreadcrumbChatItem, UIImage;

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampChatItem {

	CKTranscriptPluginChatItem* _previousPluginChatItem;

}

@property (nonatomic,readonly) IMTranscriptPluginBreadcrumbChatItem * IMChatItem; 
@property (nonatomic,readonly) UIImage * iconImage; 
@property (nonatomic,readonly) double iconWidthPlusPadding; 
@property (nonatomic,retain) CKTranscriptPluginChatItem * previousPluginChatItem;              //@synthesize previousPluginChatItem=_previousPluginChatItem - In the implementation block
-(UIImage *)iconImage;
-(Class)cellClass;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)transcriptOrientation;
-(BOOL)_wantsCenteredOrientation;
-(double)iconWidthPlusPadding;
-(BOOL)_wantsIconImage;
-(unsigned long long)_breadcrumbOptionFlags;
-(CKTranscriptPluginChatItem *)previousPluginChatItem;
-(void)setPreviousPluginChatItem:(CKTranscriptPluginChatItem *)arg1 ;
@end

