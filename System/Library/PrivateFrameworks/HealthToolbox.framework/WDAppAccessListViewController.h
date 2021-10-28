/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, NSArray, HKSample, UIFont;

@interface WDAppAccessListViewController : HKTableViewController {

	HKHealthStore* _healthStore;
	NSArray* _allowedApps;
	NSArray* _disallowedApps;
	HKSample* _sample;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) NSArray * allowedApps;                 //@synthesize allowedApps=_allowedApps - In the implementation block
@property (nonatomic,retain) NSArray * disallowedApps;              //@synthesize disallowedApps=_disallowedApps - In the implementation block
@property (nonatomic,retain) HKSample * sample;                     //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                     //@synthesize bodyFont=_bodyFont - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSample:(HKSample *)arg1 ;
-(HKSample *)sample;
-(UIFont *)bodyFont;
-(id)_sourceForIndexPath:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(void)_refreshAppAuthorizationData;
-(void)setAllowedApps:(NSArray *)arg1 ;
-(void)setDisallowedApps:(NSArray *)arg1 ;
-(id)_identifierForCellInSection:(long long)arg1 ;
-(id)_textForCellAtIndexPath:(id)arg1 ;
-(void)_loadIconForSource:(id)arg1 onCell:(id)arg2 ofTableView:(id)arg3 ;
-(void)resetAccess;
-(NSArray *)allowedApps;
-(NSArray *)disallowedApps;
@end
