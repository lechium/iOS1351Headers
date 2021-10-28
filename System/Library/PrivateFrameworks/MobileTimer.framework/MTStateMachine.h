/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTStateMachineEventHandler.h>

@protocol MTStateMachineDelegate, MTStateMachineInfoProvider;
@class MTStateMachineState, NSString;

@interface MTStateMachine : NSObject <MTStateMachineEventHandler> {

	MTStateMachineState* _currentState;
	id<MTStateMachineDelegate> _delegate;
	id<MTStateMachineInfoProvider> _infoProvider;

}

@property (nonatomic,retain) MTStateMachineState * currentState;                              //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<MTStateMachineDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MTStateMachineInfoProvider> infoProvider;              //@synthesize infoProvider=_infoProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<MTStateMachineDelegate>)delegate;
-(void)setDelegate:(id<MTStateMachineDelegate>)arg1 ;
-(MTStateMachineState *)currentState;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCurrentState:(MTStateMachineState *)arg1 ;
-(void)enterState:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(id<MTStateMachineInfoProvider>)infoProvider;
-(id)stateMachineLog;
-(id)stateMachineName;
-(void)setInfoProvider:(id<MTStateMachineInfoProvider>)arg1 ;
@end
