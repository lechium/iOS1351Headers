/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGAnimationDelegate.h>

@class NSString;

@interface PXGDefaultAnimationDelegate : NSObject <PXGAnimationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)adjustGeometry:(inout SCD_Struct_PX13*)arg1 style:(inout SCD_Struct_PX16*)arg2 info:(inout SCD_Struct_PX17*)arg3 forTextSpriteAnimatingFromAttributes:(const SCD_Struct_PX69*)arg4 toAttributes:(const SCD_Struct_PX69*)arg5 inRootLayout:(id)arg6 ;
-(id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const SCD_Struct_PX13*)arg4 styles:(const SCD_Struct_PX16*)arg5 infos:(const SCD_Struct_PX17*)arg6 ;
-(void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(CGPoint)arg3 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX13*)arg2 styles:(inout SCD_Struct_PX16*)arg3 infos:(inout SCD_Struct_PX17*)arg4 forSpriteAppearingIntoRootIndexRange:(PXGSpriteIndexRange)arg5 ;
-(void)animation:(id)arg1 adjustGeometries:(inout SCD_Struct_PX13*)arg2 styles:(inout SCD_Struct_PX16*)arg3 infos:(inout SCD_Struct_PX17*)arg4 forSpriteDisappearingFromRootIndexRange:(PXGSpriteIndexRange)arg5 ;
@end
