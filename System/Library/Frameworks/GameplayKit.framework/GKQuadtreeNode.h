/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtreeNode : NSObject {

	GKCQuadTreeNode<NSObject>* _cQuadTreeNode;
	GKQuad _quad;

}

@property (nonatomic,readonly) GKQuadRef quad;              //@synthesize quad=_quad - In the implementation block
-(1)max;
-(1)min;
-(GKQuadRef)quad;
-(void*)cQuadTreeNode;
-(void)setCQuadTreeNode:(void*)arg1 ;
@end

