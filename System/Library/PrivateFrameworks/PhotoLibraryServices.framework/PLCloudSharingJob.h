/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {

	NSString* _archiveFilename;
	BOOL _shouldPrioritize;

}

@property (nonatomic,readonly) PLPhotoLibrary * transientPhotoLibrary; 
@property (assign,nonatomic) BOOL shouldPrioritize;                                 //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
+(id)recoveredEventsWithPathManager:(id)arg1 ;
-(id)initWithAssetsdClient:(id)arg1 ;
-(BOOL)shouldPrioritize;
-(void)runDaemonSide;
-(void)setShouldPrioritize:(BOOL)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(PLPhotoLibrary *)transientPhotoLibrary;
-(id)serialOperationQueue;
-(void)archiveXPCToDisk:(id)arg1 ;
-(void)runAndWaitForMessageToBeSent;
-(void)deleteAllRecoveryEvents;
@end

