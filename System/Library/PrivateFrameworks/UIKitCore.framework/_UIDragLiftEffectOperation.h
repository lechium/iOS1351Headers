/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIDragInteractionContext;
@class UIViewPropertyAnimator, NSSet, UIDragInteraction;

@interface _UIDragLiftEffectOperation : NSObject {

	UIViewPropertyAnimator* _propertyAnimator;
	id<UIDragInteractionContext> _context;
	NSSet* _items;
	UIDragInteraction* _interaction;

}

@property (nonatomic,retain) id<UIDragInteractionContext> context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSSet * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIDragInteraction * interaction;                          //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * propertyAnimator;              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
-(id<UIDragInteractionContext>)context;
-(void)setContext:(id<UIDragInteractionContext>)arg1 ;
-(UIDragInteraction *)interaction;
-(NSSet *)items;
-(void)setItems:(NSSet *)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(void)setInteraction:(UIDragInteraction *)arg1 ;
@end

