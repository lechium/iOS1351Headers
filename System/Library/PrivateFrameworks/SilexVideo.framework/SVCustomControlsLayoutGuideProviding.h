/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UILayoutGuide;


@protocol SVCustomControlsLayoutGuideProviding <NSObject>
@property (nonatomic,readonly) UILayoutGuide * transportControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * displayModeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * volumeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * animatedUnobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredTopAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * accessoryBarLayoutGuide; 
@required
-(UILayoutGuide *)transportControlsAreaLayoutGuide;
-(UILayoutGuide *)displayModeControlsAreaLayoutGuide;
-(UILayoutGuide *)volumeControlsAreaLayoutGuide;
-(UILayoutGuide *)unobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)animatedUnobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)unobscuredTopAreaLayoutGuide;
-(UILayoutGuide *)accessoryBarLayoutGuide;

@end
