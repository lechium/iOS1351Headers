/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailCore/ECLocalActionReplayer.h>
#import <libobjc.A.dylib/ECIMAPLocalActionReplayer.h>

@protocol ECIMAPServerInterface, ECIMAPLocalActionReplayerDelegate;
@interface ECIMAPFlagChangeActionReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer> {

	id<ECIMAPServerInterface> serverInterface;
	id<ECIMAPLocalActionReplayerDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<ECIMAPLocalActionReplayerDelegate> delegate; 
@property (nonatomic,retain) id<ECIMAPServerInterface> serverInterface; 
-(id<ECIMAPLocalActionReplayerDelegate>)delegate;
-(void)setDelegate:(id<ECIMAPLocalActionReplayerDelegate>)arg1 ;
-(id<ECIMAPServerInterface>)serverInterface;
-(id)replayAction;
-(void)setServerInterface:(id<ECIMAPServerInterface>)arg1 ;
@end

