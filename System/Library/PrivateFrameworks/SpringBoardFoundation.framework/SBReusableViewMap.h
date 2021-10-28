/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBReusableViewMapDelegate;
@class NSMapTable, NSString;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding> {

	NSMapTable* _recycledViewsByClass;
	BOOL _invalidated;
	id<SBReusableViewMapDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBReusableViewMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long recycledViewCount; 
@property (nonatomic,readonly) unsigned long long viewRecyclingCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<SBReusableViewMapDelegate>)delegate;
-(void)setDelegate:(id<SBReusableViewMapDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)dequeueReusableViewOfClass:(Class)arg1 ;
-(id)newViewOfClass:(Class)arg1 ;
-(void)purgeViewsForClass:(Class)arg1 ;
-(void)recycleView:(id)arg1 ;
-(unsigned long long)recycledViewCount;
-(unsigned long long)viewRecyclingCount;
-(id)viewOfClass:(Class)arg1 ;
-(BOOL)isViewRecycled:(id)arg1 ;
-(void)purgeAllViews;
-(void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2 ;
@end
