/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDMessageAutomaticHistoryDeletion : NSObject
+(id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(BOOL)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(void)deleteDirectoryAtPath:(id)arg1 ;
+(id)_getFilePathNotDSStore:(id)arg1 ;
+(BOOL)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(id)_getiChatFileMetadataForPath:(id)arg1 ;
+(BOOL)isOlderThanDays:(long long)arg1 fromDate:(id)arg2 ;
+(id)_getPathAttributesForPath:(id)arg1 ;
+(void)cleanUpOrphanAttachments;
+(void)deleteMessagesAndAttachmentsAfterDays:(long long)arg1 ;
+(void)cleanDatabase;
+(void)deleteSpolightArchivedFilesAfterDays:(long long)arg1 ;
@end

