/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet, NSOrderedSet;

@interface FBOcclusionsStackEntry : NSObject {

	NSString* _key;
	double _level;
	NSSet* _occlusions;
	NSOrderedSet* _orderedOcclusions;

}

@property (nonatomic,copy,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double level;                                         //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSSet * occlusions; 
@property (nonatomic,copy,readonly) NSOrderedSet * orderedOcclusions;              //@synthesize orderedOcclusions=_orderedOcclusions - In the implementation block
-(id)description;
-(NSString *)key;
-(double)level;
-(id)initWithKey:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLevel:(double)arg1 ;
-(NSSet *)occlusions;
-(void)setOcclusions:(NSSet *)arg1 ;
-(NSOrderedSet *)orderedOcclusions;
@end

