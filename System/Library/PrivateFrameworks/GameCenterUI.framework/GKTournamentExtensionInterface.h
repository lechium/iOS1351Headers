/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GKTournamentViewRequest;


@protocol GKTournamentExtensionInterface <GKSocialGamingExtensionInterface>
@property (nonatomic,readonly) GKTournamentViewRequest * viewRequest; 
@required
-(oneway void)setupWithViewRequest:(id)arg1;
-(oneway void)initializeWithLocalPlayer:(id)arg1 hostPID:(int)arg2 reply:(/*^block*/id)arg3;
-(GKTournamentViewRequest *)viewRequest;

@end

