/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNUIUserActionContext.h>

@class NSString, BSServiceConnectionEndpoint;

@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext> {

	BOOL _actionExecutionWasAttemted;
	NSString* _channelIdentifier;

}

@property (nonatomic,copy) NSString * channelIdentifier;                                             //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (assign,nonatomic) BOOL actionExecutionWasAttemted;                                        //@synthesize actionExecutionWasAttemted=_actionExecutionWasAttemted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNUIUserActionURLOpener> urlOpener; 
@property (nonatomic,readonly) id<CNUIUserActionUserActivityOpener> userActivityOpener; 
@property (nonatomic,readonly) id<CNUIUserActionDialRequestOpener> dialRequestOpener; 
@property (nonatomic,readonly) id<CNUIUserActionRecorder> actionRecorder; 
@property (nonatomic,readonly) id<CNUIUserActionCurator> actionCurator; 
@property (nonatomic,copy) BSServiceConnectionEndpoint * connectionEndpoint; 
-(id)nilValue;
-(NSString *)channelIdentifier;
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(id<CNUIUserActionCurator>)actionCurator;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(BOOL)actionExecutionWasAttemted;
-(void)setActionExecutionWasAttemted:(BOOL)arg1 ;
@end
