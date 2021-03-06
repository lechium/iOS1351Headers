/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsAttachmentDownloadConsumer.h>

@class NSString;

@interface DADClientAttachmentDownloadDelegate : DADClientDelegate <DAEventsAttachmentDownloadConsumer> {

	NSString* _attachmentUUID;
	id _downloadID;

}

@property (nonatomic,retain) NSString * attachmentUUID;              //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,retain) id downloadID;                          //@synthesize downloadID=_downloadID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)setDownloadID:(id)arg1 ;
-(id)downloadID;
-(NSString *)attachmentUUID;
-(void)downloadFinishedError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3 ;
-(void)beginDownload;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
@end

