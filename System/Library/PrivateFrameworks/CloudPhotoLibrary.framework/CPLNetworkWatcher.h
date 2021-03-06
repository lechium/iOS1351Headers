/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_nw_path_monitor, CPLNetworkWatcherDelegate;
@class NSObject, NSString, CPLNetworkState;

@interface CPLNetworkWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_path_monitor> _monitor;
	NSString* _endPoint;
	CPLNetworkState* _networkState;
	id<CPLNetworkWatcherDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * endPoint;                                      //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) CPLNetworkState * networkState;                           //@synthesize networkState=_networkState - In the implementation block
@property (assign,nonatomic,__weak) id<CPLNetworkWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CPLNetworkWatcherDelegate>)delegate;
-(void)setDelegate:(id<CPLNetworkWatcherDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id)initWithQueue:(id)arg1 ;
-(NSString *)endPoint;
-(CPLNetworkState *)networkState;
@end

