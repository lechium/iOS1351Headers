/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction {

	NSArray* _contentClasses;

}

@property (nonatomic,retain) NSArray * contentClasses;              //@synthesize contentClasses=_contentClasses - In the implementation block
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)inputContentClasses;
-(id)targetDataInfo;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
-(void)openContentInSelectedApp:(id)arg1 ;
-(void)updateContentClasses;
-(id)selectedApp;
@end
