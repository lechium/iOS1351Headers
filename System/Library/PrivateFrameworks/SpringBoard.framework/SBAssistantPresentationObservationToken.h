/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBPresentationObservationToken.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>

@class SBAssistantController, NSString;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver> {

	SBAssistantController* _assistantController;

}

@property (nonatomic,readonly) SBAssistantController * assistantController;              //@synthesize assistantController=_assistantController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)state;
-(id)initWithAssistantController:(id)arg1 ;
-(void)assistantWillAppear:(id)arg1 ;
-(void)assistantDidAppear:(id)arg1 ;
-(SBAssistantController *)assistantController;
-(void)assistantWillDisappear:(id)arg1 ;
-(void)assistantDidDisappear:(id)arg1 ;
@end

