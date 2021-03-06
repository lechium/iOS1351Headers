/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PDFTimerPrivate;

@interface PDFTimer : NSObject {

	PDFTimerPrivate* _private;

}
-(void)dealloc;
-(void)cancel;
-(void)_execute;
-(void)update;
-(id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3 ;
-(id)initWithSelector:(SEL)arg1 forTarget:(id)arg2 ;
-(BOOL)isUpdateQueued;
@end

