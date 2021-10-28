/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TCCancelDelegate, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, TCMessageContext, TCProgressContext;

@interface TCBackgroundThreadManager : NSObject {

	id<TCCancelDelegate> mCancelDelegate;
	BOOL mIsWaiting;
	unsigned long long mBlockCount;
	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_group> mGroup;
	NSObject*<OS_dispatch_queue> mProgressReportingQueue;
	TCMessageContext* mMessageContext;
	TCProgressContext* mProgressContext;

}

@property (readonly) BOOL isCancelled; 
@property (retain) TCMessageContext * messageContext; 
@property (retain) TCProgressContext * progressContext; 
-(void)dealloc;
-(BOOL)isCancelled;
-(void)waitUntilComplete;
-(TCMessageContext *)messageContext;
-(void)setMessageContext:(TCMessageContext *)arg1 ;
-(TCProgressContext *)progressContext;
-(void)setProgressContext:(TCProgressContext *)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 ;
-(void)addASyncBlock:(/*^block*/id)arg1 ;
@end
