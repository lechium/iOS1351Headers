/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PASDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(id)deviceUUID;
+(BOOL)isInternalBuild;
+(BOOL)isAudioAccessory;
+(BOOL)isLowEndHardware;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)isDNUEnabled;
+(BOOL)shouldIncludePredictionLogs;
-(id)init;
-(void)dealloc;
@end
