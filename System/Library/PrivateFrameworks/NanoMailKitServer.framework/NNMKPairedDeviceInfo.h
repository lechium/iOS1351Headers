/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NNMKPairedDeviceInfo : NSObject {

	double _screenWidth;
	double _screenScale;

}

@property (assign,nonatomic) double screenWidth;              //@synthesize screenWidth=_screenWidth - In the implementation block
@property (assign,nonatomic) double screenScale;              //@synthesize screenScale=_screenScale - In the implementation block
+(id)pairedDeviceInfoWithScreenWidth:(double)arg1 screenScale:(double)arg2 ;
-(void)setScreenScale:(double)arg1 ;
-(double)screenScale;
-(double)screenWidth;
-(void)setScreenWidth:(double)arg1 ;
@end

