/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIStatusBarDataConverter : NSObject
+(id)_cellularEntryWithData:(const SCD_Struct_UI109*)arg1 signalStrengthEnabled:(BOOL)arg2 serviceEnabled:(BOOL)arg3 dataNetworkEnabled:(BOOL)arg4 serviceString:(const char*)arg5 serviceCrossfadeString:(const char*)arg6 serviceBadgeString:(const char*)arg7 serviceContentType:(unsigned)arg8 dataNetworkType:(unsigned)arg9 gsmSignalStrengthRaw:(int)arg10 gsmSignalStrengthBars:(int)arg11 callForwardingType:(int)arg12 lowDataModeActive:(BOOL)arg13 ;
+(id)convertData:(const SCD_Struct_UI109*)arg1 fromReferenceData:(id)arg2 ;
@end
