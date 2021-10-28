/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ComponentKit/CKComponentController.h>
#import <libobjc.A.dylib/WFLocationPickerViewControllerDelegate.h>

@class NSString;

@interface WFLocationParameterComponentController : CKComponentController <WFLocationPickerViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped:(id)arg1 ;
-(void)parameterLayoutTapped:(id)arg1 ;
-(void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2 ;
-(void)locationPickerDidCancel:(id)arg1 ;
@end
