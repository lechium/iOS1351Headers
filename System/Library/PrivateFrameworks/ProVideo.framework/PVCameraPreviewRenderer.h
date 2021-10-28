/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject {

	HGRef<PVRenderManager>* _renderManager;
	HGRef<HGRenderJob>* _currentRenderJob;
	PVVideoCompositingContext* _compositingContext;

}
-(id)init;
-(void)dealloc;
-(HGRef<HGGLContext>*)rootContext;
-(HGRef<PVRenderManager>*)renderManager;
-(void)enqueueRenderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getSharedEAGLContext;
@end
