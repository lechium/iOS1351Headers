/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FLFollowUpController, NSString;

@interface SUSFollowUpController : NSObject {

	FLFollowUpController* _followUpController;
	NSString* _identifier;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(FLFollowUpController *)followUpController;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(id)getCurrentSUSFollowUpItem;
-(BOOL)isAutoUpdateFollowUpCurrentlyBeingPresented;
-(void)dismissFollowUp;
-(BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
-(void)postFollowUp:(id)arg1 ;
-(void)dismissBadgeOnlyFollowUp;
-(void)dismissAutoUpdateFollowUp;
-(BOOL)isFollowUpCurrentlyBeingPresented;
-(void)SUSFollowUpControllerBadgeSettings;
-(void)SUSFollowUpControllerUnbadgeSettings;
@end

