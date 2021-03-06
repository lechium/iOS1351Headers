/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFSQLExpressable.h>
#import <libobjc.A.dylib/EFSQLSelectComponent.h>

@protocol EFSQLExpressable;
@class EFSQLSelectStatement, NSString;

@interface _EFSQLJoinExpression : NSObject <EFSQLExpressable, EFSQLSelectComponent> {

	BOOL _isLeftOuter;
	EFSQLSelectStatement* _select;
	NSString* _tableName;
	NSString* _tableAlias;
	id<EFSQLExpressable> _joinConstraint;

}

@property (nonatomic,__weak,readonly) EFSQLSelectStatement * select;              //@synthesize select=_select - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                         //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableAlias;                        //@synthesize tableAlias=_tableAlias - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> joinConstraint;               //@synthesize joinConstraint=_joinConstraint - In the implementation block
@property (nonatomic,readonly) BOOL isLeftOuter;                                  //@synthesize isLeftOuter=_isLeftOuter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(EFSQLSelectStatement *)select;
-(NSString *)tableName;
-(NSString *)ef_SQLExpression;
-(void)addResultColumn:(id)arg1 ;
-(NSString *)tableAlias;
-(id)join:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(id)initWithSelect:(id)arg1 tableName:(id)arg2 tableAlias:(id)arg3 joinConstraint:(id)arg4 isLeftOuter:(BOOL)arg5 ;
-(id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(id)join:(id)arg1 on:(id)arg2 ;
-(id)leftOuterJoin:(id)arg1 on:(id)arg2 ;
-(id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(void)groupByColumn:(id)arg1 ;
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2 ;
-(BOOL)isLeftOuter;
-(id<EFSQLExpressable>)joinConstraint;
@end

