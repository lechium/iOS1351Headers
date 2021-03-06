/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PFStateMachineTransition.h>

@class NSString;

@interface PFStateMachineSubflowTransition : PFStateMachineTransition {

	NSString* _subflowName;

}

@property (readonly) NSString * subflowName;              //@synthesize subflowName=_subflowName - In the implementation block
-(id)description;
-(void)performAction:(id)arg1 ;
-(id)destination:(id)arg1 ;
-(id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3 ;
-(id)initWithEventName:(id)arg1 subflow:(id)arg2 to:(id)arg3 ;
-(id)returnDestination:(id)arg1 ;
-(NSString *)subflowName;
@end

