/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UICursorArbiterCore;
@interface _UICursorArbiter : NSObject {

	id<_UICursorArbiterCore> _core;

}

@property (nonatomic,readonly) long long pointerState; 
+(id)sharedArbiter;
-(id)init;
-(long long)pointerState;
-(void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)resetStyleForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAutohide;
-(void)beginScrollingWithRegion:(id)arg1 ;
-(void)endScrollingWithRegion:(id)arg1 ;
@end
