/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BFFFlowItem <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
+(BOOL)controllerAffectedByTapFreeSetup;
+(void)skippedByCloudConfig;
-(id)viewController;
-(void)setNavigationController:(id)arg1;
-(BOOL)isEphemeral;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(void)controllerWasPopped;
-(BOOL)controllerAllowsNavigatingBack;
-(void)startOver;
-(BOOL)shouldAllowStartOver;
-(void)presentHostedViewControllerOnNavigationController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelHostedPresentation;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;
-(void)handleDebugGesture;
-(void)startFlowItem:(BOOL)arg1;

@required
+(id)cloudConfigSkipKey;
-(id)init;
-(void)setDelegate:(id)arg1;

@end
