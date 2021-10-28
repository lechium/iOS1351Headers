/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (assign,nonatomic) unsigned long long logLevel; 
@property (nonatomic,retain) NSString * logSubsystem; 
@property (nonatomic,retain) NSString * message; 
+(unsigned long long)_logLevelFromString:(id)arg1 ;
+(id)_stringFromLogLevel:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(NSString *)logSubsystem;
-(void)setLogSubsystem:(NSString *)arg1 ;
@end
