/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSExpression, NSSQLFetchIntermediate, NSSQLEntity, NSMutableString, NSString, NSSQLColumn, NSMutableArray;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSExpression* _trailingKeypath;
	NSExpression* _variableExpression;
	NSSQLFetchIntermediate* _fetchIntermediate;
	NSSQLEntity* _selectFromEntity;
	NSMutableString* _selectFromCorrelationTarget;
	NSString* _selectEntityAlias;
	NSSQLEntity* _governingEntityForVariable;
	NSSQLColumn* _variableColumn;
	NSString* _variableAlias;
	NSSQLColumn* _targetColumn;
	NSString* _targetAlias;
	NSMutableArray* _keypathsToPromote;
	BOOL _useDistinct;
	BOOL _isCount;
	BOOL _hasTrailingFunction;
	BOOL _onlyTrailIsCount;
	BOOL _subqueryHasTruePredicate;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(void)selectDistinct;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)_isKeypathScopedToSubquery:(id)arg1 ;
-(void)_setVariableColumn:(id)arg1 ;
-(BOOL)canDoDirectJoinGivenPredicate:(id)arg1 ;
-(void)_createCollectionJoinsForFetchInContext:(id)arg1 ;
-(void)_createSelectClauseInFetchWithContext:(id)arg1 ;
@end

