/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSQuickActionsDelegate <NSObject>
@required
-(BOOL)isPortrait;
-(BOOL)hasCamera;
-(BOOL)hasFlashlight;
-(BOOL)allowsFlashlight;
-(BOOL)allowsCameraPress;
-(void)touchBeganForButton:(id)arg1;
-(void)fireActionForButton:(id)arg1;
-(void)touchEndedForButton:(id)arg1;

@end
