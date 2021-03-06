/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface VUIPlaybackReporter : NSObject {

	BOOL _enforceSinglePlaybackSession;
	NSMutableArray* _sessions;

}

@property (nonatomic,retain) NSMutableArray * sessions;                        //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) BOOL enforceSinglePlaybackSession;              //@synthesize enforceSinglePlaybackSession=_enforceSinglePlaybackSession - In the implementation block
-(id)init;
-(void)dealloc;
-(NSMutableArray *)sessions;
-(void)setSessions:(NSMutableArray *)arg1 ;
-(void)_registerObservers;
-(void)_removeObservers;
-(void)_endSession:(id)arg1 ;
-(void)_playerStateWillChange:(id)arg1 ;
-(void)_playerCurrentMediaItemWillChange:(id)arg1 ;
-(void)_logWithFormat:(id)arg1 ;
-(void)_handlePlaybackChangeForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 reason:(id)arg4 ;
-(id)_sessionForPlayer:(id)arg1 ;
-(BOOL)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 ;
-(BOOL)enforceSinglePlaybackSession;
-(void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3 ;
-(void)_endSessions:(id)arg1 ;
-(id)_createSessionForPlayer:(id)arg1 ;
-(void)_beginSession:(id)arg1 ;
@end

