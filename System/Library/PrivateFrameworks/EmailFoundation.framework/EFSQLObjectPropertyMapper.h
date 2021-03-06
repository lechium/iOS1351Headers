/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFObjectPropertyMapper.h>

@protocol EFSQLExpressable;
@class NSDictionary, EFSQLTableSchema, EFSQLColumnSchema, NSArray, NSString;

@interface EFSQLObjectPropertyMapper : NSObject <EFObjectPropertyMapper> {

	BOOL _isPlaceholder;
	NSDictionary* _children;
	EFSQLTableSchema* _table;
	EFSQLColumnSchema* _sourceColumn;
	id<EFSQLExpressable> _condition;
	NSArray* _additionalColumns;
	id<EFSQLExpressable> _bitExpression;

}

@property (nonatomic,readonly) EFSQLTableSchema * table;                        //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) EFSQLColumnSchema * sourceColumn;                //@synthesize sourceColumn=_sourceColumn - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> condition;                  //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) NSArray * additionalColumns;                     //@synthesize additionalColumns=_additionalColumns - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                                //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> bitExpression;              //@synthesize bitExpression=_bitExpression - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * children;                             //@synthesize children=_children - In the implementation block
-(id<EFSQLExpressable>)condition;
-(BOOL)isPlaceholder;
-(NSDictionary *)children;
-(void)setChildren:(NSDictionary *)arg1 ;
-(EFSQLTableSchema *)table;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)childForKey:(id)arg1 ;
-(EFSQLColumnSchema *)sourceColumn;
-(id<EFSQLExpressable>)bitExpression;
-(id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4 ;
-(id)initWithColumn:(id)arg1 condition:(id)arg2 ;
-(id)initWithColumn:(id)arg1 condition:(id)arg2 additionalColumns:(id)arg3 bitExpression:(id)arg4 ;
-(id)initWithChildren:(id)arg1 table:(id)arg2 ;
-(id)initWithChildren:(id)arg1 table:(id)arg2 additionalColumns:(id)arg3 ;
-(id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 additionalColumns:(id)arg3 ;
-(id)initWithColumn:(id)arg1 ;
-(id)initWithColumn:(id)arg1 bitExpression:(id)arg2 ;
-(id)initWithColumn:(id)arg1 additionalColumns:(id)arg2 ;
-(id)initPlaceholderMapperWithChildren:(id)arg1 ;
-(NSArray *)additionalColumns;
@end

