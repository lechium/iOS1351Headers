/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>

@protocol HUTriggerActionBuilderEditorDelegate;
@class NSString;

@interface HUForwardingTriggerActionBuilderDelegate : NSObject <HUTriggerEditorDelegate> {

	id<HUTriggerActionBuilderEditorDelegate> _triggerActionBuilderEditorDelegate;

}

@property (assign,nonatomic,__weak) id<HUTriggerActionBuilderEditorDelegate> triggerActionBuilderEditorDelegate;              //@synthesize triggerActionBuilderEditorDelegate=_triggerActionBuilderEditorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(id)initWithTriggerActionBuilderEditorDelegate:(id)arg1 ;
-(void)setTriggerActionBuilderEditorDelegate:(id<HUTriggerActionBuilderEditorDelegate>)arg1 ;
-(id<HUTriggerActionBuilderEditorDelegate>)triggerActionBuilderEditorDelegate;
@end
