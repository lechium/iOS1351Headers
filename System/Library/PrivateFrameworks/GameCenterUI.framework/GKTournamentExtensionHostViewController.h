/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKExtensionHostViewController.h>
#import <libobjc.A.dylib/GKTournamentExtensionInterface.h>
#import <libobjc.A.dylib/GKTournamentHostInterface.h>

@class GKTournamentViewRequest, NSString;

@interface GKTournamentExtensionHostViewController : GKExtensionHostViewController <GKTournamentExtensionInterface, GKTournamentHostInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GKTournamentViewRequest * viewRequest; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(oneway void)setupWithViewRequest:(id)arg1 ;
-(oneway void)initializeWithLocalPlayer:(id)arg1 hostPID:(int)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)playTournament:(id)arg1 withTryToken:(id)arg2 ;
-(id)tournamentHostViewController;
@end

