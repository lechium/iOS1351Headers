/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EventKit/EventKit-Structs.h>
@interface EKCompatibility : NSObject
+(BOOL)simulateLegacyBehaviors;
+(BOOL)isProgramSDKAtLeast:(SCD_Struct_EK2)arg1 ;
+(void)perform:(/*^block*/id)arg1 whileSimulatingLegacyBehaviors:(BOOL)arg2 ;
+(void)setSimulateLegacyBehaviors:(BOOL)arg1 ;
+(void)performWhileSimulatingLegacyBehaviors:(/*^block*/id)arg1 ;
@end

