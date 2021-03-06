/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface CKDVolumeManager : NSObject
+(id)_volumeForDisk:(const SCD_Struct_CK10*)arg1 mountToPath:(id)arg2 error:(id*)arg3 ;
+(id)createVolumeForDevice:(int)arg1 error:(id*)arg2 ;
+(id)existingVolumeForDevice:(int)arg1 ;
+(void)invalidateVolume:(id)arg1 ;
+(void)startVolumes;
+(void)shutdownVolumes;
+(id)deviceIDForVolumeUUID:(id)arg1 ;
+(id)volumeUUIDForDeviceID:(id)arg1 ;
@end

