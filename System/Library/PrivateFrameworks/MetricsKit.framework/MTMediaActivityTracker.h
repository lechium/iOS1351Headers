/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTMediaPlaylist;
@class MTVPAFKit, MTMediaActivity, NSMutableArray, MTMediaTimeTracker;

@interface MTMediaActivityTracker : NSObject {

	BOOL _shouldGenerateTransitions;
	MTVPAFKit* _vpafKit;
	id<MTMediaPlaylist> _playlist;
	MTMediaActivity* _playActivity;
	MTMediaActivity* _seekActivity;
	NSMutableArray* _eventData;
	MTMediaTimeTracker* _timeTracker;

}

@property (assign,nonatomic,__weak) MTVPAFKit * vpafKit;                    //@synthesize vpafKit=_vpafKit - In the implementation block
@property (nonatomic,retain) id<MTMediaPlaylist> playlist;                  //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MTMediaActivity * playActivity;                //@synthesize playActivity=_playActivity - In the implementation block
@property (nonatomic,retain) MTMediaActivity * seekActivity;                //@synthesize seekActivity=_seekActivity - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventData;                    //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,retain) MTMediaTimeTracker * timeTracker;              //@synthesize timeTracker=_timeTracker - In the implementation block
@property (assign,nonatomic) BOOL shouldGenerateTransitions;                //@synthesize shouldGenerateTransitions=_shouldGenerateTransitions - In the implementation block
+(/*^block*/id)playlistItemComparator;
-(id<MTMediaPlaylist>)playlist;
-(void)setPlaylist:(id<MTMediaPlaylist>)arg1 ;
-(NSMutableArray *)eventData;
-(void)setEventData:(NSMutableArray *)arg1 ;
-(id)initWithVPAFKit:(id)arg1 playlist:(id)arg2 eventData:(id)arg3 ;
-(void)setVpafKit:(MTVPAFKit *)arg1 ;
-(MTVPAFKit *)vpafKit;
-(void)setShouldGenerateTransitions:(BOOL)arg1 ;
-(id)startActivity:(long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(BOOL)shouldGenerateTransitions;
-(void)setTimeTracker:(MTMediaTimeTracker *)arg1 ;
-(void)playStartedWithPlaybackRate:(float)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(void)generatePlaylistTransitionsIfNecessary:(unsigned long long)arg1 ;
-(void)stopActivity:(long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(MTMediaActivity *)playActivity;
-(MTMediaTimeTracker *)timeTracker;
-(id)combineEventData:(id)arg1 withPlaylistDataForItem:(id)arg2 ;
-(void)setPlayActivity:(MTMediaActivity *)arg1 ;
-(void)setSeekActivity:(MTMediaActivity *)arg1 ;
-(MTMediaActivity *)seekActivity;
-(void)playStartedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playStoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playTransitionedAtOverallPosition:(unsigned long long)arg1 eventData:(id)arg2 ;
-(void)seekStartedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)seekStoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)synchronizePlaybackRate:(float)arg1 overallPosition:(unsigned long long)arg2 ;
-(void)updateEventData:(id)arg1 ;
@end

