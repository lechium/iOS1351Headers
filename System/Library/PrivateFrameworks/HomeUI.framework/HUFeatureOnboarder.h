/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HUFeatureOnboardingConfiguratorDelegate.h>

@protocol HUConfigurationViewController;
@class NSMutableDictionary, NAFuture, HUFeatureOnboardingConfigurator, NSMutableArray, UINavigationController, UIViewController, NSString;

@interface HUFeatureOnboarder : NSObject <HUFeatureOnboardingConfiguratorDelegate> {

	BOOL _restart;
	BOOL _hasPerformedPostProcessing;
	NSMutableDictionary* _userInputResults;
	NAFuture* _completionFuture;
	HUFeatureOnboardingConfigurator* _configurator;
	NSMutableArray* _allRemainingFlowGroups;
	UINavigationController* _navController;
	UIViewController*<HUConfigurationViewController> __currentViewControllerForTests;

}

@property (nonatomic,retain) HUFeatureOnboardingConfigurator * configurator;                                     //@synthesize configurator=_configurator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInputResults;                                             //@synthesize userInputResults=_userInputResults - In the implementation block
@property (nonatomic,retain) NAFuture * completionFuture;                                                        //@synthesize completionFuture=_completionFuture - In the implementation block
@property (nonatomic,retain) NSMutableArray * allRemainingFlowGroups;                                            //@synthesize allRemainingFlowGroups=_allRemainingFlowGroups - In the implementation block
@property (nonatomic,retain) UINavigationController * navController;                                             //@synthesize navController=_navController - In the implementation block
@property (__weak) UIViewController*<HUConfigurationViewController> _currentViewControllerForTests;              //@synthesize _currentViewControllerForTests=__currentViewControllerForTests - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedPostProcessing;                                                    //@synthesize hasPerformedPostProcessing=_hasPerformedPostProcessing - In the implementation block
@property (assign,nonatomic) BOOL restart;                                                                       //@synthesize restart=_restart - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UINavigationController *)navController;
-(BOOL)restart;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)setConfigurator:(HUFeatureOnboardingConfigurator *)arg1 ;
-(HUFeatureOnboardingConfigurator *)configurator;
-(NAFuture *)completionFuture;
-(id)initWithGroupedFeatures:(id)arg1 usageOptions:(id)arg2 ;
-(id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2 ;
-(NSMutableArray *)allRemainingFlowGroups;
-(id)_findNextAppropriateFlow:(id)arg1 ;
-(void)set_currentViewControllerForTests:(UIViewController*<HUConfigurationViewController>)arg1 ;
-(NSMutableDictionary *)userInputResults;
-(void)_skipAnyFlowsNoLongerRequired;
-(void)setHasPerformedPostProcessing:(BOOL)arg1 ;
-(BOOL)hasPerformedPostProcessing;
-(id)getPostProcessingFlowsForResults:(id)arg1 ;
-(void)setRestart:(BOOL)arg1 ;
-(void)configuratorDidFinish:(id)arg1 ;
-(void)configuratorDidUpdateViewController:(id)arg1 ;
-(id)getNextViewControllerForOnboardingInput:(id)arg1 ;
-(void)restartCurrentOnboarding;
-(id)initWithFeatures:(id)arg1 usageOptions:(id)arg2 ;
-(void)startOnboardingWithPresentingViewController:(id)arg1 ;
-(void)setUserInputResults:(NSMutableDictionary *)arg1 ;
-(void)setCompletionFuture:(NAFuture *)arg1 ;
-(void)setAllRemainingFlowGroups:(NSMutableArray *)arg1 ;
-(UIViewController*<HUConfigurationViewController>)_currentViewControllerForTests;
@end

