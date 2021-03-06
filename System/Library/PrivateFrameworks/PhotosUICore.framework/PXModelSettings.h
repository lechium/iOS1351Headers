/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXModelSettings : PXSettings {

	double _photoAnalysisGraphInitialGraceDelay;
	double _photoAnalysisGraphProgressUpdateInterval;

}

@property (assign,nonatomic) double photoAnalysisGraphInitialGraceDelay;                   //@synthesize photoAnalysisGraphInitialGraceDelay=_photoAnalysisGraphInitialGraceDelay - In the implementation block
@property (assign,nonatomic) double photoAnalysisGraphProgressUpdateInterval;              //@synthesize photoAnalysisGraphProgressUpdateInterval=_photoAnalysisGraphProgressUpdateInterval - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(double)photoAnalysisGraphInitialGraceDelay;
-(void)setPhotoAnalysisGraphInitialGraceDelay:(double)arg1 ;
-(double)photoAnalysisGraphProgressUpdateInterval;
-(void)setPhotoAnalysisGraphProgressUpdateInterval:(double)arg1 ;
@end

