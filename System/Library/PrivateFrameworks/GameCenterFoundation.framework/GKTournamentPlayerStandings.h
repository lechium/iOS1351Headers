/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GKTournamentPlayerStandingsInternal;

@interface GKTournamentPlayerStandings : NSObject {

	GKTournamentPlayerStandingsInternal* _internal;

}

@property (retain) GKTournamentPlayerStandingsInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long topScore; 
@property (nonatomic,readonly) long long friendRank; 
@property (nonatomic,readonly) long long friendCount; 
@property (nonatomic,readonly) long long globalRank; 
@property (nonatomic,readonly) long long globalPlayerCount; 
@property (nonatomic,readonly) long long replayCount; 
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTournamentPlayerStandingsInternal *)internal;
-(void)setInternal:(GKTournamentPlayerStandingsInternal *)arg1 ;
@end

