/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AXThreadTimerTask : NSObject {

	BOOL cancel;
	BOOL finished;
	BOOL active;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                       //@synthesize block=_block - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancel; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(void)run;
-(BOOL)isActive;
-(BOOL)isCancelled;
-(void)setFinished:(BOOL)arg1 ;
-(id)block;
-(BOOL)isFinished;
-(void)setActive:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)runAfterDelay:(float)arg1 ;
-(void)setCancel:(BOOL)arg1 ;
@end
