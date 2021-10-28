/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface BPSFollowUpAttributes : NSObject {

	BOOL _wantNotification;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSDictionary* _followUpActions;
	NSString* _localizedNotificationTitle;
	NSString* _localizedNotificationDescription;

}

@property (assign,nonatomic) BOOL wantNotification;                                  //@synthesize wantNotification=_wantNotification - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                          //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * localizedNotificationTitle;                    //@synthesize localizedNotificationTitle=_localizedNotificationTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedNotificationDescription;              //@synthesize localizedNotificationDescription=_localizedNotificationDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * followUpActions;                         //@synthesize followUpActions=_followUpActions - In the implementation block
+(id)attributeWithOptions:(id)arg1 ;
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSDictionary *)followUpActions;
-(NSString *)localizedNotificationTitle;
-(void)setFollowUpActions:(NSDictionary *)arg1 ;
-(void)setWantNotification:(BOOL)arg1 ;
-(void)setLocalizedNotificationTitle:(NSString *)arg1 ;
-(void)setLocalizedNotificationDescription:(NSString *)arg1 ;
-(BOOL)wantNotification;
-(NSString *)localizedNotificationDescription;
@end
