/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKTransitPassProperties, NSArray;

@interface NPKTransitPassInfo : NSObject {

	PKTransitPassProperties* _transitProperties;
	NSArray* _balanceFields;
	NSArray* _commutePlanFields;

}

@property (nonatomic,readonly) PKTransitPassProperties * transitProperties;              //@synthesize transitProperties=_transitProperties - In the implementation block
@property (nonatomic,readonly) NSArray * balanceFields;                                  //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,readonly) NSArray * commutePlanFields;                              //@synthesize commutePlanFields=_commutePlanFields - In the implementation block
-(id)description;
-(NSArray *)balanceFields;
-(PKTransitPassProperties *)transitProperties;
-(id)initWithTransitProperties:(id)arg1 balanceFields:(id)arg2 commutePlanFields:(id)arg3 ;
-(NSArray *)commutePlanFields;
@end

