/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface SBSStatusBarStyleOverridesAssertionAcquisitionHandlerEntry : NSObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) id handler;                                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

