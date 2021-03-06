/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface WFModulesCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateDelegateHidden;
	BOOL _invalidateDelegateMetrics;
	BOOL _invalidateDelegateOffsetsAndConnections;

}

@property (assign,nonatomic) BOOL invalidateDelegateHidden;                             //@synthesize invalidateDelegateHidden=_invalidateDelegateHidden - In the implementation block
@property (assign,nonatomic) BOOL invalidateDelegateMetrics;                            //@synthesize invalidateDelegateMetrics=_invalidateDelegateMetrics - In the implementation block
@property (assign,nonatomic) BOOL invalidateDelegateOffsetsAndConnections;              //@synthesize invalidateDelegateOffsetsAndConnections=_invalidateDelegateOffsetsAndConnections - In the implementation block
-(id)init;
-(BOOL)invalidateDelegateHidden;
-(void)setInvalidateDelegateHidden:(BOOL)arg1 ;
-(BOOL)invalidateDelegateMetrics;
-(void)setInvalidateDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateDelegateOffsetsAndConnections;
-(void)setInvalidateDelegateOffsetsAndConnections:(BOOL)arg1 ;
@end

