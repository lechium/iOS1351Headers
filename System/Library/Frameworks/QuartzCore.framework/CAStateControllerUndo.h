/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAStateRecorder.h>

@class CAState, NSMutableArray, NSString;

@interface CAStateControllerUndo : NSObject <CAStateRecorder> {

	CAStateControllerUndo* _next;
	CAState* _state;
	NSMutableArray* _elements;
	NSMutableArray* _transitions;

}

@property (readonly) CAStateControllerUndo * next;                      //@synthesize next=_next - In the implementation block
@property (nonatomic,retain) CAState * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitions;              //@synthesize transitions=_transitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CAState *)state;
-(CAStateControllerUndo *)next;
-(NSMutableArray *)elements;
-(void)setState:(CAState *)arg1 ;
-(void)addElement:(id)arg1 ;
-(void)setElements:(NSMutableArray *)arg1 ;
-(void)addTransition:(id)arg1 ;
-(void)willAddLayer:(id)arg1 ;
-(NSMutableArray *)transitions;
-(void)setTransitions:(NSMutableArray *)arg1 ;
@end

