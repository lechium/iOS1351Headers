/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ComponentKit/ComponentKit-Structs.h>
@class NSMutableDictionary;

@interface CKComponentDataSourceAttachController : NSObject {

	NSMutableDictionary* _scopeIdentifierToAttachedViewMap;

}
-(id)init;
-(void)dealloc;
-(void)attachComponentLayout:(CKComponentLayout*)arg1 withScopeIdentifier:(int)arg2 withBoundsAnimation:(CKComponentBoundsAnimation)arg3 toView:(id)arg4 ;
-(void)detachComponentLayoutWithScopeIdentifier:(int)arg1 ;
-(id)attachStateForScopeIdentifier:(int)arg1 ;
-(void)_detachComponentLayoutFromView:(id)arg1 ;
@end
