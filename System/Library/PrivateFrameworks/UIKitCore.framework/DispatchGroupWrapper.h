/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject;

@interface DispatchGroupWrapper : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(id)init;
-(void)dealloc;
-(void)executeWithDispatchGroup:(/*^block*/id)arg1 ;
-(void)notify:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end
