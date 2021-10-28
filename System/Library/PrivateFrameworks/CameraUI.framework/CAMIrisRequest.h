/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CAMIrisRequest <NSObject>
@property (nonatomic,readonly) long long irisMode; 
@required
-(long long)irisMode;
-(id)irisStillImagePersistenceUUIDForEV0:(BOOL)arg1;
-(id)irisVideoPersistenceUUIDForEV0:(BOOL)arg1;
-(BOOL)isEV0LocalVideoDestinationURL:(id)arg1;
-(id)irisIdentifierForEV0:(BOOL)arg1;
-(id)irisLocalVideoDestinationURLForEV0:(BOOL)arg1;
-(id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(BOOL)arg1;
-(BOOL)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg1;

@end
