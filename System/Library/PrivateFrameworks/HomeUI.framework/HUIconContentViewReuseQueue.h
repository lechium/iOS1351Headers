/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface HUIconContentViewReuseQueue : NSObject {

	Class _contentViewClass;
	NSMutableArray* _reuseStack;

}

@property (nonatomic,readonly) NSMutableArray * reuseStack;              //@synthesize reuseStack=_reuseStack - In the implementation block
@property (nonatomic,readonly) Class contentViewClass;                   //@synthesize contentViewClass=_contentViewClass - In the implementation block
+(id)globalReuseQueueForContentViewClass:(Class)arg1 ;
-(id)init;
-(id)initWithContentViewClass:(Class)arg1 ;
-(NSMutableArray *)reuseStack;
-(Class)contentViewClass;
-(id)dequeueContentView;
-(void)reapContentView:(id)arg1 ;
@end

