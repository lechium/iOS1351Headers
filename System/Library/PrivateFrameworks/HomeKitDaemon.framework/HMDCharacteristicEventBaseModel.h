/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDEventModel.h>

@class NSString, NSNumber;

@interface HMDCharacteristicEventBaseModel : HMDEventModel

@property (nonatomic,retain) NSString * accessory; 
@property (nonatomic,retain) NSNumber * serviceID; 
@property (nonatomic,retain) NSNumber * characteristicID; 
+(id)properties;
+(id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 className:(Class)arg4 message:(id)arg5 checkForSupport:(BOOL)arg6 outCharateristic:(id*)arg7 ;
-(id)dependentUUIDs;
@end
