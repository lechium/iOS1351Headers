/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProviderDaemon/FPDActionOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, FPDCoordinator, FPDownloadInfo;

@interface FPDDownloadOperation : FPDActionOperation {

	NSObject*<OS_dispatch_queue> _queue;
	FPDCoordinator* _coordinator;

}

@property (nonatomic,readonly) FPDownloadInfo * info; 
+(BOOL)_validateInfo:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3 ;
-(void)sendPastUpdatesToClient:(id)arg1 ;
-(id)downloadInfo;
-(void)_setupCreatedItemForRoot:(id)arg1 ;
-(void)_finishedDownloadingLocator:(id)arg1 withError:(id)arg2 ;
@end

