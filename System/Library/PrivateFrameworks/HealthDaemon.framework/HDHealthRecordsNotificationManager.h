/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDConceptIndexManagerObserver.h>

@class HDProfile, NSString;

@interface HDHealthRecordsNotificationManager : NSObject <HDConceptIndexManagerObserver> {

	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notifyForNewHealthRecordsForProfile:(id)arg1 ;
+(void)badgeForNewHealthRecordsForProfile:(id)arg1 ;
+(void)_notifyUserIfNecessaryForProfile:(id)arg1 ;
-(id)init;
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)stopWithError:(id*)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2 ;
-(void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1 ;
@end

