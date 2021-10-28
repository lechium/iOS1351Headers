/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NTKFace;

@interface _NTKCompanionFaceRenderingTask : NSObject {

	NTKFace* _face;
	long long _detailMode;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NTKFace * face;                                         //@synthesize face=_face - In the implementation block
@property (getter=isMemberOfBatch,nonatomic,readonly) BOOL memberOfBatch; 
@property (nonatomic,readonly) long long detailMode;                                   //@synthesize detailMode=_detailMode - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(NTKFace *)face;
-(id)completionHandler;
-(id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isMemberOfBatch;
-(long long)detailMode;
@end
