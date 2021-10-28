/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface FCSectionSupergroupKnobs : NSObject {

	BOOL _isEligible;
	NSString* _nameOverride;
	double _rankMultiplier;

}

@property (assign,nonatomic) BOOL isEligible;                        //@synthesize isEligible=_isEligible - In the implementation block
@property (nonatomic,readonly) NSString * nameOverride;              //@synthesize nameOverride=_nameOverride - In the implementation block
@property (nonatomic,readonly) double rankMultiplier;                //@synthesize rankMultiplier=_rankMultiplier - In the implementation block
-(BOOL)isEligible;
-(void)setIsEligible:(BOOL)arg1 ;
-(id)initWithJSONString:(id)arg1 ;
-(id)initWithJSONData:(id)arg1 ;
-(NSString *)nameOverride;
-(double)rankMultiplier;
@end
