/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMDaemonCore/IMDaemonCore-Structs.h>
@interface IMDAttachmentStore : NSObject
+(id)sharedInstance;
-(void)markAllAttachmentsAsNotPurgeable;
-(BOOL)updateLegacyTransferGUIDIfNeeded:(id)arg1 ;
-(id)attachmentWithGUID:(id)arg1 ;
-(void)markAllAttachmentsAsNeedingCloudKitSync;
-(BOOL)updateAttachment:(id)arg1 ;
-(BOOL)isSafeToDeleteAttachmentAtPath:(id)arg1 ;
-(BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 ;
-(BOOL)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 ;
-(void)markAttachmentPurgeable:(id)arg1 ;
-(id)fileTransferWithAttachmentRecordRef:(IMDAttachmentRecordStructRef)arg1 ;
-(BOOL)_fileEligibleForCacheDelete:(id)arg1 ;
-(BOOL)_cloudkitSyncingEnabled;
-(void)markFileAsPurgeable:(id)arg1 ;
-(id)getAuxVideoPath:(id)arg1 ;
-(BOOL)_updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 andUpdateTransfer:(id)arg2 ;
-(BOOL)_shouldEarlyReturnForWrongItemType:(id)arg1 ;
-(id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3 ;
-(BOOL)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2 ;
-(BOOL)deleteAttachmentsWithGUIDs:(id)arg1 ;
-(BOOL)deleteAttachmentDataForTransfer:(id)arg1 ;
-(BOOL)deleteAttachmentWithGUID:(id)arg1 ;
@end
