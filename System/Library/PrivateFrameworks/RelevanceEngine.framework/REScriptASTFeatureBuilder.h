/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REScriptASTObjectBuilder.h>

@interface REScriptASTFeatureBuilder : REScriptASTObjectBuilder
-(id)_buildTransformedFeature:(id)arg1 features:(id)arg2 node:(id)arg3 error:(id*)arg4 ;
-(BOOL)_loadIndexFromNode:(id)arg1 index:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)objectTypeErrorDescription;
-(id)buildObjectWithIdentifierNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3 ;
-(id)buildObjectWithFunctionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id*)arg2 ;
@end

