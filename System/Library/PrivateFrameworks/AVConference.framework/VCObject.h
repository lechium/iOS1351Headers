/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSString;

@interface VCObject : NSObject {

	NSString* _logPrefix;
	opaque_pthread_mutex_t _mutex;
	id _reportingAgent;

}

@property (nonatomic,retain) NSString * logPrefix;                              //@synthesize logPrefix=_logPrefix - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(NSString *)logPrefix;
-(void)setLogPrefix:(NSString *)arg1 ;
-(opaqueRTCReportingRef)reportingAgent;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
@end
