/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface STCommunicationLimits : NSObject <NSCopying> {

	BOOL _contactsEditable;
	long long _screenTimeCommunicationLimit;
	long long _downtimeCommunicationLimit;
	long long _contactManagementState;

}

@property (assign) long long screenTimeCommunicationLimit;              //@synthesize screenTimeCommunicationLimit=_screenTimeCommunicationLimit - In the implementation block
@property (assign) long long downtimeCommunicationLimit;                //@synthesize downtimeCommunicationLimit=_downtimeCommunicationLimit - In the implementation block
@property (assign) long long contactManagementState;                    //@synthesize contactManagementState=_contactManagementState - In the implementation block
@property (assign) BOOL contactsEditable;                               //@synthesize contactsEditable=_contactsEditable - In the implementation block
+(BOOL)hasShownCompatibilityAlertForDSID:(id)arg1 ;
+(void)setHasShownCompatibilityAlert:(BOOL)arg1 forDSID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)contactsEditable;
-(long long)contactManagementState;
-(void)setContactManagementState:(long long)arg1 ;
-(void)setContactsEditable:(BOOL)arg1 ;
-(long long)screenTimeCommunicationLimit;
-(long long)downtimeCommunicationLimit;
-(void)setDowntimeCommunicationLimit:(long long)arg1 ;
-(void)setScreenTimeCommunicationLimit:(long long)arg1 ;
@end

