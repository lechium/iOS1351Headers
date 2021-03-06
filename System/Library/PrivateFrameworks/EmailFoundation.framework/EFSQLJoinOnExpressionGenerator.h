/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface EFSQLJoinOnExpressionGenerator : NSObject {

	NSString* _table;
	NSString* _tableAlias;
	NSString* _columns;

}

@property (nonatomic,readonly) NSString * table;                   //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) NSString * tableAlias;              //@synthesize tableAlias=_tableAlias - In the implementation block
@property (nonatomic,readonly) NSString * columns;                 //@synthesize columns=_columns - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)columns;
-(NSString *)table;
-(id)initWithTable:(id)arg1 tableAlias:(id)arg2 columns:(id)arg3 ;
-(BOOL)isEqualToJoinOnExpressonGenerator:(id)arg1 ;
-(NSString *)tableAlias;
-(id)joinOnExpression;
@end

