/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreUser, STCoreDevice;

@interface STUserDeviceAddress : NSManagedObject

@property (nonatomic,retain) NSString * idsURI; 
@property (nonatomic,retain) STCoreUser * user; 
@property (nonatomic,retain) STCoreDevice * device; 
+(id)fetchOrCreateUserDeviceAddressWithUser:(id)arg1 device:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
@end

