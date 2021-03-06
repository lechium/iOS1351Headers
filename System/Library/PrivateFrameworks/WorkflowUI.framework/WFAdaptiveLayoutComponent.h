/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKComponent.h>

@interface WFAdaptiveLayoutComponent : CKComponent {

	vector<CKComponent *, std::__1::allocator<CKComponent *> >* _children;

}
+(id)newWithChildren:(const vector<CKComponent *, std::__1::allocator<CKComponent *> >*)arg1 size:(const CKComponentSize*)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

