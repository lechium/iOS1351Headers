/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKAttachmentsSearchController.h>

@class CKAttachmentSearchResultCell;

@interface CKDetailsAttachmentsSearchController : CKAttachmentsSearchController {

	CKAttachmentSearchResultCell* _sizingCell;

}

@property (nonatomic,retain) CKAttachmentSearchResultCell * sizingCell;              //@synthesize sizingCell=_sizingCell - In the implementation block
+(id)sectionIdentifier;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(CKAttachmentSearchResultCell *)sizingCell;
-(void)setSizingCell:(CKAttachmentSearchResultCell *)arg1 ;
@end

