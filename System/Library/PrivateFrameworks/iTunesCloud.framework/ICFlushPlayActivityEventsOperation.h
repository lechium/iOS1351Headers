/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, SSVPlayActivityController;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SSVPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) SSVPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
-(id)init;
-(void)execute;
-(id)initWithPlayActivityController:(id)arg1 ;
-(SSVPlayActivityController *)playActivityController;
@end

