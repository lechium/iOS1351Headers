/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GKSupplementaryViewFactory : NSObject {

	id _target;
	Class _reusableViewClass;
	SEL _configurator;
	SEL _selector;

}

@property (assign,nonatomic) id target;                            //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                         //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) Class reusableViewClass;              //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (nonatomic,readonly) SEL configurator;                   //@synthesize configurator=_configurator - In the implementation block
+(id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 ;
+(id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4 ;
-(void)dealloc;
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(SEL)configurator;
-(Class)reusableViewClass;
-(void)setReusableViewClass:(Class)arg1 ;
-(id)initWithClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4 ;
@end

