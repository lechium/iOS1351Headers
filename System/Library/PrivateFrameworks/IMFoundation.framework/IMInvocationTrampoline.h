/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMInvocationTrampoline : NSObject {

	id _target;

}

@property (retain) id target;              //@synthesize target=_target - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)performInvocation:(id)arg1 ;
@end

