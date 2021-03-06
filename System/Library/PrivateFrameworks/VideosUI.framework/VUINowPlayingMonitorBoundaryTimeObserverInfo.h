/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject {

	BOOL _notifiedOfEntry;
	double _time;
	NSUUID* _token;
	/*^block*/id _handler;

}

@property (assign,nonatomic) double time;                       //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL notifiedOfEntry;              //@synthesize notifiedOfEntry=_notifiedOfEntry - In the implementation block
@property (nonatomic,retain) NSUUID * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(NSUUID *)token;
-(void)setHandler:(id)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setToken:(NSUUID *)arg1 ;
-(BOOL)notifiedOfEntry;
-(void)setNotifiedOfEntry:(BOOL)arg1 ;
@end

