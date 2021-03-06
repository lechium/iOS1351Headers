/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode;

@interface REScriptASTSubscriptExpressionNode : REScriptASTNode {

	REScriptASTNode* _expression;
	REScriptASTNode* _startIndex;
	REScriptASTNode* _endIndex;

}

@property (nonatomic,readonly) REScriptASTNode * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * endIndex;                //@synthesize endIndex=_endIndex - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptASTNode *)startIndex;
-(REScriptASTNode *)expression;
-(REScriptASTNode *)endIndex;
-(id)initWithExpression:(id)arg1 startIndex:(id)arg2 endIndex:(id)arg3 ;
@end

