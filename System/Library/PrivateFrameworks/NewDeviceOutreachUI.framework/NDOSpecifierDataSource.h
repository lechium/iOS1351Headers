/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifierDataSource.h>
#import <libobjc.A.dylib/NDOAppleCareFlowDelegate.h>

@class NDOManager, NSArray;

@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {

	BOOL _hasLoadedSpecifiers;
	NDOManager* _ndoManager;
	NSArray* _ndoSpecifiers;

}

@property (nonatomic,retain) NDOManager * ndoManager;              //@synthesize ndoManager=_ndoManager - In the implementation block
@property (nonatomic,retain) NSArray * ndoSpecifiers;              //@synthesize ndoSpecifiers=_ndoSpecifiers - In the implementation block
-(id)init;
-(void)reloadSpecifiers;
-(void)loadSpecifiers;
-(BOOL)areSpecifiersLoaded;
-(id)warrantyDetailText:(id)arg1 ;
-(NDOManager *)ndoManager;
-(id)warrantySpecifiersFromWarranty:(id)arg1 ;
-(NSArray *)ndoSpecifiers;
-(void)setNdoSpecifiers:(NSArray *)arg1 ;
-(void)updateNDOSpecifiersWithPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNdoManager:(NDOManager *)arg1 ;
-(void)outreachFinishedWithCompletion:(unsigned long long)arg1 ;
-(void)ndoAppleCareCoveragePressed:(id)arg1 ;
-(id)acController;
@end
