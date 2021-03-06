/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPeopleStatusViewDelegate.h>

@class PXPeopleProgressManager, PXPeopleStatusViewController, PXPeopleSectionedDataSource, NSString;

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate> {

	unsigned long long _onboardStatus;
	PXPeopleProgressManager* _progressManager;
	PXPeopleStatusViewController* _statusViewController;
	PXPeopleSectionedDataSource* _peopleDataSource;

}

@property (assign,nonatomic) unsigned long long onboardStatus;                                 //@synthesize onboardStatus=_onboardStatus - In the implementation block
@property (nonatomic,retain) PXPeopleProgressManager * progressManager;                        //@synthesize progressManager=_progressManager - In the implementation block
@property (nonatomic,retain) PXPeopleStatusViewController * statusViewController;              //@synthesize statusViewController=_statusViewController - In the implementation block
@property (nonatomic,retain) PXPeopleSectionedDataSource * peopleDataSource;                   //@synthesize peopleDataSource=_peopleDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(PXPeopleProgressManager *)progressManager;
-(void)setProgressManager:(PXPeopleProgressManager *)arg1 ;
-(void)statusViewControllerEnterButtonTapped:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 progressManager:(id)arg2 ;
-(void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2 ;
-(void)_updateStatusViewForStatus:(unsigned long long)arg1 progress:(double)arg2 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)peopleHomeController;
-(void)_pushToPeopleHome:(id)arg1 ;
-(void)_progressChanged:(id)arg1 ;
-(unsigned long long)onboardStatus;
-(void)setOnboardStatus:(unsigned long long)arg1 ;
-(PXPeopleStatusViewController *)statusViewController;
-(void)setStatusViewController:(PXPeopleStatusViewController *)arg1 ;
-(PXPeopleSectionedDataSource *)peopleDataSource;
-(void)setPeopleDataSource:(PXPeopleSectionedDataSource *)arg1 ;
@end

