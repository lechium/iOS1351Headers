/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXTilingDebugDelegate.h>

@class PXTilingControllerDebugInfo, NSString;

@interface PXTilingDebugUIView : UIView <PXTilingDebugDelegate> {

	double _debugWidth;
	PXTilingControllerDebugInfo* __debugInfo;

}

@property (setter=_setDebugInfo:,nonatomic,retain) PXTilingControllerDebugInfo * _debugInfo;              //@synthesize _debugInfo=__debugInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(PXTilingControllerDebugInfo *)_debugInfo;
-(void)tilingControllerDidUpdateDebugInfo:(id)arg1 ;
-(void)_setDebugInfo:(id)arg1 ;
@end

