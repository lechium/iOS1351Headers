/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSString;

@interface _EntitlementCheckResult : NSObject {

	BOOL _entitled;
	NSError* _error;
	NSString* _group;
	NSString* _entitlement;

}

@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * entitlement;                         //@synthesize entitlement=_entitlement - In the implementation block
@property (assign,getter=isEntitled,nonatomic) BOOL entitled;              //@synthesize entitled=_entitled - In the implementation block
-(void)setGroup:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)group;
-(NSString *)entitlement;
-(BOOL)isEntitled;
-(void)setEntitlement:(NSString *)arg1 ;
-(id)initWithEntitlement:(id)arg1 group:(id)arg2 ;
-(void)setEntitled:(BOOL)arg1 ;
@end
