/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ASCloudKitServerChangeTokenCache : NSObject <NSCopying> {

	NSMutableDictionary* _databaseChangeTokensByDatabaseScope;
	NSMutableDictionary* _zoneChangeTokensByZoneID;
	double _timestamp;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (assign,getter=isExpired,nonatomic) BOOL expired; 
+(id)changeTokenCacheFromUserDefaultsWithSerialQueue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExpired;
-(id)initWithSerialQueue:(id)arg1 ;
-(id)serverChangeTokenForRecordZoneID:(id)arg1 ;
-(void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 ;
-(void)setExpired:(BOOL)arg1 ;
-(void)persistToUserDefaults;
-(id)serverChangeTokenForDatabase:(id)arg1 ;
-(void)setServerChangeToken:(id)arg1 forDatabase:(id)arg2 ;
@end
