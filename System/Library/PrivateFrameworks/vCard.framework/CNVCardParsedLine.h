/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface CNVCardParsedLine : NSObject {

	NSString* _name;
	id _value;
	NSArray* _parameters;
	NSString* _grouping;
	BOOL _isPrimary;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (retain) id value;                            //@synthesize value=_value - In the implementation block
@property (copy) NSArray * parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (assign) BOOL isPrimary;                      //@synthesize isPrimary=_isPrimary - In the implementation block
@property (copy) NSString * grouping;                   //@synthesize grouping=_grouping - In the implementation block
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(BOOL)isPrimary;
-(void)setGrouping:(NSString *)arg1 ;
-(NSString *)grouping;
-(void)setIsPrimary:(BOOL)arg1 ;
@end

