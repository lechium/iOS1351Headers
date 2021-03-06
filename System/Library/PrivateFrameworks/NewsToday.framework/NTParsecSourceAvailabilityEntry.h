/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NTSourceAvailabilityEntry.h>

@class FCNetworkReachability, NSString;

@interface NTParsecSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {

	/*^block*/id _availabilityChangedNotificationBlock;
	FCNetworkReachability* _networkReachability;

}

@property (nonatomic,readonly) FCNetworkReachability * networkReachability;              //@synthesize networkReachability=_networkReachability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock;                      //@synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock - In the implementation block
-(id)init;
-(BOOL)isAvailable;
-(FCNetworkReachability *)networkReachability;
-(id)initWithNetworkReachability:(id)arg1 ;
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
@end

