/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/CSSpotlightPresenting.h>

@protocol SBFLegibilitySettingsProvider;
@class CSPageViewController, CSCoverSheetViewController, SBDashBoardSpotlightViewController, NSString;

@interface SBDashBoardSpotlightPresenter : NSObject <SPUIRemoteSearchViewDelegate, SBFLegibilitySettingsProviderDelegate, CSSpotlightPresenting> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBDashBoardSpotlightViewController* _spotlightViewController;
	id<SBFLegibilitySettingsProvider> _spotlightLegibilitySettingsProvider;
	CSPageViewController* _todayPageViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) CSPageViewController * todayPageViewController;              //@synthesize todayPageViewController=_todayPageViewController - In the implementation block
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)dismissSearchView;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 ;
-(void)setTodayPageViewController:(CSPageViewController *)arg1 ;
-(id)createSpotlightLegiblitySettingsProvider;
-(void)dismissSpotlightWithCompletion:(/*^block*/id)arg1 ;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)dismissSpotlight;
-(CSPageViewController *)todayPageViewController;
@end
