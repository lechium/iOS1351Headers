/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MTPowerAssertion : NSObject {

	unsigned _assertionID;
	NSString* _name;
	double _assertionTimeout;

}

@property (nonatomic,readonly) double assertionTimeout;              //@synthesize assertionTimeout=_assertionTimeout - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                   //@synthesize assertionID=_assertionID - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setAssertionID:(unsigned)arg1 ;
-(unsigned)assertionID;
-(void)releaseAssertion;
-(id)initWithName:(id)arg1 assertionTimeout:(double)arg2 ;
-(void)takeAssertion;
-(double)assertionTimeout;
@end
