/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ComponentKit/ComponentKit-Structs.h>
#import <ComponentKit/CKComponent.h>

@class CKMemoizingComponentStateWrapper, CKComponent;

@interface CKMemoizingComponent : CKComponent {

	CKMemoizingComponentStateWrapper* _wrapper;
	CKComponent* _component;

}
+(id)initialState;
+(id)newWithComponentBlock:(/*^block*/id)arg1 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
@end

