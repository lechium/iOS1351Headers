/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLGKDecisionTree, GKDecisionNode, GKRandomSource;

@interface GKDecisionTree : NSObject <NSSecureCoding> {

	GKCDecisionTree* _decisionTree;
	BOOL _isInduced;
	MLGKDecisionTree* mlkitDecisionTree;
	GKDecisionNode* _rootNode;
	GKRandomSource* _randomSource;

}

@property (nonatomic,retain) GKDecisionNode * rootNode;                //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,copy) GKRandomSource * randomSource;              //@synthesize randomSource=_randomSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GKDecisionNode *)rootNode;
-(id)initWithURL:(id)arg1 error:(id)arg2 ;
-(void)setRootNode:(GKDecisionNode *)arg1 ;
-(GKRandomSource *)randomSource;
-(void)setRandomSource:(GKRandomSource *)arg1 ;
-(id)findActionForAnswers:(id)arg1 ;
-(id)initWithAttribute:(id)arg1 ;
-(id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
-(BOOL)exportToURL:(id)arg1 error:(id)arg2 ;
-(id)getFlattenedTree;
-(id)findAccuracyWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
@end

