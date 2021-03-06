/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKClinicalSourceAuthorizationController, NSString, HKSource;

@interface HKClinicalAuthorizationSequenceContext : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;
	NSString* _readUsageDescription;
	HKSource* _source;

}

@property (nonatomic,retain) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy) NSString * readUsageDescription;                                                  //@synthesize readUsageDescription=_readUsageDescription - In the implementation block
@property (nonatomic,copy) HKSource * source;                                                                //@synthesize source=_source - In the implementation block
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(void)setReadUsageDescription:(NSString *)arg1 ;
-(NSString *)readUsageDescription;
-(void)setAuthorizationController:(HKClinicalSourceAuthorizationController *)arg1 ;
-(HKClinicalSourceAuthorizationController *)authorizationController;
@end

