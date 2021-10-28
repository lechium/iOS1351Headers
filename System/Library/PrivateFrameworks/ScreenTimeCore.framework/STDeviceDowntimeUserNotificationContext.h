/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext {

	NSString* _localizedUserNotificationBodyKey;

}

@property (nonatomic,copy) NSString * localizedUserNotificationBodyKey;              //@synthesize localizedUserNotificationBodyKey=_localizedUserNotificationBodyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destinations;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3 ;
-(void)setLocalizedUserNotificationBodyKey:(NSString *)arg1 ;
-(NSString *)localizedUserNotificationBodyKey;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 ;
-(id)notificationBundleIdentifier;
@end
