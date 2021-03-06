/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface SXLayoutInstructions : NSObject {

	NSArray* _instructions;

}

@property (nonatomic,readonly) NSArray * instructions;              //@synthesize instructions=_instructions - In the implementation block
+(id)defaultInstructions;
-(id)description;
-(NSArray *)instructions;
-(void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(BOOL)areFulfilledForBlueprint:(id)arg1 ;
-(id)initWithInstructions:(id)arg1 ;
@end

