/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NADeallocationTracerDelegate;
@interface NADeallocationTracer : NSObject {

	id<NADeallocationTracerDelegate> _delegate;

}

@property (assign,nonatomic) id<NADeallocationTracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<NADeallocationTracerDelegate>)delegate;
-(void)setDelegate:(id<NADeallocationTracerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
