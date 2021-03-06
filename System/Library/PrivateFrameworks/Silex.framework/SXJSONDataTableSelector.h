/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXDataTableSelector.h>

@class NSString;

@interface SXJSONDataTableSelector : SXJSONObject <SXDataTableSelector> {

	unsigned long long _selectorWeight;
	unsigned long long _numberOfConditions;

}

@property (assign,nonatomic) unsigned long long numberOfConditions;              //@synthesize numberOfConditions=_numberOfConditions - In the implementation block
@property (assign,nonatomic) unsigned long long selectorWeight;                  //@synthesize selectorWeight=_selectorWeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long rowIndex; 
@property (nonatomic,readonly) unsigned long long columnIndex; 
@property (nonatomic,readonly) NSString * descriptor; 
-(NSString *)descriptor;
-(unsigned long long)columnIndex;
-(unsigned long long)rowIndex;
-(NSString *)description;
-(id)propertyList;
-(void)commonInit;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(id)initWithJSONData:(id)arg1 andVersion:(id)arg2 ;
-(unsigned long long)selectorBooleanForValue:(id)arg1 ;
-(unsigned long long)weightForSelectorKey:(id)arg1 ;
-(unsigned long long)selectorWeight;
-(unsigned long long)evenRowsWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)oddRowsWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)evenColumnsWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)oddColumnsWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)numberOfConditions;
-(void)setSelectorWeight:(unsigned long long)arg1 ;
-(void)setNumberOfConditions:(unsigned long long)arg1 ;
@end

